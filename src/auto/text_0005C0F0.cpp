/* 13 functions from 0x0005C0F0 to 0x0005CF9A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct CameraVec { float x,y,z,w; };

void func_0005C500(int *p)
{
  void func_0005BFE0(...);
  *(int *)((char *)p + 0x14) = 0;
  *(int *)((char *)p + 0x10) = 0;
  *(char *)((char *)p + 0x18) = 0;
  func_0005BFE0(p);
}

void _func_0005C520(int p1,float* p2,int p3,char p4,int p5,int p6){extern float D_001D2A28,D_001D290C,D_001D27B0;int _func_0012E940(...),_func_001313C0(...),_func_0005BFE0(...),_func_0012ED20(...),_func_0012E590(...),_func_0005C0F0(...);if(*(char*)(p1+0x18))return;*(float*)(p1+4)=*p2+*(float*)(p1+4);float length=(float)_func_0012E940(p1);int n=_func_001313C0(length/p2[1]*D_001D2A28)+1;if(p4){*(int*)(p1+0x10)=0;_func_0005BFE0(p1,p5,p3,p6);}if(n){float step=D_001D27B0/(float)n;do{char tmp[12];_func_0012ED20(tmp,p1,step);_func_0012E590(p3,tmp);_func_0005C0F0(p1,p3,p2[1]);n--;}while(n);}}

void func_0005C5E0(int param_1)
{
  int func_00116FB0(...);
  if (*(int *)(param_1 + 0x14) != 0) {
    func_00116FB0(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

void _func_0005C610(void){extern unsigned int D_002EECA4,D_002EECAC,D_002EEC50,D_002EECA8;extern int D_00313B60,D_00307DF8,D_002EED64,D_002EEC00,D_002EECA0,D_002EED60,D_002EED14;extern char D_001D5408;int _func_00063F30(...),_func_00110480(...),_func_001226D0(...),_func_0005F8B0(...),_func_00063F10(...),_func_00060E70(...),_func_00063000(...),_func_000688D0(...),_func_000632D0(...);D_002EECA4=1;D_002EECAC=1;D_002EEC50=2.4f;D_002EECA8=3.3f;_func_00063F30(D_00313B60,2.4f,3.3f);D_002EED64=D_00307DF8;D_002EEC00=0;D_002EECA0=1;int a=*(int*)(D_00307DF8+0x2c);int b=*(int*)(a+0x2c);_func_00110480(*(int*)b,D_00313B60,0);D_002EED60=_func_001226D0(&D_001D5408);_func_0005F8B0();_func_00063F10();_func_00060E70();_func_00063000();_func_000688D0();_func_000632D0();D_002EED14=0;}

void _func_0005C6C0(void){extern int D_00313B60,D_002EED60,D_002EEE50;extern unsigned int D_002EEC50,D_002EECA8;int _func_00063700(...),_func_000688D0(...),_func_00060EC0(...),_func_00063240(...),_func_00110420(...),_func_00122710(...),_func_0011C3E0(...),_func_00116FB0(...);_func_00063700();_func_000688D0();_func_000688D0();_func_000688D0();_func_00060EC0();_func_00063240();for(int off=0x28;off<0x38;off+=4){int* p=*(int**)(D_00313B60+off);while(p){_func_00110420(D_00313B60,*p);p=*(int**)(D_00313B60+off);}}_func_00122710(D_002EED60);D_002EEC50=0x4019999a;D_002EECA8=0x40533333;int p=D_002EEE50;while(p){D_002EEE50=*(int*)p;_func_0011C3E0(p);_func_0011C3E0(p);_func_00116FB0(p);p=D_002EEE50;}}

void __cdecl _func_0005C780(void) { extern unsigned char _D_002EECB0; extern int _D_002EED60; extern int _D_00313B60; extern int _D_002EECA0; extern int _D_002EED18; extern int _D_002EEC00; extern void __cdecl _func_00122780(int); extern int __cdecl _func_000F8F40(int); extern void __cdecl _func_000639A0(void); extern void __cdecl _func_00060F70(void); extern void __cdecl _func_0005E650(void); extern void __cdecl _func_000638D0(void); extern void __cdecl _func_001227E0(int); if(!_D_002EECB0){ _func_00122780(_D_002EED60); _D_002EED18=_func_000F8F40(**(int **)(_D_00313B60+0x2c)); int v=_D_002EEC00; if(v==_D_002EECA0){ if(--v!=0){ if((v-=5)!=0){ if((v-=17)!=0) goto exit_switch; _func_000639A0(); goto exit_switch; } _func_00060F70(); goto exit_switch; } _func_0005E650(); _func_000638D0(); } exit_switch: _func_001227E0(_D_002EED60); _D_002EECB0=1; } }

void _func_0005CC80(void){extern int D_002EEC00;extern float D_002EECA4,D_002EEC50,D_002EECAC,D_002EECA8;extern int D_00313B60;int _func_00061500(...),_func_00063F30(...);if(D_002EEC00==6)_func_00061500();_func_00063F30(D_00313B60,D_002EECA4*D_002EEC50,D_002EECAC*D_002EECA8);}

void func_0005CCC0(int param_1)
{
  extern unsigned char D_002EEE4C;
  extern int D_002EECA0;
  if (D_002EEE4C == 0)
    D_002EECA0 = param_1;
}

void func_0005CCE0(char a0) {
    extern char D_002EEE4C;
    D_002EEE4C = a0;
}

#pragma optimize("p", on)
void func_0005CCF0(unsigned int *p)
{
 int func_00110060(...),func_00115170(...),func_0012F2E0(...),func_0012F5B0(...),func_000A1F50(...),func_0012E590(...);
 extern int D_002EED64,D_00307DF8,D_002EEC00,D_002EECA0;
 extern float D_001D4270;
 __declspec(align(16)) unsigned int a[16];
 __declspec(align(16)) unsigned int b[16];
 float v[4];
 unsigned int old[3];
 old[0]=p[0];old[1]=p[1];old[2]=p[2];
 func_00110060(*(int*)(D_002EED64+0x2c),a);
 func_00115170(*(int*)(D_002EED64+0x98),0,b);
 func_0012F2E0(b,a);
 p[0]=b[12];p[1]=b[13];p[2]=b[14];p[3]=b[15];
 int *obj=*(int**)(D_00307DF8+0x110);
 switch(obj[0]){
 case 5:
  if(obj[0xc4]!=5 && obj[0xc4]!=6){
   p[0]=a[12];double h=*(float*)(D_002EED64+0x34);p[2]=a[14];((float*)p)[1]=h+h+((float*)a)[13];
   if((double)((float*)old)[1]-D_001D4270<((float*)p)[1])p[1]=old[1];
   break;
  }
  p[0]=a[12];p[2]=a[14];((float*)p)[1]=(double)*(float*)(D_002EED64+0x34)*2+((float*)a)[13];break;
 case 0xf:
  ((float*)p)[1]=(double)*(float*)(D_002EED64+0x34)*2+((float*)a)[13];
  func_0012F5B0(v,obj+0x38,obj+4);
  if(obj[0xd5]==1){
   p[0]=obj[0x10];((float*)p)[1]=(double)*(float*)(D_002EED64+0x34)*2+((float*)obj)[0x11];p[2]=obj[0x12];
   if(func_000A1F50(obj[0x8e]))func_0012E590(p,v);
  } else if(obj[0xd5]==2){
   p[0]=obj[0x10];((float*)p)[1]=(double)*(float*)(D_002EED64+0x34)*2+((float*)obj)[0x11];p[2]=obj[0x12];
   if(func_000A1F50(obj[0x8e]))func_0012E590(p,v);
  }break;
 case 0x12:case 0x13:
  p[0]=a[12];((float*)p)[1]=(double)((float*)a)[13]+*(float*)(D_002EED64+0x34);p[2]=a[14];break;
 case 0x15:case 0x17:p[0]=old[0];p[1]=old[1];p[2]=old[2];break;
 case 0x31:break;
 default:p[0]=a[12];double h=*(float*)(D_002EED64+0x34);p[2]=a[14];((float*)p)[1]=h+h+((float*)a)[13];break;
 }
 if(D_002EEC00==5 || D_002EECA0==5)p[0]=old[0];
}
#pragma optimize("", on)
void func_0005CF90(char a0) {
    extern char D_002EEE54;
    D_002EEE54 = a0;
}

