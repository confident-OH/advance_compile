#ifndef __OPERAND_H__
#define __OPERAND_H__
#include "include.h"
//#include "instruction.h"
class Instruction;
enum OperandType{
    GP,
    FP,
    Constant,
    Addr_offset,//global_array_base or local_array_base are used for representation
    Field_offset,
    Local_var,
    Reg,
    Inst
};

class Operand{
    public:
    OperandType type;
    int idx;
    string name;
    string opstr;
    Instruction* redirect;
    Operand(){}
    Operand(string& op){
        redirect = null;
        idx = 0;
        init(op);
    }
    ~Operand(){
        if(redirect){
            redirect = null;
        }
    }
    void init(string& op){
        opstr = op;
        if(op == "GP"){
            type = GP;
            name = op;
        } else if(op == "FP"){
            //warn if it's array in frame, using FP
            type = FP;
            name = op;
        } else if(op[0] == '('){
            type = Reg;
            name = op.substr(1,op.size()-2);
            idx = atoi(name.c_str());
        } else if(op[0] == '['){
            type = Inst;
            name = op.substr(1,op.size()-2);
            idx = atoi(name.c_str());
        } else {
            int index = op.find('#');
            if(index == -1){
                type = Constant;
                name = op;
                idx = atoi(name.c_str());
            }else{
                name = op.substr(0,index);
                string offset = op.substr(index+1);
                idx = atoi(offset.c_str());
                if(name.size()>=7&&name.substr(name.size()-7,7)=="_offset"){
                    type = Field_offset;
                }else if(name == "global_array_base" || name == "local_array_base"){
                    type = Addr_offset;
                }else if(name.size()>=6&&name.substr(name.size()-5,5)=="_base"){
                    type = Addr_offset;          
                }else{
                    type = Local_var;
                }
            }
        }
    }

    friend ostream& print3addr(ostream& os, const Operand &op){
        os<<op.opstr;
        return os;
    }

    friend ostream& operator<<(ostream& os, const Operand &op){
        switch(op.type){
            case GP:os<<"global_array_base";break;
            case FP:os<<"local_array_base";break;
            case Constant:os<<op.name;break;
            case Addr_offset:os<<op.idx;break;
            case Field_offset:os<<op.idx;break;
            case Local_var:os<<op.name;break;
            case Reg:os<<"r"<<op.name;break;
            case Inst:os<<op.name;break;
            default:
            abort();
        }
        return os;
    }

    
};

#endif