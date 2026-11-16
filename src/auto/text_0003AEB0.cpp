/* 6 functions from 0x0003AEB0 to 0x0003BD03, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0003AEB0(undefined4 param_1, undefined4 *param_2) { volatile unsigned char local[0xc34]; local[0]=1; int state=param_2[0x310/4]; if(state==0) param_2[0x310/4]=1; if(state==1) param_2[0x310/4]=2; if(state==11) param_2[0x310/4]=12; }

void _func_0003B8D0(int a, undefined4 *p) { int _func_0009C7A0(...); int _func_000A22B0(...); int _func_00011CB0(...); int _func_0007BAC0(...); int _func_0009C590(...); int _func_0009D280(...); char _func_00104600(...); int _func_00101270(...); extern undefined D_001D45F0,D_001D45E0,D_001E3A60; int *q=(int*)_func_0009C7A0(a,&D_001D45F0,0); _func_000A22B0(a+100,2,q[0],q[1],q[2],0x3e4ccccd); p[0x36c/4]=0;p[0x310/4]=0;_func_00011CB0((char*)p+0x320,(char*)p+0x410);int x=p[0x450/4];p[0x360/4]=x;p[0x364/4]=p[0x454/4];p[0x368/4]=p[0x458/4];_func_0007BAC0(*(int*)(x+0x2c),x);_func_0009D280(_func_0009C590(&D_001D45E0));if(!_func_00104600())_func_00101270(0,&D_001E3A60,0);}

void _func_0003BBE0(int a, undefined4 *p) { int _func_00131990(...); int _func_000A1BB0(...); extern undefined4 D_001D2E34,D_001D2E38,D_001D4624; extern unsigned short D_001D4628; extern unsigned char D_001D462A; extern undefined D_001D461C,D_001D29C7; char s[0x80]; *(undefined4*)s=D_001D2E34;*(undefined4*)(s+4)=D_001D2E38;if(s[0])return;*(undefined4*)(s+8)=D_001D4624;*(unsigned short*)(s+12)=D_001D4628;s[14]=D_001D462A;_func_00131990(s);p[0xa6]=_func_000A1BB0(a,&D_001D461C);_func_00131990(&D_001D29C7);*p=0x35;}

void _func_0003BC70(int a, undefined4 *p) { char _func_000A21A0(...); int _func_0009C7A0(...); int _func_000A1D10(...); int _func_0009C590(...); int _func_0009D280(...); extern undefined D_001D462C,D_001D45E0; char c=_func_000A21A0(p[0xa6]); if(c) { int *q=(int*)_func_0009C7A0(a,&D_001D462C,0); _func_000A1D10(p[0xa6],1,q[0],q[1],0x41a00000,0); *p=0x36; _func_0009D280(_func_0009C590(&D_001D45E0)); } }

void func_0003BCD0(undefined4 param_1, undefined4 *param_2)
{
  int func_000A1F50(...);
  int func_0009C590(...);
  extern undefined D_001D45E0;
  int func_0009D3E0(...);
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_000A1F50(param_2[0xa6]);
  if (iVar1 == 0) {
    uVar2 = func_0009C590(((undefined *)&D_001D45E0));
    func_0009D3E0(uVar2);
    *param_2 = 2;
  }
  return;
}
