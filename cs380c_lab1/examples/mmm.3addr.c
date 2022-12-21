#include <stdio.h>
#include <stdint.h>
uint64_t global_array[4096], global_array_base=(uint64_t)global_array;
void main();
	
	
void main(){
	uint64_t local_array[288], local_array_base = (uint64_t)(local_array+36);
	uint64_t k;
	uint64_t i;
	uint64_t j;
	uint64_t r154;
	uint64_t r153;
	uint64_t r150;
	uint64_t r149;
	uint64_t r147;
	uint64_t r146;
	uint64_t r145;
	uint64_t r144;
	uint64_t r143;
	uint64_t r142;
	uint64_t r140;
	uint64_t r139;
	uint64_t r137;
	uint64_t r136;
	uint64_t r134;
	uint64_t r133;
	uint64_t r131;
	uint64_t r64;
	uint64_t r56;
	uint64_t r53;
	uint64_t r50;
	uint64_t r49;
	uint64_t r47;
	uint64_t r46;
	uint64_t r44;
	uint64_t r43;
	uint64_t r42;
	uint64_t r41;
	uint64_t r40;
	uint64_t r39;
	uint64_t r38;
	uint64_t r37;
	uint64_t r36;
	uint64_t r61;
	uint64_t r14;
	uint64_t r111;
	uint64_t r60;
	uint64_t r13;
	uint64_t r110;
	uint64_t r59;
	uint64_t r12;
	uint64_t r109;
	uint64_t r35;
	uint64_t r11;
	uint64_t r108;
	uint64_t r34;
	uint64_t r63;
	uint64_t r16;
	uint64_t r113;
	uint64_t r5;
	uint64_t r102;
	uint64_t r28;
	uint64_t r125;
	uint64_t r57;
	uint64_t r10;
	uint64_t r107;
	uint64_t r62;
	uint64_t r15;
	uint64_t r112;
	uint64_t r4;
	uint64_t r101;
	uint64_t r54;
	uint64_t r7;
	uint64_t r104;
	uint64_t r8;
	uint64_t r105;
	uint64_t r31;
	uint64_t r128;
	uint64_t r18;
	uint64_t r115;
	uint64_t r66;
	uint64_t r19;
	uint64_t r116;
	uint64_t r21;
	uint64_t r118;
	uint64_t r22;
	uint64_t r119;
	uint64_t r25;
	uint64_t r122;
	uint64_t r26;
	uint64_t r123;
	uint64_t r29;
	uint64_t r32;
	uint64_t r67;
	uint64_t r70;
	uint64_t r71;
	uint64_t r73;
	uint64_t r74;
	uint64_t r76;
	uint64_t r77;
	uint64_t r79;
	uint64_t r80;
	uint64_t r81;
	uint64_t r82;
	uint64_t r83;
	uint64_t r85;
	uint64_t r86;
	uint64_t r88;
	uint64_t r89;
	uint64_t r92;
	uint64_t r93;
	uint64_t r95;
	uint64_t r96;
	uint64_t r98;
	uint64_t r99;
	uint64_t r103;
	uint64_t r106;
	uint64_t r114;
	uint64_t r117;
	uint64_t r120;
	uint64_t r121;
	uint64_t r124;
	uint64_t r127;
	uint64_t r130;
	r4=(i=0);

label_5:
	r5=(i<4);

	if(r5==0){goto label_28;}

	r7=(j=0);

label_8:
	r8=(j<3);

	if(r8==0){goto label_24;}

	r10=(i*24);

	r11=(-96+local_array_base);

	r12=(r11+r10);

	r13=(j*8);

	r14=(r12+r13);

	r15=(j*2);

	r16=(i+r15);

	*((uint64_t*)r14)=r16;

	r18=(j*2);

	r19=(i+r18);

	printf(" %lld", r19);

	r21=(j+1);

	r22=(j=r21);

	goto label_8;

label_24:
	printf("\n");

	r25=(i+1);

	r26=(i=r25);

	goto label_5;

label_28:
	r28=(i=0);

label_29:
	r29=(i<4);

	if(r29==0){goto label_52;}

	r31=(j=0);

label_32:
	r32=(j<3);

	if(r32==0){goto label_49;}

	r34=(j*32);

	r35=(-192+local_array_base);

	r36=(r35+r34);

	r37=(i*8);

	r38=(r36+r37);

	r39=(i*24);

	r40=(-96+local_array_base);

	r41=(r40+r39);

	r42=(j*8);

	r43=(r41+r42);

	r44=*((uint64_t*)r43);

	*((uint64_t*)r38)=r44;

	r46=(j+1);

	r47=(j=r46);

	goto label_32;

label_49:
	r49=(i+1);

	r50=(i=r49);

	goto label_29;

label_52:
	printf("\n");

	r53=(i=0);

label_54:
	r54=(i<3);

	if(r54==0){goto label_73;}

	r56=(j=0);

label_57:
	r57=(j<4);

	if(r57==0){goto label_69;}

	r59=(i*32);

	r60=(-192+local_array_base);

	r61=(r60+r59);

	r62=(j*8);

	r63=(r61+r62);

	r64=*((uint64_t*)r63);

	printf(" %lld", r64);

	r66=(j+1);

	r67=(j=r66);

	goto label_57;

label_69:
	printf("\n");

	r70=(i+1);

	r71=(i=r70);

	goto label_54;

label_73:
	r73=(i=0);

label_74:
	r74=(i<3);

	if(r74==0){goto label_91;}

	r76=(j=0);

label_77:
	r77=(j<3);

	if(r77==0){goto label_88;}

	r79=(i*24);

	r80=(-264+local_array_base);

	r81=(r80+r79);

	r82=(j*8);

	r83=(r81+r82);

	*((uint64_t*)r83)=0;

	r85=(j+1);

	r86=(j=r85);

	goto label_77;

label_88:
	r88=(i+1);

	r89=(i=r88);

	goto label_74;

label_91:
	printf("\n");

	r92=(i=0);

label_93:
	r93=(i<3);

	if(r93==0){goto label_136;}

	r95=(j=0);

label_96:
	r96=(j<3);

	if(r96==0){goto label_133;}

	r98=(k=0);

label_99:
	r99=(k<4);

	if(r99==0){goto label_130;}

	r101=(i*24);

	r102=(-264+local_array_base);

	r103=(r102+r101);

	r104=(j*8);

	r105=(r103+r104);

	r106=(i*24);

	r107=(-264+local_array_base);

	r108=(r107+r106);

	r109=(j*8);

	r110=(r108+r109);

	r111=(k*24);

	r112=(-96+local_array_base);

	r113=(r112+r111);

	r114=(j*8);

	r115=(r113+r114);

	r116=(i*32);

	r117=(-192+local_array_base);

	r118=(r117+r116);

	r119=(k*8);

	r120=(r118+r119);

	r121=*((uint64_t*)r115);

	r122=*((uint64_t*)r120);

	r123=(r121*r122);

	r124=*((uint64_t*)r110);

	r125=(r124+r123);

	*((uint64_t*)r105)=r125;

	r127=(k+1);

	r128=(k=r127);

	goto label_99;

label_130:
	r130=(j+1);

	r131=(j=r130);

	goto label_96;

label_133:
	r133=(i+1);

	r134=(i=r133);

	goto label_93;

label_136:
	r136=(i=0);

label_137:
	r137=(i<3);

	if(r137==0){goto label_156;}

	r139=(j=0);

label_140:
	r140=(j<3);

	if(r140==0){goto label_152;}

	r142=(i*24);

	r143=(-264+local_array_base);

	r144=(r143+r142);

	r145=(j*8);

	r146=(r144+r145);

	r147=*((uint64_t*)r146);

	printf(" %lld", r147);

	r149=(j+1);

	r150=(j=r149);

	goto label_140;

label_152:
	printf("\n");

	r153=(i+1);

	r154=(i=r153);

	goto label_137;

label_156:
	return;
}


