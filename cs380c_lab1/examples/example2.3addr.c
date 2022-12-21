#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void func_2(uint64_t,uint64_t);
void main();
	
void func_2(uint64_t x, uint64_t y){
	uint64_t local_array[16], local_array_base = (uint64_t)(local_array+2);
	uint64_t base;
	uint64_t res;
	uint64_t r13;
	uint64_t r12;
	uint64_t r11;
	uint64_t r10;
	uint64_t r15;
	uint64_t r4;
	uint64_t r14;
	uint64_t r3;
	uint64_t r8;
	uint64_t r5;
	uint64_t r7;
	r3=(res=1);

	r4=(base=x);

label_5:
	r5=(y==0);

	if(r5!=0){goto label_17;}

	r7=(y%2);

	r8=(r7==1);

	if(r8==0){goto label_12;}

	r10=(res*base);

	r11=(res=r10);

label_12:
	r12=(base*base);

	r13=(base=r12);

	r14=(y/2);

	r15=(y=r14);

	goto label_5;

label_17:
	printf(" %lld", res);

	printf("\n");

	return;
}


	
void main(){
	uint64_t local_array[0], local_array_base = (uint64_t)(local_array+0);
	func_2(2, 10);
	func_2(3, 7);
	func_2(5, 11);
	return;
}


