/* 22 functions from 0x0008E780 to 0x0008F77B, found by Ghidra. */
#include "common.h"

void func_0008EBB0(int key, unsigned char value, int arg)
{
 extern int _D_003028D8, _D_00302998, _D_003028EC;
 extern unsigned char _D_003028E0;
 int func_0008D780(...);
 int *entry=&_D_003028D8;
 int i=0;
 if(!key)return;
 while(*entry!=key) {
   entry=(int *)((char *)entry+0x18); ++i;
   if((int)entry >= (int)&_D_00302998)return;
 }
 *(&_D_003028E0+i*0x18)=value;
 func_0008D780(*(int *)((char *)&_D_003028EC+i*0x18),arg);
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
 extern int _D_00302A10,_D_00302A08,_D_00302A0C,_D_003029A8;
 extern unsigned char _D_00302A14;
 int func_0011B990(...),func_00116FB0(...);
 if(_D_00302A10) {
   short *p=(short *)(_D_00302A10+0x2a); --*p;
   func_0011B990(_D_00302A10);
   _D_00302A10=0;
 }
 if(_D_00302A08) { func_00116FB0(_D_00302A08); _D_00302A08=0; }
 _D_00302A0C=0; _D_00302A14=0; _D_003029A8=0;
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

void func_0008F1F0(char a0) { extern char D_00302A14; D_00302A14 = a0; }

char func_0008F2E0(void) {
    extern char D_00302A14;
    return D_00302A14;
}

void func_0008F370(void) {
    extern int D_00302DA4;
    int func_00110760(...);
    func_00110760(D_00302DA4);
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

