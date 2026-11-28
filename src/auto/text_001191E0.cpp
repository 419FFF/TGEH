/* 19 functions from 0x001191E0 to 0x0011A18C, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

int _func_0013E9DB(int);
float _func_0013E9E0(int);
void _func_001191E0(int a, int *b) { if (*(int *)(a + 0xb0)) { *(float *)(*(int *)(a + 0xb0)+0x34) = _func_0013E9E0(b[0]); *(float *)(*(int *)(a + 0xb0)+0x38) = _func_0013E9E0(b[1]); *(float *)(*(int *)(a + 0xb0)+0x3c) = _func_0013E9E0(b[2]); *(float *)(*(int *)(a + 0xb0)+0x40) = _func_0013E9E0(b[3]); } }

void func_00119750(int p,char **q) {
int func_0011B4F0(...); char *func_0013E600(...);
extern char D_001DF36C[],D_001DF4B0[]; extern char D_001DF4AC[];
extern char D_001DF4A4[];
extern char D_001DF49C[];
extern char D_001DF494[];
extern char D_001DF484[];
extern char D_001DF474[];
extern char D_001DF464[];
extern char D_001DF458[];
extern char D_001DF44C[];
extern char D_001DF438[];
extern char D_001DF42C[];
extern char D_001DF418[];
extern char D_001DF40C[];
extern char D_001DF3FC[];
extern char D_001DF3E8[];
extern char D_001DF3D4[];
extern char D_001DF3BC[];
extern char D_001DF3A8[];
extern char D_001DF38C[];
extern char D_001DF37C[];
extern char D_001DF370[];
int value; char buffer[128];
if(*(int*)(p+0xb0)){
char *src=*q; int offset=(int)buffer-(int)src; char c;
do { c=*src; *(char*)((int)src+offset)=c; ++src;}while(c);
char *s=buffer; int i=0;
do {
while(*s==' ')++s;
char *end=func_0013E600(s,D_001DF36C);
if(end){while(*end==' '||*end==',')--end; ++end; *end=0;}
if(!func_0011B4F0(s,D_001DF4B0)){
value=0;
if(!i){*(int*)(*(int*)(p+0xb0)+4)=0; goto first;}
else goto second;
} else {
if(!func_0011B4F0(s,D_001DF4AC))value=1;
else if(!func_0011B4F0(s,D_001DF4A4))value=4;
else if(!func_0011B4F0(s,D_001DF49C))value=11;
else if(!func_0011B4F0(s,D_001DF494))value=2;
else if(!func_0011B4F0(s,D_001DF484))value=5;
else if(!func_0011B4F0(s,D_001DF474))value=6;
else if(!func_0011B4F0(s,D_001DF464))value=7;
else if(!func_0011B4F0(s,D_001DF458))value=8;
else if(!func_0011B4F0(s,D_001DF44C))value=9;
else if(!func_0011B4F0(s,D_001DF438))value=10;
else if(!func_0011B4F0(s,D_001DF42C))value=12;
else if(!func_0011B4F0(s,D_001DF418))value=23;
else if(!func_0011B4F0(s,D_001DF40C))value=14;
else if(!func_0011B4F0(s,D_001DF3FC))value=15;
else if(!func_0011B4F0(s,D_001DF3E8))value=16;
else if(!func_0011B4F0(s,D_001DF3D4))value=18;
else if(!func_0011B4F0(s,D_001DF3BC))value=19;
else if(!func_0011B4F0(s,D_001DF3A8))value=20;
else if(!func_0011B4F0(s,D_001DF38C))value=22;
else if(!func_0011B4F0(s,D_001DF37C))value=24;
else if(!func_0011B4F0(s,D_001DF370))value=25;
if(!i){first: **(int**)(p+0xb0)=value;}else { second: *(int*)(*(int*)(p+0xb0)+4)=value; }
}
s=end;if(end)s=end+1;++i;
}while(s);
}
}

void _func_00119A80(int a, int *b)
{
  int new_var;
  if (*((int *) (a + 0xb0)))
  {
    unsigned int i = 0x18;
    do
    {
      if (b[0] == 0)
      {
        return;
      }
      if (!_func_0013E9DB(b[0]))
      {
        *((unsigned int *) ((*((int *) (a + 0xb0))) + i)) |= 1;
      }
      new_var = a + 0xb0;
      if (!_func_0013E9DB(b[1]))
      {
        *((unsigned int *) ((*((int *) new_var)) + i)) |= 2;
      }
      i += 4;
      b += 2;
    }
    while (i < 0x28);
  }
}

void _func_00119B00(int a, int *b) { if (*(int *)(a+0xb0)) { unsigned int i=0; float *p=(float *)(a+0x8c); do { if (!b[i*2]) return; p[-1]=_func_0013E9E0(b[i*2]); p[0]=_func_0013E9E0(b[i*2+1]); ++i; p+=2; } while(i<4); } }

void func_00119B50(int param_1,int param_2){int func_0011B4F0(...),func_0013E9DB(...);extern undefined D_001DF508,D_001DF504,D_001DF4F8,D_001DF4E8,D_001DF4DC,D_001DF4D0,D_001DF4C4,D_001DF4B4;int iVar1;int iVar2=param_1;uint uVar3=0;if(*(int*)(param_1+0xb0)!=0){do{if(!func_0011B4F0(*(undefined4*)(param_2+uVar3*4),&D_001DF508))iVar2=0;else if(!func_0011B4F0(*(undefined4*)(param_2+uVar3*4),&D_001DF504))iVar2=1;else if(!func_0011B4F0(*(undefined4*)(param_2+uVar3*4),&D_001DF4F8))iVar2=2;else if(!func_0011B4F0(*(undefined4*)(param_2+uVar3*4),&D_001DF4E8))iVar2=3;else if(!func_0011B4F0(*(undefined4*)(param_2+uVar3*4),&D_001DF4DC))iVar2=4;else if(!func_0011B4F0(*(undefined4*)(param_2+uVar3*4),&D_001DF4D0))iVar2=5;else if(!func_0011B4F0(*(undefined4*)(param_2+uVar3*4),&D_001DF4C4))iVar2=6;else if(!func_0011B4F0(*(undefined4*)(param_2+uVar3*4),&D_001DF4B4))iVar2=7;if(!uVar3){if(iVar2!=1){*(int*)(*(int*)(param_1+0xb0)+0x44)=0;*(int*)(*(int*)(param_1+0xb0)+0x28)=iVar2;}else{*(int*)(*(int*)(param_1+0xb0)+0x44)=1;*(int*)(*(int*)(param_1+0xb0)+0x28)=iVar2;}}else{*(int*)(*(int*)(param_1+0xb0)+0x2c)=iVar2;iVar1=*(int*)(param_1+0xb0);if(*(int*)(iVar1+0x28)==1&&*(int*)(iVar1+0x2c)!=0)*(int*)(iVar1+0x44)=0;}++uVar3;}while(uVar3<2);if(*(int*)(param_2+8)){iVar2=func_0013E9DB(*(int*)(param_2+8));if(iVar2==0){*(int*)(*(int*)(param_1+0xb0)+0x30)=iVar2;return;}*(int*)(*(int*)(param_1+0xb0)+0x30)=1;}}}

void _func_00119CF0(int a, int *b) { if (_func_0013E9DB(*b)) *(unsigned char *)(a + 0xb6) |= 1; }

void func_00119D10(int param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  undefined2 uVar1;
  
  uVar1 = func_0013E9DB(*param_2);
  *(undefined2 *)(param_1 + 0xb4) = uVar1;
  return;
}

void _func_00117100(void);
void _func_00117130(void);
int _func_00116A90(int, int, int);
void _func_0012EA60(float *);
void _func_00119D70(int param_1, int *param_2)
{
    int value = _func_0013E9DB(*param_2);
    _func_00117100();
    *(int *)(*(int *)param_1 + 0xc) = value;
    _func_00117130();
}

void func_00119DA0(int param_1, undefined4 *param_2)
{
  int func_0011B4F0(...);
  extern undefined D_001DCFFC;
  extern undefined D_001DF514;
  extern undefined D_001DF510;
  int iVar1;
  
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DCFFC));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 2;
    return;
  }
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DF514));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 0;
    return;
  }
  iVar1 = func_0011B4F0(*param_2,((undefined *)&D_001DF510));
  if (iVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 1;
  }
  return;
}

void func_00119E20(int param_1)
{
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  return;
}

void func_00119E30(int param_1)
{
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  return;
}

void func_00119E40(int *param_1, undefined4 *param_2)
{
  int func_00117100(...);
  int func_00116A90(...);
  int func_00117130(...);
  int func_0013E9E0(...);
  undefined4 uVar1;
  longdouble lVar2;
  
  if (param_1[0x2b] == 0) {
    func_00117100();
    uVar1 = func_00116A90(*(int *)(*param_1 + 0xc) * 0xc,1,1);
    *(undefined4 *)(*param_1 + 0x10) = uVar1;
    func_00117130();
  }
  lVar2 = (longdouble)func_0013E9E0(*param_2);
  *(float *)(*(int *)(*param_1 + 0x10) + param_1[0x2b] * 0xc) = (float)lVar2;
  lVar2 = (longdouble)func_0013E9E0(param_2[1]);
  *(float *)(*(int *)(*param_1 + 0x10) + 4 + param_1[0x2b] * 0xc) = (float)lVar2;
  lVar2 = (longdouble)func_0013E9E0(param_2[2]);
  *(float *)(*(int *)(*param_1 + 0x10) + 8 + param_1[0x2b] * 0xc) = (float)lVar2;
  return;
}

void func_00119ED0(int *param_1, undefined4 *param_2)
{
  int func_00117100(...);
  int func_00116A90(...);
  int func_00117130(...);
  int func_0013E9E0(...);
  int func_0012EA60(...);
  undefined4 uVar1;
  longdouble lVar2;
  
  if (param_1[0x2b] == 0) {
    func_00117100();
    uVar1 = func_00116A90(*(int *)(*param_1 + 0xc) * 0xc,1,1);
    *(undefined4 *)(*param_1 + 0x14) = uVar1;
    func_00117130();
  }
  lVar2 = (longdouble)func_0013E9E0(*param_2);
  *(float *)(*(int *)(*param_1 + 0x14) + param_1[0x2b] * 0xc) = (float)lVar2;
  lVar2 = (longdouble)func_0013E9E0(param_2[1]);
  *(float *)(*(int *)(*param_1 + 0x14) + 4 + param_1[0x2b] * 0xc) = (float)lVar2;
  lVar2 = (longdouble)func_0013E9E0(param_2[2]);
  *(float *)(*(int *)(*param_1 + 0x14) + 8 + param_1[0x2b] * 0xc) = (float)lVar2;
  func_0012EA60(*(int *)(*param_1 + 0x14) + param_1[0x2b] * 0xc);
  return;
}

void func_00119F80(int *p, int arg)
{
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); int func_0013E9E0(...);
 extern float D_001D27B8,D_001D27B0; int i; float result;
 if(p[0xac/4]==0){func_00117100();*(int *)(*p+24)=func_00116A90(*(int *)(*p+12)<<4,1,1);func_00117130();}
 for(i=0;i<4;i++){result=func_0013E9E0(*(unsigned int *)(arg+i*4));*(float *)(*(int *)(*p+24)+(i+p[0xac/4]*4)*4)=result;if(*(float *)(*(int *)(*p+24)+(i+p[0xac/4]*4)*4)<D_001D27B8)*(float *)(*(int *)(*p+24)+(i+p[0xac/4]*4)*4)=0.0f;if(D_001D27B0<*(float *)(*(int *)(*p+24)+(i+p[0xac/4]*4)*4))*(float *)(*(int *)(*p+24)+(i+p[0xac/4]*4)*4)=1.0f;}
}

void func_0011A040(int *p, unsigned int *v)
{
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); float func_0013E9E0(...);
 int x; float a;
 if (p[0x2b]==0) { func_00117100(); x=func_00116A90(*(int *)(*p+0xc)<<3,1,1); *(int *)(*p+0x1c)=x; func_00117130(); }
 a=func_0013E9E0(v[0]); *(float *)(*(int *)(*p+0x1c)+p[0x2b]*8)=a;
 a=func_0013E9E0(v[1]); *(float *)(*(int *)(*p+0x1c)+p[0x2b]*8+4)=a;
}

void func_0011A0B0(int *p, unsigned int *v)
{
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); float func_0013E9E0(...);
 int x; float a;
 if (p[0x2b]==0) { func_00117100(); x=func_00116A90(*(int *)(*p+0xc)<<3,1,1); *(int *)(*p+0x20)=x; func_00117130(); }
 a=func_0013E9E0(v[0]); *(float *)(*(int *)(*p+0x20)+p[0x2b]*8)=a;
 a=func_0013E9E0(v[1]); *(float *)(*(int *)(*p+0x20)+p[0x2b]*8+4)=a;
}

void func_0011A120(int *p, unsigned int *v)
{
 int func_00117100(...); int func_00116A90(...); int func_00117130(...); float func_0013E9E0(...);
 int x; float a;
 if (p[0x2b]==0) { func_00117100(); x=func_00116A90(*(int *)(*p+0xc)<<3,1,1); *(int *)(*p+0x24)=x; func_00117130(); }
 a=func_0013E9E0(v[0]); *(float *)(*(int *)(*p+0x24)+p[0x2b]*8)=a;
 a=func_0013E9E0(v[1]); *(float *)(*(int *)(*p+0x24)+p[0x2b]*8+4)=a;
}

