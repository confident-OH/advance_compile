#ifndef __PROGRAM_H__
#define __PROGRAM_H__

#include "func.h"

class Program{
    public:
    string header;
    int line;
    vector<Func*> funcs;
    Program(istream& is){
        line = 1;
        Func* func = new Func(is,line);
        while(func->complete){
            funcs.push_back(func);
            func = new Func(is,line);
        }
        delete func;
    }

    ~Program(){
        for(auto func:funcs){
            delete func;
        }
        funcs.clear();
    }

    friend ostream& operator<<(ostream&os, const Program &prog){
        os<<"#include <stdio.h>\n"<<"#include <stdint.h>"<<endl;
        //os<<"using namespace std;"<<endl;
        os<<"uint64_t global_array[4096], global_array_base=(uint64_t)global_array;"<<endl;
        for(auto func:prog.funcs){
            os<<"void "<<func->name<<"(";
            int need_comma = 0;
            for(int i = 0; i < func->param_size/SIZE; i ++){
                if(need_comma){
                    os<<",";
                }else{
                    need_comma = 1;
                }
                os<<"uint64_t";
            }
            os<<");"<<endl;
        }
        for(auto func:prog.funcs){
            os<<(*func);
        }
        return os;
    }

    friend ostream& printcfg(ostream&os,const Program &prog){
        for(auto func: prog.funcs){
            printcfg(os,*func);
        }
        return os;
    }
    friend ostream& printscr(ostream&os,const Program &prog){
        for(auto func: prog.funcs){
            printscr(os,*func);
        }
        return os;
    }
};

#endif