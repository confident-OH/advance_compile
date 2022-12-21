#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void func_2(uint64_t,uint64_t);
void main();
	
void func_2(uint64_t a, uint64_t b){
	uint64_t local_array[8], local_array_base = (uint64_t)(local_array+1);
	uint64_t c;
	uint64_t r5;
	uint64_t r14;
	uint64_t r3;
	uint64_t r8;
	uint64_t r6;
	uint64_t r7;
label_3:
	r3=(b==0);

	if(r3!=0){goto label_14;}

	r5=(c=a);

	r6=(a=b);

	r7=(c%b);

	r8=(b=r7);

	printf(" %lld", c);

	printf(" %lld", a);

	printf(" %lld", b);

	printf("\n");

	goto label_3;

label_14:
	r14=(32744+global_array_base);

	*((uint64_t*)r14)=a;

	return;
}


	
void main(){
	uint64_t local_array[0], local_array_base = (uint64_t)(local_array+0);
	uint64_t r43;
	uint64_t r40;
	uint64_t r46;
	uint64_t r23;
	uint64_t r47;
	uint64_t r24;
	uint64_t r35;
	uint64_t r42;
	uint64_t r19;
	uint64_t r30;
	uint64_t r26;
	uint64_t r37;
	uint64_t r21;
	uint64_t r27;
	uint64_t r31;
	uint64_t r39;
	r19=(32760+global_array_base);

	*((uint64_t*)r19)=25733;

	r21=(32752+global_array_base);

	*((uint64_t*)r21)=48611;

	r23=(32760+global_array_base);

	r24=*((uint64_t*)r23);

	r26=(32752+global_array_base);

	r27=*((uint64_t*)r26);

	func_2(r24, r27);
	r30=(32744+global_array_base);

	r31=*((uint64_t*)r30);

	printf(" %lld", r31);

	printf("\n");

	printf("\n");

	r35=(32760+global_array_base);

	*((uint64_t*)r35)=7485671;

	r37=(32752+global_array_base);

	*((uint64_t*)r37)=7480189;

	r39=(32760+global_array_base);

	r40=*((uint64_t*)r39);

	r42=(32752+global_array_base);

	r43=*((uint64_t*)r42);

	func_2(r40, r43);
	r46=(32744+global_array_base);

	r47=*((uint64_t*)r46);

	printf(" %lld", r47);

	printf("\n");

	return;
}


