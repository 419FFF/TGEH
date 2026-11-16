/* 17 functions from 0x00060AD0 to 0x00061804, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

unsigned char func_00060AD0(int param_1, int param_2, int param_3) { int func_001100A0(...),func_0012F810(...),func_0011B020(...),func_0012F730(...); int iVar1=param_1; char local_30[16],local_20[16],local_10[16]; if((*(unsigned char *)(param_1+0xd0)&2)!=0)return 0; func_001100A0(param_1,&param_1); func_0012F810(local_20,param_2,param_1); int temp=param_3; func_0012F810(local_30,param_3,param_1); if(func_0011B020(iVar1,local_20,local_30,local_10,0,0)){func_0012F730(temp,local_10,param_1);return 1;}return 0;}

unsigned char func_00060B60(int p1,int *p2,int *p3){extern int D_002EEF74,D_002EEF78,D_00307C08;int func_00060AD0(...);int a=p2[0],b=p2[1],c=p2[2],d=p2[3];unsigned char r=0;unsigned int i=0;int list=D_002EEF74;if(D_002EEF78){do{int obj=((int *)list)[i];int *q=*(int **)(obj+0x2c);if(list!=D_00307C08||q==0||!(*(unsigned char *)(*q+0x20)&1)){if(func_00060AD0(obj,p1,&a)){if(!p3)return 1;r=1;}}i++;}while(i<(unsigned int)D_002EEF78);}if(p3){p3[0]=a;p3[1]=b;p3[2]=c;p3[3]=d;}return r;}

void func_00060E70(void) { extern int D_00326110,D_002EEF80,D_002EEFF0,D_002EEFD8,D_002EEFDC,D_002EEFE0,D_002EEFE4; extern char D_001D5424; int func_0010F750(...); D_002EEF80=1-1; D_002EEFF0=func_0010F750(&D_001D5424,D_00326110,0xe0); D_002EEFD8=0; D_002EEFDC=0; D_002EEFE0=0; D_002EEFE4=0x3f800000; }

void func_00060EC0(void) {
    extern int D_002EEFF0;
    int func_00110760(...);
    func_00110760(D_002EEFF0);
}

void func_00060ED0(void){extern int D_00313B60,D_002EF008,D_00307DB4,D_002EF010,D_002EF000;extern char D_002EEFED;int func_00110420(...);int func_0009DAC0(...);int func_00110480(...);int func_00110060(...);int func_001105E0(...);int func_00110000(...);char t[64];int p=*(int*)(D_00313B60+0x2c);if(*(int*)p)func_00110420(*(int*)p,D_00313B60);int q=func_0009DAC0(D_002EF008);func_00110480(q,D_00313B60,0);func_00110060(*(int*)(D_002EF008+0x2c),t);func_001105E0(D_00313B60,t,0);func_00110000(D_00313B60);D_002EF010=D_00307DB4;D_002EF000=D_00307DB4;D_002EEFED=1;}

void func_00060F60(void)
{
  int func_00101360(...);
  int func_000A7B80(...);
  int func_00060ED0(...);
  func_00101360();
  func_000A7B80();
  func_00060ED0();
  return;
}

void func_00061500(void){int func_0011FED0(...);extern int D_002EEFF0;extern float D_001D5434,D_001D5430;extern float D_002EEC50,D_002EECA8;float a[16];func_0011FED0(D_002EEFF0,a);D_002EEC50=a[2]*D_001D5434;D_002EECA8=a[0]*D_001D5430;}

void func_00061540(int a0, int a1) {
    extern int D_002EF00C;
    extern int D_00307DB4;
    extern int D_002EF008;
    extern int D_002EF010;
    extern int D_002EF014;
    D_002EF008 = D_002EF00C;
    D_002EF00C = a0;
    D_002EF010 = D_00307DB4;
    D_002EF014 = a1;
}

void func_00061570(int a, volatile int b,int c){extern int D_00307DB4,D_002EF01C,D_002EEF80,D_002EF018,D_002EF020,D_002EF024;extern int D_002EF050;D_002EF01C=b;D_002EF018=a;D_002EF020=D_00307DB4;D_002EF024=c;if((unsigned)D_002EEF80>1){int*p=&D_002EF050;int i=D_002EEF80-1;do{p[-1]=b;p[0]=b;p+=13;i--;}while(i);}}

void func_000615C0(void) { extern int D_00307DF8,D_002EEF80,D_002EEC50,D_002EECA8; extern unsigned char D_002EEFEC,D_002EEFD0; void func_0002DF20(...); void func_000A7BE0(...); func_0002DF20(D_00307DF8); D_002EEF80=0; D_002EEC50=0x4019999a; D_002EECA8=0x404ccccd; D_002EEFEC=0; D_002EEFD0=0; func_000A7BE0(); }

void func_00061600(void) {
    extern int D_002EEF80;
    D_002EEF80 = 0;
}

unsigned char func_00061610(void){extern int D_002EEC00,D_002EECA0,D_002EEF80;extern float D_002EF004,D_002EF000,D_00307DB4;if(D_002EEC00==6)return 0;if(D_002EECA0!=6)return 0;if((unsigned)D_002EEF80<=1 && D_002EF004+D_002EF000 < D_00307DB4)return 1;return 0;}

void func_000617A0(void) {
 extern int D_00313B60,D_002EF410,D_002EF414,D_002EF418;
 extern float D_002EF40C,D_002EF408;
 int func_00110060(...); float func_00131610(float,float); float func_00131240(float);
 __declspec(align(16)) float v[13];
 func_00110060(D_00313B60,v);
 D_002EF410=*(int *)&v[12]; D_002EF414=*(int *)&v[13]; D_002EF418=*(int *)&v[14];
 D_002EF40C=func_00131610(v[8],v[10]);
 D_002EF408=-func_00131240(v[9]);
}

