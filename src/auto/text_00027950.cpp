/* 5 functions from 0x00027950 to 0x00027E00, found by Ghidra. */
#include "common.h"
struct Entity27A70 { char pad0[0x13]; char kind; char pad14[0x18]; int node; char pad30[0x24]; short id; char pad56[0xba]; int owner; int state; int type; float timer; char pad120[0x14]; float value; };
#include "ghidra.h"

void func_00027950(int param_1,int param_2) { int func_001100A0(...); extern int D_00313B60; float *local[7]; float *m; float *a=(float*)param_1; float *b=(float*)param_2; longdouble v0,v1,v2; func_001100A0(D_00313B60,local); m=local[0];
v0=(longdouble)m[6]*a[0x12c/4]+(longdouble)m[2]*a[0x128/4]+(longdouble)m[10]*a[0x130/4]+m[14];
v1=(longdouble)m[4]*a[0x12c/4]+(longdouble)m[8]*a[0x130/4]+(longdouble)m[0]*a[0x128/4]+m[12];
v2=(longdouble)m[5]*a[0x12c/4]+(longdouble)m[1]*a[0x128/4]+(longdouble)m[9]*a[0x130/4]+m[13];
b[13]=(float)((v0-b[13])*a[0x11c/4]+b[13]); b[12]=(float)((v1-b[12])*a[0x11c/4]+b[12]); b[14]=(float)((v2-b[14])*a[0x11c/4]+b[14]); }

void func_00027A20(int param_1)
{
  extern undefined D_0000FFFF;
  extern undefined4 D_002ED3D8;
  int func_0009C7A0(...);
  extern undefined4 D_00308158;
  extern undefined D_001E39B0;
  extern undefined D_002ED380;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined **)(param_1 + 0x114) = ((undefined *)&D_0000FFFF);
  if (D_002ED3D8 == 0) {
    uVar2 = 0;
    do {
      uVar1 = func_0009C7A0(D_00308158,*(undefined4 *)(((undefined *)&D_001E39B0) + uVar2),0);
      *(undefined4 *)(((undefined *)&D_002ED380) + uVar2) = uVar1;
      uVar2 = uVar2 + 4;
    } while (uVar2 < 0x58);
  }
  D_002ED3D8 = D_002ED3D8 + 1;
  return;
}

#pragma optimize("p", on)
void func_00027A70(int a)
{
 int func_001100A0(...),func_0009C7A0(...),func_001313C0(...),func_00110550(...),func_0009D3E0(...),func_0009C590(...),func_0011C3E0(...),func_0011C3B0(...),func_00110300(...),func_0011BDD0(...);
 float func_00131760(); float func_0012E870(...);
 extern char D_001D32D8,D_001D37C0,D_001D37B8;
 extern int D_00313B54;extern unsigned int D_003104B4;extern int D_0030C630[];extern float D_001D2888;
 int m,p,q,n;int object=a;unsigned int i;
 func_001100A0(*(int*)(object+44),&m);
 *(float*)(object+0x114)=0.0f;
 *(float*)(object+0x11c)=func_00131760();
 *(int*)(object+0x134)=0xbf800000;
 p=func_001313C0(*(int*)func_0009C7A0(object,&D_001D32D8,0));
 *(int*)(object+0x118)=p;
 if(p==21)func_00110550(*(int*)(*(int*)(object+0x110)+0xe0),*(int*)(object+44),8);
 if(*(char*)(object+19)==0x34) goto remove;
 if(D_00313B54==8){
   p=*(int*)(object+0x118);
   if(p==13){remove: *(int*)(object+0x114)=6;func_0009D3E0(object);return;}
   if(p==23){*(int*)(object+0x118)=13;return;}
 }
 for(i=0;i<D_003104B4;++i){
  p=D_0030C630[i];
  if(p){
   if(*(char*)(p+19)==0x2d){
    q=func_0009C590(*(int*)func_0009C7A0(p,&D_001D37C0,0));
    if(object==q){*(int*)(object+0x114)=6;func_0009D3E0(object);break;}
   }
   if(*(char*)(D_0030C630[i]+19)==0x30){
    func_001100A0(*(int*)(D_0030C630[i]+44),&n);
    if(func_0012E870(m+48,n+48)<D_001D2888){
     *(int*)(object+0x114)=6;func_0009D3E0(object);
     p=D_0030C630[i];
     *(short*)(p+0x12c+*(int*)(p+0x128)*2)=*(short*)(object+0x54);
     ++*(int*)(p+0x128);break;
    }
   }
  }
 }
 if(*(int*)(object+0x118)==21){func_0011C3E0(object);func_0011C3B0(*(int*)(object+0x110)+0x2b8,object,object);}
 if(*(int*)(object+0x118)==1 && D_00313B54==7){
  p=func_00110300(*(int*)(object+44),&D_001D37B8,0);
  q=func_0011BDD0(*(int*)(p+0xe0),0);
  if(q){*(int*)(*(int*)(*(int*)(q+8)+40)+0x54)=1;--*(short*)(*(int*)(p+0xe0)+42);}
 }
}
#pragma optimize("", on)
void _func_00027C80(int param_1)
{
  int _func_0005C5E0(...);
  int _func_00012D60(...);
  int _func_0009D3E0(...);
  extern int _D_002ED3D8;
  int iVar1 = *(int *)(param_1 + 0x114);
  if (iVar1 != 4) {
    _D_002ED3D8 = _D_002ED3D8 - 1;
    if (iVar1 == 6 || iVar1 == 7 || iVar1 == 8) _func_0005C5E0(param_1 + 0x140);
    *(int *)(param_1 + 0x114) = 4;
    _func_00012D60(param_1, 0);
    _func_0009D3E0(param_1);
  }
}

void __cdecl _func_00027CE0(int a)
{
  int _func_00110060(...), _func_001105E0(...), _func_00110000(...);
  char _func_0011B020(...);
  extern float _D_001D35F8, _D_001D35FC;
  int e = *(int *)(a + 0x110);
  __declspec(align(16)) int m[16];
  int r[4], hi[4], lo[4];
  unsigned int i;
  int off;
  char found;
  _func_00110060(*(int *)(a + 0x2c), m);
  hi[0] = m[12];
  *(float *)&hi[1] = _D_001D35F8 + (double)*(float *)&m[13];
  hi[2] = m[14];
  hi[3] = m[15];
  lo[0] = m[12];
  *(float *)&lo[1] = (double)*(float *)&m[13] - _D_001D35FC;
  lo[2] = m[14];
  lo[3] = m[15];
  found = 0;
  for (i = 0, off = 0; i < *(unsigned int *)(e + 0x27c); i++, off += 0x18) {
    if (_func_0011B020(*(int *)(off + *(int *)(e + 0x280)), hi, lo, r, 0, 0)) {
      found = 1;
      lo[0] = r[0];
      lo[1] = r[1];
      lo[2] = r[2];
    }
  }
  if (found) {
    m[12] = lo[0]; m[13] = lo[1]; m[14] = lo[2];
    _func_001105E0(*(int *)(a + 0x2c), m, 1);
    _func_00110000(*(int *)(a + 0x2c));
  }
}

