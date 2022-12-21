#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void main();
	
	
void main(){
	uint64_t local_array[104], local_array_base = (uint64_t)(local_array+13);
	uint64_t temp;
	uint64_t i;
	uint64_t j;
	uint64_t r76;
	uint64_t r75;
	uint64_t r73;
	uint64_t r72;
	uint64_t r71;
	uint64_t r70;
	uint64_t r68;
	uint64_t r67;
	uint64_t r65;
	uint64_t r64;
	uint64_t r35;
	uint64_t r29;
	uint64_t r25;
	uint64_t r24;
	uint64_t r22;
	uint64_t r21;
	uint64_t r20;
	uint64_t r19;
	uint64_t r31;
	uint64_t r8;
	uint64_t r55;
	uint64_t r7;
	uint64_t r54;
	uint64_t r32;
	uint64_t r9;
	uint64_t r4;
	uint64_t r51;
	uint64_t r28;
	uint64_t r5;
	uint64_t r52;
	uint64_t r16;
	uint64_t r10;
	uint64_t r57;
	uint64_t r34;
	uint64_t r11;
	uint64_t r58;
	uint64_t r13;
	uint64_t r14;
	uint64_t r61;
	uint64_t r17;
	uint64_t r36;
	uint64_t r37;
	uint64_t r38;
	uint64_t r39;
	uint64_t r40;
	uint64_t r41;
	uint64_t r42;
	uint64_t r44;
	uint64_t r45;
	uint64_t r46;
	uint64_t r47;
	uint64_t r48;
	uint64_t r49;
	uint64_t r50;
	uint64_t r53;
	uint64_t r59;
	uint64_t r62;
	r4=(i=0);

label_5:
	r5=(i<10);

	if(r5==0){goto label_16;}

	r7=(i*8);

	r8=(-104+local_array_base);

	r9=(r8+r7);

	r10=(10-i);

	r11=(r10-1);

	*((uint64_t*)r9)=r11;

	r13=(i+1);

	r14=(i=r13);

	goto label_5;

label_16:
	r16=(i=0);

label_17:
	r17=(i<10);

	if(r17==0){goto label_27;}

	r19=(i*8);

	r20=(-104+local_array_base);

	r21=(r20+r19);

	r22=*((uint64_t*)r21);

	printf(" %lld", r22);

	r24=(i+1);

	r25=(i=r24);

	goto label_17;

label_27:
	printf("\n");

	r28=(i=0);

label_29:
	r29=(i<10);

	if(r29==0){goto label_67;}

	r31=(j=0);

label_32:
	r32=(j<i);

	if(r32==0){goto label_64;}

	r34=(j*8);

	r35=(-104+local_array_base);

	r36=(r35+r34);

	r37=(i*8);

	r38=(-104+local_array_base);

	r39=(r38+r37);

	r40=*((uint64_t*)r36);

	r41=*((uint64_t*)r39);

	r42=(r40<=r41);

	if(r42!=0){goto label_61;}

	r44=(i*8);

	r45=(-104+local_array_base);

	r46=(r45+r44);

	r47=*((uint64_t*)r46);

	r48=(temp=r47);

	r49=(i*8);

	r50=(-104+local_array_base);

	r51=(r50+r49);

	r52=(j*8);

	r53=(-104+local_array_base);

	r54=(r53+r52);

	r55=*((uint64_t*)r54);

	*((uint64_t*)r51)=r55;

	r57=(j*8);

	r58=(-104+local_array_base);

	r59=(r58+r57);

	*((uint64_t*)r59)=temp;

label_61:
	r61=(j+1);

	r62=(j=r61);

	goto label_32;

label_64:
	r64=(i+1);

	r65=(i=r64);

	goto label_29;

label_67:
	r67=(i=0);

label_68:
	r68=(i<10);

	if(r68==0){goto label_78;}

	r70=(i*8);

	r71=(-104+local_array_base);

	r72=(r71+r70);

	r73=*((uint64_t*)r72);

	printf(" %lld", r73);

	r75=(i+1);

	r76=(i=r75);

	goto label_68;

label_78:
	printf("\n");

	return;
}


