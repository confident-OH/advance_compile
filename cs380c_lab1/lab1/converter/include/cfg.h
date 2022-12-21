#ifndef __CFG_H__
#define __CFG_H__

#include "block.h"

class Cfg{
    public:
        map<int,Block*> blocks;
        //notice insts[i]->line
        int scr(int line, Block* blk,map<int,int>&id,map<int,int>&rid, map<int,int>&access,int& seq){
            if(access[line]){
                return id[line];
            }
            access[line] = 1;
            id[line] = seq;
            rid[seq] = line;
            seq++;
            int min_ret = seq;
            for(auto it:blk->post){
                int ret = scr(it.first,it.second,id,rid,access,seq);
                if(access[rid[ret]]==1){
                    min_ret = min(min_ret,ret);
                }
            }
            if(min_ret<=id[line]){
                blk->scr = 1;
            }
            access[line] = 2;
            id[line] = min(min_ret,id[line]);
            return min_ret;
        }
        Cfg(vector<Instruction*> insts){
            int i = 0;
            int idx;
            int first = 0;
            int last = 0;
            while(i<insts.size()){
                if(insts[i]->cmd->type==ENTER){
                    first = i;
                    idx = insts[i]->line;
                }
                if(insts[i]->goto_flag&&idx!=insts[i]->line){
                    //cout<<*insts[i]<<endl;
                    Block *blk = new Block(insts,first,i);
                    blocks[idx] = blk;
                    first = i;
                    idx = insts[i]->line;
                }
                if(insts[i]->cmd->type==BR||insts[i]->cmd->type==BLBC||
                insts[i]->cmd->type==BLBS||insts[i]->cmd->type==CALL){
                    //cout<<*insts[i]<<endl;
                    Block *blk = new Block(insts,first,i+1);
                    blocks[idx] = blk;
                    first = i+1;
                    idx = insts[i]->line + 1;//assert insts line continues
                }
                i++;
            }
            Block *blk = new Block(insts,first,i);
            blocks[idx] = blk;
            for(auto it:blocks){
                Instruction* inst = *(it.second->insts.rbegin());
                switch(inst->cmd->type){
                    case BR: 
                        it.second->add_post(inst->operands[0]->idx,blocks[inst->operands[0]->idx]);
                        blocks[inst->operands[0]->idx]->add_pre(it.first,it.second);
                        break;
                    case BLBC:
                    case BLBS:
                    //
                        it.second->add_post(inst->operands[1]->idx,blocks[inst->operands[1]->idx]);
                        blocks[inst->operands[1]->idx]->add_pre(it.first,it.second);
                    default:
                        if(it.first!=idx){
                            it.second->add_post(inst->line + 1,blocks[inst->line+1]);
                            blocks[inst->line+1]->add_pre(it.first,it.second);
                        }
                }
            }
            //cout<<"cfg end"<<endl;
            map<int,int> access,id,rid;
            int seq = 0;
            for(auto it:blocks){
                scr(it.first,it.second,id,rid,access,seq);
            }
            return;
        }
        
        ~Cfg(){
            for(auto it:blocks){
                delete it.second;
            }
            blocks.clear();
        }

        friend ostream& operator<<(ostream&os,const Cfg &cfg){
            os<<"Basic blocks:";
            for(auto it:cfg.blocks){
                os<<" "<<it.first;
            }
            os<<endl<<"CFG:"<<endl;
            for(auto it:cfg.blocks){
                os<<it.first<<" ->";
                for(auto post_it:it.second->post){
                    os<<" "<<post_it.first;
                }
                os<<endl;
            }
            return os;
        }

        friend ostream& printscr(ostream&os,const Cfg &cfg){
            os<<"Basic blocks:";
            for(auto it:cfg.blocks){
                os<<" "<<it.first;
            }
            os<<endl<<"SCR:";
            for(auto it:cfg.blocks){
                if(it.second->scr)
                    os<<" "<<it.first;
            }
            os<<endl;
            return os;
        }

};

#endif