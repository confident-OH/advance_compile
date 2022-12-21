#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void func_2(uint64_t);
void func_17(uint64_t);
void func_39(uint64_t,uint64_t);
void func_49(uint64_t,uint64_t,uint64_t,uint64_t);
void func_72(uint64_t);
void main();
	
void func_2(uint64_t n){
	uint64_t local_array[0], local_array_base = (uint64_t)(local_array+0);
	uint64_t r13;
	uint64_t r5;
	uint64_t r14;
	uint64_t r3;
	uint64_t r8;
	uint64_t r11;
	uint64_t r12;
	r3=(n==0);

	if(r3==0){goto label_8;}

	r5=(32720+global_array_base);

	*((uint64_t*)r5)=1;

	goto label_16;

label_8:
	r8=(n-1);

	func_2(r8);
	r11=(32720+global_array_base);

	r12=*((uint64_t*)r11);

	r13=(n*r12);

	r14=(32720+global_array_base);

	*((uint64_t*)r14)=r13;

label_16:
	return;
}


void func_17(uint64_t n){
	uint64_t local_array[16], local_array_base = (uint64_t)(local_array+2);
	uint64_t y;
	uint64_t x;
	uint64_t r36;
	uint64_t r27;
	uint64_t r26;
	uint64_t r23;
	uint64_t r34;
	uint64_t r18;
	uint64_t r29;
	uint64_t r20;
	uint64_t r28;
	uint64_t r32;
	uint64_t r33;
	uint64_t r35;
	r18=(n<=1);

	if(r18==0){goto label_23;}

	r20=(32720+global_array_base);

	*((uint64_t*)r20)=1;

	goto label_38;

label_23:
	r23=(n-1);

	func_17(r23);
	r26=(32720+global_array_base);

	r27=*((uint64_t*)r26);

	r28=(x=r27);

	r29=(n-2);

	func_17(r29);
	r32=(32720+global_array_base);

	r33=*((uint64_t*)r32);

	r34=(y=r33);

	r35=(x+y);

	r36=(32720+global_array_base);

	*((uint64_t*)r36)=r35;

label_38:
	return;
}


void func_39(uint64_t from, uint64_t to){
	uint64_t local_array[0], local_array_base = (uint64_t)(local_array+0);
	uint64_t r46;
	uint64_t r45;
	uint64_t r43;
	uint64_t r44;
	printf(" %lld", from);

	printf(" %lld", to);

	printf("\n");

	r43=(32728+global_array_base);

	r44=*((uint64_t*)r43);

	r45=(r44+1);

	r46=(32728+global_array_base);

	*((uint64_t*)r46)=r45;

	return;
}


void func_49(uint64_t from, uint64_t by, uint64_t to, uint64_t height){
	uint64_t local_array[0], local_array_base = (uint64_t)(local_array+0);
	uint64_t r68;
	uint64_t r50;
	uint64_t r59;
	r50=(height==1);

	if(r50==0){goto label_56;}

	func_39(from, to);
	goto label_71;

label_56:
	r59=(height-1);

	func_49(from, to, by, r59);
	func_39(from, to);
	r68=(height-1);

	func_49(by, from, to, r68);
label_71:
	return;
}


void func_72(uint64_t height){
	uint64_t local_array[0], local_array_base = (uint64_t)(local_array+0);
	uint64_t r82;
	uint64_t r73;
	uint64_t r81;
	r73=(32728+global_array_base);

	*((uint64_t*)r73)=0;

	func_49(1, 2, 3, height);
	printf("\n");

	r81=(32728+global_array_base);

	r82=*((uint64_t*)r81);

	printf(" %lld", r82);

	printf("\n");

	return;
}


	
void main(){
	uint64_t local_array[0], local_array_base = (uint64_t)(local_array+0);
	uint64_t r134;
	uint64_t r133;
	uint64_t r127;
	uint64_t r126;
	uint64_t r122;
	uint64_t r121;
	uint64_t r120;
	uint64_t r119;
	uint64_t r118;
	uint64_t r117;
	uint64_t r100;
	uint64_t r98;
	uint64_t r96;
	uint64_t r95;
	uint64_t r101;
	uint64_t r90;
	uint64_t r113;
	uint64_t r99;
	uint64_t r88;
	uint64_t r111;
	uint64_t r93;
	uint64_t r92;
	uint64_t r115;
	uint64_t r94;
	uint64_t r102;
	uint64_t r104;
	uint64_t r105;
	uint64_t r106;
	uint64_t r107;
	uint64_t r108;
	uint64_t r110;
	uint64_t r112;
	uint64_t r114;
	r88=(32760+global_array_base);

	*((uint64_t*)r88)=16807;

	r90=(32752+global_array_base);

	*((uint64_t*)r90)=127;

	r92=(32752+global_array_base);

	r93=*((uint64_t*)r92);

	r94=(r93*256);

	r95=(r94+255);

	r96=(32752+global_array_base);

	*((uint64_t*)r96)=r95;

	r98=(32752+global_array_base);

	r99=*((uint64_t*)r98);

	r100=(r99*256);

	r101=(r100+255);

	r102=(32752+global_array_base);

	*((uint64_t*)r102)=r101;

	r104=(32752+global_array_base);

	r105=*((uint64_t*)r104);

	r106=(r105*256);

	r107=(r106+255);

	r108=(32752+global_array_base);

	*((uint64_t*)r108)=r107;

	r110=(32752+global_array_base);

	r111=*((uint64_t*)r110);

	r112=(32760+global_array_base);

	r113=*((uint64_t*)r112);

	r114=(r111/r113);

	r115=(32744+global_array_base);

	*((uint64_t*)r115)=r114;

	r117=(32752+global_array_base);

	r118=*((uint64_t*)r117);

	r119=(32760+global_array_base);

	r120=*((uint64_t*)r119);

	r121=(r118%r120);

	r122=(32736+global_array_base);

	*((uint64_t*)r122)=r121;

	func_2(7);
	r126=(32720+global_array_base);

	r127=*((uint64_t*)r126);

	printf(" %lld", r127);

	printf("\n");

	printf("\n");

	func_17(11);
	r133=(32720+global_array_base);

	r134=*((uint64_t*)r133);

	printf(" %lld", r134);

	printf("\n");

	printf("\n");

	func_72(3);
	printf("\n");

	return;
}


