
//pod(x,y) computer x^y
/* Your test program. */
#include <stdio.h>
#define WriteLine() printf("\n");
#define WriteLong(x) printf(" %lld", (long)x);
#define ReadLong(a) if (fscanf(stdin, "%lld", &a) != 1) a = 0;
#define long long long

void mypow(long x, long y){
    long res;
    long base;
    res  = 1;
    base = x;
    while(y != 0){
        if(y%2 == 1){
            res = res * base;
        }
        base = base * base;
        y = y / 2;
    }
    WriteLong(res);
    WriteLine();
}

void main(){
    mypow(2,10);
    mypow(3,7);
    mypow(5,11);
}