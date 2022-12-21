//computer the first 100 fibonacci number

/* Your test program. */
#include <stdio.h>
#define WriteLine() printf("\n");
#define WriteLong(x) printf(" %lld", (long)x);
#define ReadLong(a) if (fscanf(stdin, "%lld", &a) != 1) a = 0;
#define long long long

long f[104];

void main(){
    long i;
    i = 2;
    f[0]=1;
    f[1]=1;
    WriteLong(f[0]);
    WriteLine();
    WriteLong(f[1]);
    WriteLine();
    while(i<100){
        f[i] = f[i-1]+f[i-2];
        WriteLong(f[i]);
        WriteLine();
        i = i + 1;
    }
}