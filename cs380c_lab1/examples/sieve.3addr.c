#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void main();
	
	
void main(){
	uint64_t local_array[8016], local_array_base = (uint64_t)(local_array+1002);
	uint64_t j;
	uint64_t i;
	uint64_t r50;
	uint64_t r49;
	uint64_t r47;
	uint64_t r46;
	uint64_t r44;
	uint64_t r43;
	uint64_t r41;
	uint64_t r40;
	uint64_t r38;
	uint64_t r37;
	uint64_t r36;
	uint64_t r35;
	uint64_t r13;
	uint64_t r12;
	uint64_t r57;
	uint64_t r10;
	uint64_t r33;
	uint64_t r16;
	uint64_t r52;
	uint64_t r5;
	uint64_t r28;
	uint64_t r15;
	uint64_t r51;
	uint64_t r4;
	uint64_t r27;
	uint64_t r56;
	uint64_t r9;
	uint64_t r32;
	uint64_t r17;
	uint64_t r53;
	uint64_t r6;
	uint64_t r29;
	uint64_t r8;
	uint64_t r31;
	uint64_t r19;
	uint64_t r20;
	uint64_t r22;
	uint64_t r23;
	uint64_t r25;
	uint64_t r26;
	r4=(0*8);

	r5=(-8016+local_array_base);

	r6=(r5+r4);

	*((uint64_t*)r6)=0;

	r8=(1*8);

	r9=(-8016+local_array_base);

	r10=(r9+r8);

	*((uint64_t*)r10)=0;

	r12=(i=2);

label_13:
	r13=(i<1000);

	if(r13==0){goto label_22;}

	r15=(i*8);

	r16=(-8016+local_array_base);

	r17=(r16+r15);

	*((uint64_t*)r17)=1;

	r19=(i+1);

	r20=(i=r19);

	goto label_13;

label_22:
	r22=(i=2);

label_23:
	r23=(i<1000);

	if(r23==0){goto label_46;}

	r25=(i*8);

	r26=(-8016+local_array_base);

	r27=(r26+r25);

	r28=*((uint64_t*)r27);

	r29=(r28==0);

	if(r29!=0){goto label_43;}

	r31=(j=2);

label_32:
	r32=(i*j);

	r33=(r32<1000);

	if(r33==0){goto label_43;}

	r35=(i*j);

	r36=(r35*8);

	r37=(-8016+local_array_base);

	r38=(r37+r36);

	*((uint64_t*)r38)=0;

	r40=(j+1);

	r41=(j=r40);

	goto label_32;

label_43:
	r43=(i+1);

	r44=(i=r43);

	goto label_23;

label_46:
	r46=(i=2);

label_47:
	r47=(i<1000);

	if(r47==0){goto label_59;}

	r49=(i*8);

	r50=(-8016+local_array_base);

	r51=(r50+r49);

	r52=*((uint64_t*)r51);

	r53=(r52==0);

	if(r53!=0){goto label_56;}

	printf(" %lld", i);

label_56:
	r56=(i+1);

	r57=(i=r56);

	goto label_47;

label_59:
	printf("\n");

	return;
}


