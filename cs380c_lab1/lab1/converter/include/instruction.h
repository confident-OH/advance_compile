#ifndef __INDTRUCTION_H__
#define __INSTRUCTION_H__

#include "command.h"
#include "operand.h"
#include "sstream"

#define decodeop(i) if(cmd->type > CmdType::OP##i){\
    ss >> info;\
    op = new Operand(info);\
    operands.push_back(op);\
}\

class Instruction{
    public:
    int line;
    Command* cmd;
    vector<Operand*> operands;
    bool goto_flag;
    Instruction(){}
    Instruction(int idx, string str){
        goto_flag = 0;
        line = idx;
        stringstream ss(str);
        string instr;
        ss>>instr;
        string lines;
        ss>>lines;
        string info;
        ss >> info;
        cmd = new Command(info);
        Operand* op;
        decodeop(1);
        decodeop(2);
    }
    ~Instruction(){
        if(cmd){
            delete cmd;
            cmd = NULL;
        }
        for(auto op:operands){
            delete op;
        }
        operands.clear();
    }

    friend ostream& operator<<(ostream&os,const Instruction &inst){
        switch(inst.cmd->type){
            case NOP:break;
            case ENTRYPC:break;
                //os<<"int main(){"<<endl;break;
            case WRL:
                os<<"printf(\"\\n\");"<<endl;break;
            case READ:
                os<<"scanf(\"%lld\",&r"<<inst.line<<");"<<endl;break;
            case NEG:
                os<<"r"<<inst.line<<"=-"<<(*inst.operands[0])<<";"<<endl;break;
            case BR:os<<"goto label_"<<(*inst.operands[0])<<";"<<endl;break;
            case CALL:os<<"func_"<<(*inst.operands[0]);break;
            case LOAD:os<<"r"<<inst.line<<"=*((uint64_t*)"<<(*inst.operands[0])<<");"<<endl;break;
            case WRITE:os<<"printf(\" %lld\", "<<(*inst.operands[0])<<");"<<endl;break;
            case PARAM:os<<(*inst.operands[0]);break;
            case ENTER:break;
            case RET:os<<"return;\n}\n"<<endl;break;
            case ADD:os<<"r"<<inst.line<<"=("<<(*inst.operands[0])<<"+"<<(*inst.operands[1])<<");"<<endl;break;
            case SUB:os<<"r"<<inst.line<<"=("<<(*inst.operands[0])<<"-"<<(*inst.operands[1])<<");"<<endl;break;
            case MUL:os<<"r"<<inst.line<<"=("<<(*inst.operands[0])<<"*"<<(*inst.operands[1])<<");"<<endl;break;
            case DIV:os<<"r"<<inst.line<<"=("<<(*inst.operands[0])<<"/"<<(*inst.operands[1])<<");"<<endl;break;
            case MOD:os<<"r"<<inst.line<<"=("<<(*inst.operands[0])<<"%"<<(*inst.operands[1])<<");"<<endl;break;
            case CMPEQ:os<<"r"<<inst.line<<"=("<<(*inst.operands[0])<<"=="<<(*inst.operands[1])<<");"<<endl;break;
            case CMPLE:os<<"r"<<inst.line<<"=("<<(*inst.operands[0])<<"<="<<(*inst.operands[1])<<");"<<endl;break;
            case CMPLT:os<<"r"<<inst.line<<"=("<<(*inst.operands[0])<<"<"<<(*inst.operands[1])<<");"<<endl;break;
            case BLBC:os<<"if("<<(*inst.operands[0])<<"==0){goto label_"<<(*inst.operands[1])<<";}"<<endl;break;
            case BLBS:os<<"if("<<(*inst.operands[0])<<"!=0){goto label_"<<(*inst.operands[1])<<";}"<<endl;break;
            case MOVE:os<<"r"<<inst.line<<"=("<<(*inst.operands[1])<<"="<<(*inst.operands[0])<<");"<<endl;break;
            case STORE:os<<"*((uint64_t*)"<<(*inst.operands[1])<<")="<<(*inst.operands[0])<<";"<<endl;break;
            default:
                abort();
        }
        return os;
    }
};

#endif