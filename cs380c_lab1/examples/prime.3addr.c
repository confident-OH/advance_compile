#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void main();
	
	
void main(){
	uint64_t local_array[24], local_array_base = (uint64_t)(local_array+3);
	uint64_t j;
	uint64_t i;
	uint64_t v;
	uint64_t r54;
	uint64_t r49;
	uint64_t r48;
	uint64_t r47;
	uint64_t r45;
	uint64_t r43;
	uint64_t r42;
	uint64_t r41;
	uint64_t r39;
	uint64_t r38;
	uint64_t r37;
	uint64_t r36;
	uint64_t r35;
	uint64_t r34;
	uint64_t r32;
	uint64_t r14;
	uint64_t r13;
	uint64_t r11;
	uint64_t r10;
	uint64_t r52;
	uint64_t r5;
	uint64_t r28;
	uint64_t r15;
	uint64_t r4;
	uint64_t r27;
	uint64_t r9;
	uint64_t r17;
	uint64_t r53;
	uint64_t r6;
	uint64_t r29;
	uint64_t r55;
	uint64_t r8;
	uint64_t r31;
	uint64_t r18;
	uint64_t r20;
	uint64_t r21;
	uint64_t r22;
	uint64_t r23;
	uint64_t r24;
	uint64_t r25;
	uint64_t r26;
	r4=(0*8);

	r5=(29568+global_array_base);

	r6=(r5+r4);

	*((uint64_t*)r6)=2;

	r8=(0*8);

	r9=(29568+global_array_base);

	r10=(r9+r8);

	r11=*((uint64_t*)r10);

	printf(" %lld", r11);

	r13=(i=1);

	r14=(v=3);

label_15:
	r15=(i<400);

	if(r15==0){goto label_57;}

	r17=(j=0);

label_18:
	r18=(j<i);

	if(r18==0){goto label_45;}

	r20=(j*8);

	r21=(29568+global_array_base);

	r22=(r21+r20);

	r23=(j*8);

	r24=(29568+global_array_base);

	r25=(r24+r23);

	r26=*((uint64_t*)r22);

	r27=*((uint64_t*)r25);

	r28=(r26*r27);

	r29=(r28<=v);

	if(r29!=0){goto label_34;}

	r31=(i-1);

	r32=(j=r31);

	goto label_42;

label_34:
	r34=(j*8);

	r35=(29568+global_array_base);

	r36=(r35+r34);

	r37=*((uint64_t*)r36);

	r38=(v%r37);

	r39=(r38==0);

	if(r39==0){goto label_42;}

	r41=(j=i);

label_42:
	r42=(j+1);

	r43=(j=r42);

	goto label_18;

label_45:
	r45=(j==i);

	if(r45==0){goto label_54;}

	r47=(i*8);

	r48=(29568+global_array_base);

	r49=(r48+r47);

	*((uint64_t*)r49)=v;

	printf(" %lld", v);

	r52=(i+1);

	r53=(i=r52);

label_54:
	r54=(v+2);

	r55=(v=r54);

	goto label_15;

label_57:
	printf("\n");

	return;
}


