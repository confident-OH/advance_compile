#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void main();
	
	
void main(){
	uint64_t local_array[8], local_array_base = (uint64_t)(local_array+1);
	uint64_t i;
	uint64_t r49;
	uint64_t r48;
	uint64_t r45;
	uint64_t r44;
	uint64_t r43;
	uint64_t r42;
	uint64_t r40;
	uint64_t r39;
	uint64_t r38;
	uint64_t r37;
	uint64_t r36;
	uint64_t r35;
	uint64_t r34;
	uint64_t r14;
	uint64_t r13;
	uint64_t r11;
	uint64_t r10;
	uint64_t r33;
	uint64_t r16;
	uint64_t r5;
	uint64_t r28;
	uint64_t r15;
	uint64_t r4;
	uint64_t r27;
	uint64_t r9;
	uint64_t r32;
	uint64_t r6;
	uint64_t r29;
	uint64_t r7;
	uint64_t r30;
	uint64_t r19;
	uint64_t r20;
	uint64_t r21;
	uint64_t r22;
	uint64_t r25;
	uint64_t r31;
	r4=(i=2);

	r5=(0*8);

	r6=(31936+global_array_base);

	r7=(r6+r5);

	*((uint64_t*)r7)=1;

	r9=(1*8);

	r10=(31936+global_array_base);

	r11=(r10+r9);

	*((uint64_t*)r11)=1;

	r13=(0*8);

	r14=(31936+global_array_base);

	r15=(r14+r13);

	r16=*((uint64_t*)r15);

	printf(" %lld", r16);

	printf("\n");

	r19=(1*8);

	r20=(31936+global_array_base);

	r21=(r20+r19);

	r22=*((uint64_t*)r21);

	printf(" %lld", r22);

	printf("\n");

label_25:
	r25=(i<100);

	if(r25==0){goto label_51;}

	r27=(i*8);

	r28=(31936+global_array_base);

	r29=(r28+r27);

	r30=(i-1);

	r31=(r30*8);

	r32=(31936+global_array_base);

	r33=(r32+r31);

	r34=(i-2);

	r35=(r34*8);

	r36=(31936+global_array_base);

	r37=(r36+r35);

	r38=*((uint64_t*)r33);

	r39=*((uint64_t*)r37);

	r40=(r38+r39);

	*((uint64_t*)r29)=r40;

	r42=(i*8);

	r43=(31936+global_array_base);

	r44=(r43+r42);

	r45=*((uint64_t*)r44);

	printf(" %lld", r45);

	printf("\n");

	r48=(i+1);

	r49=(i=r48);

	goto label_25;

label_51:
	return;
}


