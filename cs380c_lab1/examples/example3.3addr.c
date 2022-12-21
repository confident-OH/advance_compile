#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void func_2();
void func_50(uint64_t,uint64_t,uint64_t,uint64_t);
void func_102();
void main();
	
void func_2(){
	uint64_t local_array[32], local_array_base = (uint64_t)(local_array+4);
	uint64_t now_posi;
	uint64_t idx;
	uint64_t i;
	uint64_t base;
	uint64_t r47;
	uint64_t r46;
	uint64_t r45;
	uint64_t r44;
	uint64_t r42;
	uint64_t r41;
	uint64_t r40;
	uint64_t r39;
	uint64_t r38;
	uint64_t r37;
	uint64_t r36;
	uint64_t r35;
	uint64_t r34;
	uint64_t r33;
	uint64_t r32;
	uint64_t r31;
	uint64_t r30;
	uint64_t r29;
	uint64_t r13;
	uint64_t r12;
	uint64_t r11;
	uint64_t r10;
	uint64_t r9;
	uint64_t r4;
	uint64_t r27;
	uint64_t r14;
	uint64_t r3;
	uint64_t r26;
	uint64_t r8;
	uint64_t r5;
	uint64_t r28;
	uint64_t r7;
	uint64_t r15;
	uint64_t r17;
	uint64_t r18;
	uint64_t r19;
	uint64_t r20;
	uint64_t r21;
	uint64_t r22;
	uint64_t r24;
	uint64_t r25;
	r3=(i=0);

	r4=(base=1);

label_5:
	r5=(i<8);

	if(r5==0){goto label_49;}

	r7=-1;

	r8=(idx=r7);

	r9=(i*8);

	r10=(31960+global_array_base);

	r11=(r10+r9);

	r12=*((uint64_t*)r11);

	r13=(now_posi=r12);

	r14=(now_posi/16);

	r15=(r14<=0);

	if(r15!=0){goto label_21;}

	r17=(idx+4);

	r18=(idx=r17);

	r19=(now_posi/16);

	r20=(now_posi=r19);

label_21:
	r21=(now_posi/4);

	r22=(r21<=0);

	if(r22!=0){goto label_28;}

	r24=(idx+2);

	r25=(idx=r24);

	r26=(now_posi/4);

	r27=(now_posi=r26);

label_28:
	r28=(idx+now_posi);

	r29=(idx=r28);

	r30=(32024+global_array_base);

	r31=*((uint64_t*)r30);

	r32=(r31*8);

	r33=(32032+global_array_base);

	r34=(r33+r32);

	r35=(32024+global_array_base);

	r36=*((uint64_t*)r35);

	r37=(r36*8);

	r38=(32032+global_array_base);

	r39=(r38+r37);

	r40=(idx*base);

	r41=*((uint64_t*)r39);

	r42=(r41+r40);

	*((uint64_t*)r34)=r42;

	r44=(i+1);

	r45=(i=r44);

	r46=(base*8);

	r47=(base=r46);

	goto label_5;

label_49:
	return;
}


void func_50(uint64_t ori_mid, uint64_t ori_right, uint64_t ori_left, uint64_t level){
	uint64_t local_array[32], local_array_base = (uint64_t)(local_array+4);
	uint64_t now_posi;
	uint64_t left;
	uint64_t right;
	uint64_t mid;
	uint64_t r99;
	uint64_t r97;
	uint64_t r96;
	uint64_t r95;
	uint64_t r94;
	uint64_t r93;
	uint64_t r92;
	uint64_t r89;
	uint64_t r87;
	uint64_t r86;
	uint64_t r85;
	uint64_t r64;
	uint64_t r63;
	uint64_t r61;
	uint64_t r60;
	uint64_t r83;
	uint64_t r54;
	uint64_t r77;
	uint64_t r62;
	uint64_t r98;
	uint64_t r51;
	uint64_t r56;
	uint64_t r79;
	uint64_t r66;
	uint64_t r55;
	uint64_t r57;
	uint64_t r67;
	uint64_t r69;
	uint64_t r70;
	uint64_t r72;
	uint64_t r73;
	uint64_t r75;
	uint64_t r76;
	uint64_t r81;
	uint64_t r82;
	r51=(level==8);

	if(r51==0){goto label_60;}

	func_2();
	r54=(32024+global_array_base);

	r55=*((uint64_t*)r54);

	r56=(r55+1);

	r57=(32024+global_array_base);

	*((uint64_t*)r57)=r56;

	goto label_101;

label_60:
	r60=(mid=ori_mid);

	r61=(right=ori_right);

	r62=(left=ori_left);

	r63=(now_posi=1);

label_64:
	r64=(mid==0);

	if(r64!=0){goto label_101;}

	r66=(mid%2);

	r67=(r66==1);

	if(r67==0){goto label_92;}

	r69=(right%2);

	r70=(r69==1);

	if(r70==0){goto label_92;}

	r72=(left%2);

	r73=(r72==1);

	if(r73==0){goto label_92;}

	r75=(level*8);

	r76=(31960+global_array_base);

	r77=(r76+r75);

	*((uint64_t*)r77)=now_posi;

	r79=(ori_mid-now_posi);

label_80:
	r81=(ori_right-now_posi);

label_82:
	r82=(r81/2);

label_83:
	r83=(r82+128);

	r85=(ori_left-now_posi);

label_86:
	r86=(r85*2);

label_87:
	r87=(r86+1);

	r89=(level+1);

	func_50(r79, r83, r87, r89);
label_92:
	r92=(now_posi*2);

	r93=(now_posi=r92);

	r94=(mid/2);

	r95=(mid=r94);

	r96=(right/2);

	r97=(right=r96);

	r98=(left/2);

	r99=(left=r98);

	goto label_64;

label_101:
	return;
}


void func_102(){
	uint64_t local_array[32], local_array_base = (uint64_t)(local_array+4);
	uint64_t j;
	uint64_t posi;
	uint64_t i;
	uint64_t group;
	uint64_t r128;
	uint64_t r124;
	uint64_t r123;
	uint64_t r118;
	uint64_t r116;
	uint64_t r107;
	uint64_t r106;
	uint64_t r131;
	uint64_t r108;
	uint64_t r103;
	uint64_t r114;
	uint64_t r127;
	uint64_t r104;
	uint64_t r115;
	uint64_t r132;
	uint64_t r109;
	uint64_t r110;
	uint64_t r111;
	uint64_t r113;
	r103=(i=0);

label_104:
	r104=(i<92);

	if(r104==0){goto label_134;}

	r106=(i*8);

	r107=(32032+global_array_base);

	r108=(r107+r106);

	r109=*((uint64_t*)r108);

	r110=(group=r109);

label_111:
	r111=(group<=0);

	if(r111!=0){goto label_130;}

	r113=(group%8);

	r114=(posi=r113);

	r115=(j=0);

label_116:
	r116=(j<8);

	if(r116==0){goto label_126;}

	r118=(j==posi);

	if(r118==0){goto label_122;}

	printf(" %lld", 1);

	goto label_123;

label_122:
	printf(" %lld", 0);

label_123:
	r123=(j+1);

	r124=(j=r123);

	goto label_116;

label_126:
	printf("\n");

	r127=(group/8);

	r128=(group=r127);

	goto label_111;

label_130:
	printf("\n");

	r131=(i+1);

	r132=(i=r131);

	goto label_104;

label_134:
	return;
}


	
void main(){
	uint64_t local_array[24], local_array_base = (uint64_t)(local_array+3);
	uint64_t right;
	uint64_t mid;
	uint64_t left;
	uint64_t r139;
	uint64_t r137;
	uint64_t r138;
	r137=(mid=255);

	r138=(left=255);

	r139=(right=255);

	func_50(mid, left, right, 0);
	func_102();
	return;
}


