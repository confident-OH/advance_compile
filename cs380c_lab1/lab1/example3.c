
//eight queen problem
/* Your test program. */
#include <stdio.h>
#define WriteLine() printf("\n");
#define WriteLong(x) printf(" %lld", (long)x);
#define ReadLong(a) if (fscanf(stdin, "%lld", &a) != 1) a = 0;
#define long long long

long ans[92];
long count;
long position[8];

void record(){
    long base;
    long i;
    long idx;
    long now_posi;
    i = 0;
    base = 1;
    while (i < 8)
    {
        idx = -1;
        now_posi = position[i];
        if(now_posi/16>0){
            idx = idx + 4;
            now_posi = now_posi / 16;
        }
        if(now_posi/4>0){
            idx = idx + 2;
            now_posi = now_posi / 4;
        }
        idx = idx + now_posi;
        ans[count] = ans[count] + idx*base;
        i = i + 1;
        base = base * 8;
    }
}

void queen(long ori_mid, long ori_right, long ori_left, long level){
    long mid, right, left, now_posi;
    if(level == 8){
        record();
        count = count + 1;
    }else{
        mid = ori_mid;
        right = ori_right;
        left = ori_left;
        now_posi = 1;
        while(mid != 0){
            if(mid%2 == 1){
                if(right%2 == 1){
                    if(left%2 == 1){
                        position[level] = now_posi;
                        queen(ori_mid - now_posi,(ori_right-now_posi)/2 + 128, (ori_left-now_posi)*2 +1, level + 1);
                    }
                }
            }
            now_posi = now_posi * 2;
            mid = mid / 2;
            right = right / 2;
            left = left / 2;    
        }
    }
    
}

void output(){
    long i,j;
    long group;
    long posi;
    i = 0;
    while(i < 92){
        group = ans[i];
        while(group >0){
            posi = group % 8;
            j = 0;
            while(j < 8){
                if(j==posi){
                    WriteLong(1);
                }else{
                    WriteLong(0);
                }
                j = j + 1;
            }
            WriteLine();
            group = group / 8;
        }
        WriteLine();
        i = i + 1;
    }
}

void main(){
    long mid, left, right;
    mid = 255;
    left = 255;
    right = 255;
    queen(mid, left, right, 0);
    output();
}