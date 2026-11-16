/* 5 functions from 0x00022D70 to 0x00023CE6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00022D70(int param_1, uint *param_2) { int func_000120B0(...); int func_00011D40(...); extern undefined4 D_001D29F4; int func_0004F290(...); int func_00014D90(...); int func_00110330(...); uint uVar1; longdouble lVar2; if (((int)*param_2 < 9) && (*(char *)(param_1 + 0x174) != '\0')) { *(undefined1 *)(param_1 + 0x174) = 0; func_000120B0(param_1 + 0x150,0x3f800000,1,1); lVar2 = (longdouble)func_00011D40(param_1); *(float *)param_2[0xac] = (float)((longdouble)*(float *)param_2[0xac] - lVar2); if (*(float *)param_2[0xac] < D_001D29F4 != (*(float *)param_2[0xac] == D_001D29F4)) { func_0004F290(param_1); *param_2 = 9; uVar1 = *param_2; if (param_2[0xaf] == 0) goto LAB_000020b8; func_00014D90(param_2[0xaf]); func_00110330(*(undefined4 *)(param_2[0xaf] + 0x2c),0); param_2[0xaf] = 0; } } uVar1 = *param_2; if (0xc < uVar1) return; LAB_000020b8: if (param_1 == 109) return; }

int _func_0009C7A0(int,void*,int); int _func_0009CC90(int,void*); int _func_00056D50(int,int*); int _func_00056C00(int,int*); extern int _D_001D2ACC,_D_001D3518,_D_001D3314,_D_001D2C3C,_D_001D2940; void _func_00023B00(int a,int* p){switch(*p){case 15:{p[0]=16;p[19]=_func_0009C7A0(a,&_D_001D2ACC,1);p[15]=_func_0009C7A0(a,&_D_001D3518,1);p[20]=_func_0009C7A0(a,&_D_001D3314,1);p[5]=0;p[4]=0;p[3]=0;*((char*)p+0x99)=0;p[2]=0;p[1]=11;*(int*)p[0xac]=0x3f800000;int* v=(int*)_func_0009CC90(a,&_D_001D2C3C)+21;p[28]=v[0];p[29]=v[1];p[30]=v[2];int* q=(int*)_func_0009C7A0(a,&_D_001D2940,0);if(q){p[28]=q[0];p[29]=q[1];p[30]=q[2];}_func_00056D50(a,p+1);break;}case 16:_func_00056C00(a,p+1);break;}}

extern float _D_001E461C,_D_001D27B8,_D_001D27B0,_D_001D31C8; extern void _func_00022D70(void*,void*); extern void _func_00023720(void*,void*); extern void _func_00023B00(void*,void*); extern unsigned int _func_0009A880(void); extern void _func_00103990(int,int); extern float _func_0009A8A0(void); void func_00023BE0(int arg) { int *p=*(int**)(arg+0x110); int state=*p; if(state<13) _func_00022D70(p,(void*)arg); else if(state<15) _func_00023720(p,(void*)arg); else _func_00023B00(p,(void*)arg); if(*p!=8 && *p!=7) { double f=(double)*(float*)((char*)p+0x2f0)-(double)_D_001E461C; *(float*)((char*)p+0x2f0)=(float)f; if((float)f<=_D_001D27B8) { unsigned int r=_func_0009A880(); int v=p[(r%3)+0xb0]; if(v) _func_00103990(v,0); *(float*)((char*)p+0x2f0)=(_func_0009A8A0()+_D_001D27B0)*_D_001D31C8; } } }

void func_00023C80(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  extern undefined4 D_002EB5E0;
  extern undefined4 D_002EB5D8;
  extern undefined4 D_002EB5DC;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x6c));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x2b4));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x2b8));
  func_00116FB0(iVar1);
  D_002EB5E0 = D_002EB5E0 + -1;
  if (D_002EB5E0 == 0) {
    func_00116FB0(D_002EB5D8);
    D_002EB5D8 = 0;
    D_002EB5DC = 0;
  }
  return;
}
