/* 22 functions from 0x0008E780 to 0x0008F77B, found by Ghidra. */
#include "common.h"

void func_0008EBB0(int key, unsigned char value, int arg)
{
 extern int _D_003028D8, _D_00302998, _D_003028EC;
 extern unsigned char _D_003028E0;
 int func_0008D780(...);
 int *entry;
 int i;
 if(key) {
   entry=&_D_003028D8; i=0;
   do {
     if(*entry==key) goto found;
     entry=(int *)((char *)entry+0x18); ++i;
   } while((int)entry < (int)&_D_00302998);
   return;
 found:
   *(&_D_003028E0+i*0x18)=value;
   func_0008D780(*(int *)((char *)&_D_003028EC+i*0x18),arg);
 }
}

void func_0008EC00(void)
{
  extern int D_003028EC;
  extern int _D_003029AC;
  int func_0008D740(...);
  int func_0008ECF0(...);
  int *piVar1 = &D_003028EC;
  do {
    *((unsigned char *)piVar1 - 12) = 0;
    piVar1[-5] = 0;
    if (*piVar1 != -1) func_0008D740(*piVar1);
    *piVar1 = -1;
    piVar1 += 6;
  } while ((int)piVar1 < (int)&_D_003029AC);
  func_0008ECF0();
}

void func_0008EC40(void)
{
 extern int _D_00302A08,_D_00302A10,_D_001D6F58,_D_003029A4,_D_003029D8,_D_003029DC,_D_003029B0,_D_003029B4,_D_003029E0,_D_003029F8,_D_003029F4,_D_003029FC,_D_00302A00,_D_003029C8,_D_003029B8,_D_00302A0C,_D_003029A8;
 extern unsigned char _D_00302A14;
 int func_0011BF40(...),func_0011BDD0(...),func_00116A90(...);
 if(!_D_00302A08) {
   _D_00302A10=func_0011BF40(&_D_001D6F58,0);
   _D_003029A4=func_0011BDD0(_D_00302A10,0);
   _D_003029D8=4; _D_003029DC=5; _D_003029B0=2; _D_003029B4=2;
   _D_003029E0=0; _D_003029F8=0; _D_003029F4=0; _D_003029FC=2; _D_00302A00=0;
   _D_003029B8=_D_003029A4; _D_003029C8=3;
   _D_00302A08=func_00116A90(0x150,1,1);
   _D_00302A0C=0; _D_003029A8=0; _D_00302A14=0;
 }
}

void func_0008ECF0(void)
{
 extern int _D_00302A10,_D_00302A08,_D_00302A0C;
 extern unsigned char _D_00302A14;
 extern int _D_003029A8;
 int func_0011B990(...),func_00116FB0(...);
 int p=_D_00302A10;
 if(p) { --*(short *)(p+0x2a); func_0011B990(p); _D_00302A10=0; }
 p=_D_00302A08;
 if(p) { func_00116FB0(p); _D_00302A08=0; }
 _D_00302A0C=0; _D_00302A14=0;
 *(volatile int *)&_D_003029A8=0;
}

void func_0008ED40(void)
{
 extern int _D_00302A08,_D_001E4618,_D_00302A0C;
 extern float _D_001D290C,_D_001D27B0,_D_003029A8;
 extern unsigned char _D_00302A14;
 if(_D_00302A08) {
   float dt=(float)_D_001E4618;
   if(_D_001E4618<0) dt+=_D_001D290C;
   dt=_D_001D27B0/dt;
   _D_003029A8+=dt;
   float *p=(float *)_D_00302A08;
   int i=0, count=_D_00302A0C;
   if(count>0) do {
     if(p[1]<p[2]) {
       float n=p[0]+dt; p[1]=p[0]; p[0]=n;
       if(p[2]<n) p[0]=p[2];
     } else {
       --_D_00302A0C;
       for(int j=0;j<7;j++) p[j]=p[j+7];
       p-=7; --i; count=_D_00302A0C;
     }
     ++i; p+=7;
   } while(i<count);
   _D_00302A14=0;
 }
}

#pragma optimize("y", off)
void func_0008F070(void)
{
 extern int _D_00302A0C,_D_00302A08,_D_00313B60,_D_00302A04,_D_003029A0,_D_003029B0;
 int func_0012F120(...),func_001364D0(...),func_0011FED0(...),func_00138440(...),func_00133F30(...),func_001378E0(...),func_0008EDF0(...),func_00137AB0(...);
 int local90[2]; int local88; char local50[76];
 if(_D_00302A0C) {
  func_0012F120(local50); func_001364D0(local50);
  func_0011FED0(_D_00313B60,local90);
  _D_00302A04=local90[0]; _D_003029A0=local88;
  func_00138440(0); func_00133F30(&_D_003029B0); func_001378E0(3,7);
  for(int i=0;i<_D_00302A0C;i++) func_0008EDF0();
  func_00137AB0(); func_00138440(1);
 }
}

void _func_0008F120(unsigned int *param) {
 extern int D_00302A0C; extern unsigned int D_00302A08;
 float _func_00131760(...); int _func_00090180(...);
 extern float D_001D27B0,D_001D386C,D_001D2E24,D_001D4270,D_001D2B64,D_001D28E0;
 float *item; unsigned int local0,local1,local2,local3;
 if(D_00302A0C<12){
  item=(float*)(D_00302A08+D_00302A0C*0x1c);D_00302A0C++;
  *(int*)item=0;*(int*)(item+1)=0;
  item[2]=(_func_00131760()+D_001D27B0)*D_001D386C;
  item[3]=_func_00131760()*D_001D2E24+D_001D4270;
  *(unsigned int*)(item+4)=param[0];
  item[5]=(float)((double)*(float*)&param[1]+(double)D_001D2B64);
  *(unsigned int*)(item+6)=param[2];
  local0=0;local1=0x3f800000;local2=0;local3=0;
  _func_00090180(&local0,item+4,item[3]*D_001D28E0,0x3f333333,0x848484,0);
 }
}

#pragma optimize("", on)
void func_0008F1F0(char a0) { extern char D_00302A14; D_00302A14 = a0; }

char func_0008F2E0(void) {
    extern char D_00302A14;
    return D_00302A14;
}

void _func_0008F2F0(void) {
 int _func_0011F890(...); extern int D_001D6F74,D_00302DA4,D_00302DA8;
 unsigned int local[9]={0};
 local[1]=local[2]=local[3]=local[4]=local[6]=0x3f800000;
 D_00302DA4=_func_0011F890(&D_001D6F74,local);D_00302DA8=0;
}

void func_0008F370(void) {
    extern int D_00302DA4;
    int func_00110760(...);
    func_00110760(D_00302DA4);
}

void _func_0008F380(unsigned int *param) {
 extern unsigned int D_00302DA8; extern unsigned int D_00302A18[];
 int _func_00131310(...); float _func_00131760(...);
 extern float D_001D55C0,D_001D4F8C,D_001D2BF8;
 if(D_00302DA8<=32){
  int *item=(int*)((char*)D_00302A18+D_00302DA8*28);
  int n=_func_00131310()&0x80000001;
  if(n<0){n=(n-1|0xfffffffe)+1;n=-n;n=n?-1:0;}
  n+=23;item[0]=n;
  item[1]=param[0];item[2]=param[1];item[3]=param[2];item[4]=0;
  ((float*)item)[5]=_func_00131760()*D_001D55C0+D_001D4F8C;
  ((float*)item)[6]=_func_00131760()*2.0f+D_001D2BF8;
  ++D_00302DA8;
 }
}

void func_0008F610(void) {
    extern int D_001E7D64;
    D_001E7D64 = 10;
}

void _func_0008F740(int value)
{
    extern int _D_0033116C;
    _D_0033116C = (value == 0) ? 0 : 0x8f620;
}

void func_0008F760(void)
{
  extern int _D_0033116C;
  _D_0033116C = 0;
}

void func_0008F770(void) {
    extern int D_0033116C;
    D_0033116C = 0;
}
extern unsigned int D_00302A14;
extern unsigned int D_001D27AC;
extern unsigned int D_001D2B98;
extern unsigned int D_001D42A0;
