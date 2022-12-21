#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void main();
	
	
void main(){
	uint64_t local_array[0], local_array_base = (uint64_t)(local_array+0);
	uint64_t r89;
	uint64_t r88;
	uint64_t r86;
	uint64_t r85;
	uint64_t r84;
	uint64_t r81;
	uint64_t r80;
	uint64_t r79;
	uint64_t r78;
	uint64_t r75;
	uint64_t r74;
	uint64_t r72;
	uint64_t r71;
	uint64_t r70;
	uint64_t r68;
	uint64_t r67;
	uint64_t r66;
	uint64_t r30;
	uint64_t r28;
	uint64_t r25;
	uint64_t r24;
	uint64_t r23;
	uint64_t r22;
	uint64_t r20;
	uint64_t r33;
	uint64_t r10;
	uint64_t r57;
	uint64_t r31;
	uint64_t r8;
	uint64_t r19;
	uint64_t r32;
	uint64_t r9;
	uint64_t r56;
	uint64_t r27;
	uint64_t r4;
	uint64_t r51;
	uint64_t r15;
	uint64_t r62;
	uint64_t r29;
	uint64_t r6;
	uint64_t r53;
	uint64_t r12;
	uint64_t r59;
	uint64_t r14;
	uint64_t r16;
	uint64_t r63;
	uint64_t r18;
	uint64_t r34;
	uint64_t r35;
	uint64_t r36;
	uint64_t r37;
	uint64_t r39;
	uint64_t r40;
	uint64_t r41;
	uint64_t r42;
	uint64_t r45;
	uint64_t r46;
	uint64_t r47;
	uint64_t r48;
	uint64_t r50;
	uint64_t r52;
	uint64_t r58;
	uint64_t r60;
	uint64_t r64;
	r4=(32728+global_array_base);

	*((uint64_t*)r4)=0;

	r6=(32760+global_array_base);

	*((uint64_t*)r6)=5;

label_8:
	r8=(32728+global_array_base);

	r9=*((uint64_t*)r8);

	r10=(r9<270);

	if(r10==0){goto label_84;}

	r12=(32736+global_array_base);

	*((uint64_t*)r12)=0;

	r14=(32760+global_array_base);

	r15=*((uint64_t*)r14);

	r16=(32752+global_array_base);

	*((uint64_t*)r16)=r15;

label_18:
	r18=(32752+global_array_base);

	r19=*((uint64_t*)r18);

	r20=(r19==4);

	if(r20!=0){goto label_56;}

	r22=(32752+global_array_base);

	r23=*((uint64_t*)r22);

	r24=(r23%2);

	r25=(r24==1);

	if(r25==0){goto label_45;}

	r27=(32752+global_array_base);

	r28=*((uint64_t*)r27);

	r29=(32752+global_array_base);

	r30=*((uint64_t*)r29);

	r31=(r28+r30);

	r32=(32752+global_array_base);

	r33=*((uint64_t*)r32);

	r34=(r31+r33);

	r35=(r34+1);

	r36=(r35/2);

	r37=(32752+global_array_base);

	*((uint64_t*)r37)=r36;

	r39=(32736+global_array_base);

	r40=*((uint64_t*)r39);

	r41=(r40+2);

	r42=(32736+global_array_base);

	*((uint64_t*)r42)=r41;

	goto label_55;

label_45:
	r45=(32752+global_array_base);

	r46=*((uint64_t*)r45);

	r47=(r46/2);

	r48=(32752+global_array_base);

	*((uint64_t*)r48)=r47;

	r50=(32736+global_array_base);

	r51=*((uint64_t*)r50);

	r52=(r51+1);

	r53=(32736+global_array_base);

	*((uint64_t*)r53)=r52;

label_55:
	goto label_18;

label_56:
	r56=(32736+global_array_base);

	r57=*((uint64_t*)r56);

	r58=(32728+global_array_base);

	r59=*((uint64_t*)r58);

	r60=(r57<=r59);

	if(r60!=0){goto label_78;}

	r62=(32736+global_array_base);

	r63=*((uint64_t*)r62);

	r64=(32728+global_array_base);

	*((uint64_t*)r64)=r63;

	r66=(32760+global_array_base);

	r67=*((uint64_t*)r66);

	r68=(32744+global_array_base);

	*((uint64_t*)r68)=r67;

	r70=(32728+global_array_base);

	r71=*((uint64_t*)r70);

	r72=(r71+2);

	printf(" %lld", r72);

	r74=(32744+global_array_base);

	r75=*((uint64_t*)r74);

	printf(" %lld", r75);

	printf("\n");

label_78:
	r78=(32760+global_array_base);

	r79=*((uint64_t*)r78);

	r80=(r79+1);

	r81=(32760+global_array_base);

	*((uint64_t*)r81)=r80;

	goto label_8;

label_84:
	r84=(32728+global_array_base);

	r85=*((uint64_t*)r84);

	r86=(r85+2);

	printf(" %lld", r86);

	r88=(32744+global_array_base);

	r89=*((uint64_t*)r88);

	printf(" %lld", r89);

	printf("\n");

	return;
}


