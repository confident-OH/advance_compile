#ifndef __FUNC_H__
#define __FUNC_H__
#include "cfg.h"

class Func{
    public:
    unordered_map<int,string> simbol;//idx < 0 need to define 
    unordered_map<int, int> regs;//used regs in intr line
    unordered_map<int, int>goto_inst;// branch in intr line
    vector<Instruction*> insts;//todo get regs need to define
    Cfg* cfg;
    string name;//main or func_ enter_line
    int var_size;
    int param_size;
    int base_line;//the first instr line
    int enter_line;
    bool complete;//full function with enter and ret
    Func(){}
    Func(istream& is,int& base){
        cfg = null;
        base_line = base;
        int line = 0;
        complete = 0;
        var_size = 0;
        param_size = 0;
        enter_line = 0;
        string str;
        Instruction* inst;
        while(getline(is,str)){
            inst = new Instruction(base+line,str);
            insts.push_back(inst);
            switch(inst->cmd->type){
                case ENTRYPC:
                    name = "main";
                    break;
                case ENTER:
                    enter_line = base + line;
                if(name.size()==0){
                    name = "func_"+to_string(base + line);
                }
                    var_size = inst->operands[0]->idx;
                    break;
                case RET:
                    line++;
                    param_size = inst->operands[0]->idx;
                    complete = 1;
                    for(auto it:goto_inst){
                        insts[it.first-base]->goto_flag = 1;
                        //cout<<*insts[it.first-base]<<endl;
                    }
                    base += line;
                    cfg = new Cfg(insts);
                    return;
                    break;
                case BLBC:
                case BLBS:
                    assert(inst->operands.size()==2);
                    assert(inst->operands[1]->type == Inst);
                    goto_inst[inst->operands[1]->idx] = 1;
                    if(inst->operands[0]->type == Reg){
                        regs[inst->operands[0]->idx] = 1;
                    }
                break;
                case BR:
                    assert(inst->operands.size()==1);
                    assert(inst->operands[0]->type == Inst);
                    goto_inst[inst->operands[0]->idx] = 1;
                break;
                case CMPEQ:
                case CMPLE:
                case CMPLT:
                case READ:
                case NEG:
                case LOAD:
                case ADD:
                case SUB:
                case MUL:
                case DIV:
                case MOD:
                case MOVE:
                    regs[base+line] = 1;
                    break;
            }
            for(auto op: inst->operands){
                if(op->type==Local_var){
                    if(simbol.find(op->idx)==simbol.end()){
                        simbol[op->idx] = op->name;
                    }
                }
            }
        line++;
        }
        return;
    }

    ~Func(){
        for(auto inst:insts){
            delete inst;
        }
        if(cfg){
            delete cfg;
        }
        insts.clear();
    }

    friend ostream& operator<<(ostream&os,const Func &func){
        int i = 0;
        vector<Instruction *> params;
        while(i<func.insts.size()){
            if(func.insts[i]->goto_flag){
                os<<"label_"<<func.insts[i]->line<<":"<<endl;
            }
            if(func.insts[i]->cmd->type==ENTER){
                os<<"void "<<func.name<<"(";
                int need_comma = 0;
                string param;
                int param_offset = func.param_size;
                while(param_offset>0){
                    if(need_comma){
                        os<<", ";
                    }else{
                        need_comma = 1;
                    }
                    param = func.simbol.at(param_offset+8);
                    if(param.size()==0){
                        param = "p"+to_string(param_offset);
                    }
                    os<<"uint64_t "<<param;
                    param_offset -= 8;
                }
                os<<"){\n";
                os<<"\tuint64_t local_array["<<func.var_size<<"], local_array_base = (uint64_t)(local_array+"<<func.var_size/8<<");"<<endl;
                for(auto it:func.simbol){
                    if(it.first<0){
                        os<<"\tuint64_t "<<it.second<<";"<<endl;
                    }
                }
                for(auto it:func.regs){
                    os<<"\tuint64_t r"<<it.first<<";"<<endl;
                }
            }else if(func.insts[i]->cmd->type==PARAM){
                params.push_back(func.insts[i]);
            }else if(func.insts[i]->cmd->type==CALL){
                os<<"\t"<<(*func.insts[i])<<"(";
                int need_comma = 0;
                for(auto it: params){
                    if(need_comma){
                        os<<", ";
                    }else{
                        need_comma = 1;
                    }
                    os<<(*it);
                }
                params.clear();
                os<<");"<<endl;
            }else{
                os<<"\t"<<(*func.insts[i])<<endl;
            }
        i++;
        }
        return os;
    }

    friend ostream& printcfg(ostream&os,const Func &func){
        os<<"Function: "<<func.enter_line<<endl;;
        if(func.cfg){
            os<<(*func.cfg);
        }
        return os;
    }
    friend ostream& printscr(ostream&os,const Func &func){
        os<<"Function: "<<func.enter_line<<endl;;
        if(func.cfg){
            printscr(os,*func.cfg);
        }
        return os;
    }
};
#endif
