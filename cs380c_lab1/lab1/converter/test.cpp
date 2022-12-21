#include <bits/stdc++.h>

using namespace std;

uint64_t global[]={1,2,3,4};

int main(){
    uint64_t addr = (uint64_t)global;
    addr += 6;
    printf("%#x\n",*((uint64_t*)addr));
}
