#ifndef __BLOCK_H__
#define __BLOCK_H__
#include "instruction.h"

class Block{
    public:
    vector<Instruction*> insts;
    map<int,Block*> post;
    map<int,Block*> pre;
    int scr;
    Block(vector<Instruction*> input,int first, int last)
    :insts(input.begin()+first,input.begin()+last)
    {
        scr = 0;
        assert(insts.size());
        //cout<<insts[0]->line<<" "<<insts.size()<<endl;
    }
    Block(vector<Instruction*>::iterator begin,vector<Instruction*>::iterator end)
    :insts(begin,end)
    {

    }
    void add_post(int line,Block* blk){
        //cout<<insts[0]->line<<" "<<line<<" "<<"post"<<endl;
        post[line] = blk;
    }
    void add_pre(int line,Block* blk){
        pre[line] = blk;
    }
    ~Block(){
        insts.clear();
    }

};
#endif