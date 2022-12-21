#ifndef __COMMAND_H__
#define __COMMAND_H__
#include "include.h"

enum CmdType{
    OP0,//no operand
    NOP,
    ENTRYPC,
    WRL,
    READ,
    OP1,//1 operand
    EQUAL,// = used for tmp need to redirect
    NEG,
    BR,
    CALL,
    LOAD,
    WRITE,
    PARAM,
    ENTER,
    RET,
    OP2,//2 operand
    ADD,
    SUB,
    MUL,
    DIV,
    MOD,
    CMPEQ,
    CMPLE,
    CMPLT,
    BLBC,
    BLBS,
    MOVE,
    STORE,
    OP3//3 operand
};

class Command{
    public:
    CmdType type;
    string cmdstr;
    Command(){}
    Command(string& cmd){
        init(cmd);
    }
    void init(string& cmd){
        cmdstr = cmd;
        if(cmd=="nop"){
            type = NOP;
        } else if(cmd == "add"){
            type = ADD;
        } else if(cmd == "sub"){
            type = SUB;
        } else if (cmd == "mul"){
            type = MUL;
        } else if (cmd == "div"){
            type = DIV;
        } else if (cmd == "mod"){
            type = MOD;
        } else if(cmd == "neg"){
            type = NEG;
        } else if(cmd == "cmpeq"){
            type = CMPEQ;
        } else if (cmd == "cmple"){
            type = CMPLE;
        } else if (cmd == "cmplt"){
            type = CMPLT;
        } else if(cmd == "br"){
            type = BR;
        } else if(cmd == "blbc"){
            type = BLBC;
        } else if(cmd == "blbs"){
            type = BLBS;
        } else if (cmd == "call"){
            type = CALL;
        } else if (cmd == "load"){
            type = LOAD;
        } else if(cmd == "move"){
            type = MOVE;
        } else if(cmd == "store"){
            type = STORE;
        } else if (cmd == "read"){
            type = READ;
        } else if (cmd == "write"){
            type = WRITE;
        } else if (cmd == "wrl"){
            type = WRL;
        } else if(cmd == "param"){
            type = PARAM;
        } else if(cmd == "enter"){
            type = ENTER;
        } else if (cmd == "ret"){
            type = RET;
        } else if (cmd == "entrypc"){
            type = ENTRYPC;
        } else {
            printf("error command type: %s\n",cmd);
        }
    }

    friend ostream& print3addr(ostream& os, const Command &cmd){
        os<<cmd.cmdstr;
        return os;
    }
    string tstr(){
        return cmdstr;
    }
};
#endif