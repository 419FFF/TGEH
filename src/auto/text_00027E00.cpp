/* 4 functions from 0x00027E00 to 0x00028DA4, found by Ghidra. */
#include "common.h"

extern int _D_0000FFFF;
extern int _D_003268B0;
void _func_00027A70(void*);
void _func_00088840(void*);
void _func_00088900(void*);
extern unsigned char _D_0031151C;
void _func_000276E0(void*);
void _func_000F4400(void*);
void* _func_0008A190(void*,void*);
void _func_0011DED0(int);
extern int _D_00308158;
extern int _D_003251F0;
void _func_00107C40(void*,int,int);
void _func_001010B0(void);
int _func_00104600(void);
extern int _D_001E3A30;
extern int _D_001E3A1C;
extern int _D_001E3A08;
void _func_00101270(int,int,int);
void _func_000A28D0(int);
void _func_000A2910(int);
void _func_000A2950(int);
void _func_000A2890(int);
void _func_000A2850(int);
void _func_000A40A0(int,int);
extern int _D_001D37D4;
void _func_000F3250(void);
int _func_00103210(int,int);
void _func_00103990(int);
void _func_0009A0D0(int);
void _func_00027C80(void*);
void _func_0009D280(void*);
void _func_0009D3E0(void*);
void _func_0009F840(int);
void _func_000F33B0(int);
extern int _D_001E4618;
void _func_00027E00(void* p) {
 volatile char scratch[0x94]; volatile int* state=(volatile int*)((char*)p+0x114);
 if(*state==_D_0000FFFF) _func_00027A70(p);
 unsigned char* obj=*(unsigned char**)((char*)p+0x2c);
 if(obj[0x22]==_D_003268B0) { if((obj[0x124]&1)&&*(int*)(obj+0x128)==0)_func_00088840(obj); int n=*(int*)(obj+0x128),i=0; if(n)do{*(int*)(*(char**)(obj+0x12c)+i*0x64+0x10)=2;++i;}while(i<n); if(i)_func_00088900(obj); }
 if(*state>9)return;
 switch(*state){
 case 0:{unsigned char*q=*(unsigned char**)((char*)p+0x2c); if(q[0x20]&1)return;if(*(int*)((char*)p+0x118)==21)return;if(_D_0031151C)return;scratch[0]=0;break;}
 case 1:{int x=*(int*)((char*)p+0x118); if(x==15||x==18||x==19||x==20)return; *state=5; *(int*)((char*)p+0x11c)=0; _func_000276E0(p); _func_000F4400(p); void* r=_func_0008A190(p,obj); if(r)_func_0011DED0(*(int*)((char*)r+4)); _func_00107C40(p,_D_00308158,_D_003251F0); _func_00107C40(p,(int)p,_D_003251F0); _func_001010B0(); if(*(int*)((char*)p+0x118)!=14)return; if(_func_00104600())return; _func_00101270(_D_001E3A30,_D_001E3A1C,_D_001E3A08); break;}
 case 4:{int x=*(int*)((char*)p+0x118); if(x==1)_func_000A28D0(1); else if(x==2)_func_000A2910(1); else if(x==3)_func_000A2950(1); else if(x>=4&&x<=7)_func_000A40A0(x-4,1); else if(x==8)_func_000A2890(1); else if(x==9)_func_000A2850(1); _func_000F3250(); int a=_func_00103210(0,_D_001D37D4); _func_00103990(a); _func_0009A0D0(2); _func_00027C80(p); _func_000F4400(p); _func_0009D280(p); _func_00107C40(p,_D_00308158,_D_003251F0); _func_00107C40(p,(int)p,_D_003251F0); _func_0009D3E0(p); break;}
 case 2:{int x=*(int*)((char*)p+0x118)-15; if(x==0){_func_0009F840(4);_func_000F33B0(15);}else if(x==1){_func_0009F840(2);_func_000F33B0(16);}else if(x==2){_func_0009F840(1);_func_000F33B0(17);}else if(x==3){_func_0009F840(8);_func_000F33B0(18);} _func_000F3250(); break;}case 3:scratch[0]=3;break;case 5:scratch[0]=5;break;case 6:scratch[0]=6;break;case 7:{int x=*(int*)((char*)p+0x118); if(x==1)_func_000A28D0(1); else if(x==2)_func_000A2910(1); else if(x==3)_func_000A2950(1); else if(x>=4&&x<=7)_func_000A40A0(x-4,1); else if(x==8)_func_000A2890(1); else if(x==9)_func_000A2850(1); *state=1; int tick=_D_001E4618; float delta=(float)tick/2.5f; float accum=*(float*)((char*)p+0x11c)+delta; *(float*)((char*)p+0x11c)=accum; if(accum>=1.0f){*state=2;*(float*)((char*)p+0x11c)=1.0f;} break;}case 8:scratch[0]=8;break;case 9:scratch[0]=9;break;
 }}

void func_00028960(void)
{
  int func_001313C0(...); int func_000A4060(...);
  extern int D_00313B54;
  extern int *D_002ED39C, *D_002ED3A0, *D_002ED3A4, *D_002ED3A8, *D_002ED3AC, *D_002ED3B0, *D_002ED3D4;
  switch (D_00313B54) {
  case 4:
    func_000A4060(0, func_001313C0(*D_002ED39C));
    return;
  case 5:
    func_000A4060(0, func_001313C0(*D_002ED39C));
    func_000A4060(1, func_001313C0(*D_002ED3A0));
    return;
  case 6:
    func_000A4060(0, func_001313C0(*D_002ED3A0));
    func_000A4060(1, func_001313C0(*D_002ED39C));
    func_000A4060(2, func_001313C0(*D_002ED3A4));
    return;
  case 7:
    func_000A4060(0, func_001313C0(*D_002ED39C));
    func_000A4060(1, func_001313C0(*D_002ED3A0));
    func_000A4060(2, func_001313C0(*D_002ED3A4));
    return;
  case 8:
    func_000A4060(0, func_001313C0(*D_002ED39C));
    func_000A4060(6, func_001313C0(*D_002ED3A0));
    func_000A4060(1, func_001313C0(*D_002ED3A4));
    func_000A4060(2, func_001313C0(*D_002ED3A8));
    func_000A4060(3, func_001313C0(*D_002ED3AC));
    func_000A4060(4, func_001313C0(*D_002ED3B0));
    func_000A4060(5, func_001313C0(*D_002ED3D4));
  default:
    return;
  }
}

#pragma optimize("y", on)
void _func_00028AE0(int param_1) { extern void func_0009D280(int); unsigned int count; if (*(int*)(param_1 + 0x114) != 6) return; func_0009D280(param_1); if (*(unsigned char*)(param_1 + 0x12) != 0x15) { *(int*)(param_1 + 0x114) = 7; return; } *(int*)(param_1 + 0x114) = 7; count = *(unsigned int*)(*(int*)(param_1 + 0x1c) + 0x14); if (count > 0U) { unsigned int i = 0; int offset = 0; do { *(unsigned short*)(*(int*)(param_1 + 0x28) + offset) = 0; ++i; offset += 0x40; count = *(unsigned int*)(*(int*)(param_1 + 0x1c) + 0x14); } while (i < count); } }
#pragma optimize("", on)

