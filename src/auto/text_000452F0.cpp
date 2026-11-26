/* 17 functions from 0x000452F0 to 0x000461C1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct V3 { int x, y, z; };

void _func_000452F0(void)
{
    extern int D_00307DF8; extern float D_00307DB4, D_001D27B0;
    int func_00102E80(...); int func_00044E50(...); int func_001100A0(...); float func_0012E870(...);
    int func_0012E6D0(...); char func_00112BF0(...); int func_001096F0(...); int func_00044C90(...);
    int func_000400C0(...); int func_00109670(...);
    extern char D_002EEB74, D_002EEAFC; extern int D_002EEAF0; extern void (*D_002EEB58)();
    extern int D_001D4D38; extern unsigned int D_002EEAF8; extern int D_002EEB08[];
    extern int D_002EEB5C, D_002EEB60, D_002EEB64, D_002EEB68;
    int *s = *(int**)(D_00307DF8 + 0x110);
    unsigned int i;
    struct { int loc[4]; int v[3]; int z[3]; } L;
    if (*s == 0x47) {
        if ((long double)*(float*)((char*)s + 0x334) < (long double)D_00307DB4) {
            func_00102E80(*(int*)((char*)s + 0x320));
            func_00044E50();
            return;
        }
    } else {
        i = 0;
        if (D_002EEB74 != 0) {
            if (func_001096F0() == 2) {
                L.loc[2] = 0; L.loc[1] = 0; L.loc[3] = 0;
                if (*(char*)(D_002EEAF0 + 0x13) != '*')
                    L.loc[3] = 0x42c80000;
                if (D_002EEB58) D_002EEB58();
                func_00044C90(D_002EEAF0, L.loc + 1);
                D_002EEB58 = 0;
                func_000400C0(0);
                func_00109670(&D_001D4D38, 0x3f800000);
                D_002EEB74 = 0;
                return;
            }
        } else {
            func_001100A0(*(int*)(D_00307DF8 + 0x2c), L.loc);
            if (D_002EEAFC != 0) {
                D_002EEAFC = 0;
            } else {
                if ((long double)func_0012E870(&D_002EEB5C, L.loc[0] + 0x30) > (long double)D_001D27B0 && 0 < D_002EEAF8) {
                    do {
                        int e = D_002EEB08[i];
                        int q = e + 0x48;
                        func_0012E6D0(L.v, &D_002EEB5C, q);
                        func_0012E6D0(L.loc + 1, L.loc[0] + 0x30, q);
                        if (func_00112BF0(L.v, L.loc + 1, e + 0x54, L.z)) {
                            *s = 0x46;
                            D_002EEAFC = 1;
                            break;
                        }
                        i++;
                    } while (i < D_002EEAF8);
                }
            }
            D_002EEB5C = *(int*)(L.loc[0] + 0x30);
            D_002EEB60 = *(int*)(L.loc[0] + 0x34);
            D_002EEB64 = *(int*)(L.loc[0] + 0x38);
            D_002EEB68 = *(int*)(L.loc[0] + 0x3c);
        }
    }
}

void _func_000454B0(int p){extern int _D_00307DF8,_D_0000FFFF,_D_002EDDE8;extern float _D_001E461C,_D_001D2BE8;int _func_000A1D10(...),_func_0006D7A0(...);int s=*(int*)(_D_00307DF8+0x110);_func_000A1D10(*(int*)(s+0x2b0),1,0,(int)&_D_0000FFFF,0x41c00000,0x3dcccccd);*(int*)s=0x56;double f=(double)_D_001E461C*(double)_D_001D2BE8;int a[0x58]={0};a[0]=9;*(int*)((char*)a+0x20)=0x41f00000;*(int*)((char*)a+0x160)=_D_002EDDE8;*(float*)((char*)a+0x14)=(float)f;_func_0006D7A0(p,s+0x10,a);}

void func_00045550(undefined4 param_1, undefined4 *param_2)
{
  int func_000A1F50(...);
  int func_00130590(...);
  int func_0012E750(...);
  int iVar1;
  
  iVar1 = func_000A1F50(param_2[0xac]);
  if (iVar1 == 0) {
    func_00130590(param_2 + 4);
    *param_2 = 2;
    param_2[0x6e] = 0xffffffff;
    func_0012E750(param_2 + 0x26);
  }
  return;
}

void _func_000455A0(int param_1)
{
  int func_00116A90(...);
  int func_0012E6D0(...);
  float func_0012EA60(...);
  int func_0012F120(...);
  int func_0012EE00(...);
  int func_001105E0(...);
  int func_00110000(...);
  float func_0012E7B0(...);
  int func_0013E469(...);
  int func_00103210(...);
  extern char D_001D4D9C, D_001D4D88, D_001D4D78, D_001D4D64;
  int *piVar2;
  int iVar3;
  int *puVar1;
  int local_a8[3];
  float local_9c[3];
  __declspec(align(16)) char local_90[16];
  char local_80[16];
  int local_70[3];
  int local_60[3];
  char local_50[76];

  piVar2 = (int *)func_00116A90(0x38,1,1);
  *(int **)(param_1 + 0x110) = piVar2;
  *piVar2 = *(int *)(param_1 + 0x130);
  piVar2[1] = *(int *)(param_1 + 0x134);
  piVar2[2] = *(int *)(param_1 + 0x138);
  func_0012E6D0(local_a8,*(int *)(*piVar2 + 4) + 0x10,*(int *)(*piVar2 + 4));
  func_0012EA60(local_a8);
  local_9c[0] = 0.0f;
  local_9c[1] = 1.0f;
  local_9c[2] = 0.0f;
  func_0012F120(local_90);
  local_70[0] = local_a8[0];
  local_70[1] = local_a8[1];
  local_70[2] = local_a8[2];
  func_0012EE00(local_90,local_9c,local_a8);
  func_0012EA60(local_90);
  func_0012EE00(local_80,local_70,local_90);
  func_0012EA60(local_80);
  func_0012EE00(local_90,local_80,local_70);
  func_0012EA60(local_90);
  puVar1 = *(int **)(*piVar2 + 4);
  local_60[0] = puVar1[0];
  local_60[1] = puVar1[1];
  local_60[2] = puVar1[2];
  func_001105E0(*(int *)(param_1 + 0x2c),local_90,0);
  func_00110000(*(int *)(param_1 + 0x2c));
  piVar2[7] = **(int **)(*(int *)(param_1 + 0x2c) + 0x2c);
  piVar2[3] = 0;
  *(float *)(piVar2 + 9) = func_0012E7B0(*(int *)(*piVar2 + 4),*(int *)(*piVar2 + 4) + 0x10);
  *(char *)(piVar2 + 6) = 0;
  func_0013E469(local_50,&D_001D4D9C,*(int *)(param_1 + 0xc));
  iVar3 = func_00103210(local_50);
  piVar2[10] = iVar3;
  func_0013E469(local_50,&D_001D4D88,*(int *)(param_1 + 0xc));
  iVar3 = func_00103210(local_50);
  piVar2[0xc] = iVar3;
  func_0013E469(local_50,&D_001D4D78,*(int *)(param_1 + 0xc));
  iVar3 = func_00103210(local_50);
  piVar2[0xb] = iVar3;
  func_0013E469(local_50,&D_001D4D64,*(int *)(param_1 + 0xc));
  iVar3 = func_00103210(local_50);
  piVar2[0xd] = iVar3;
}

void func_000459A0(int param_1, undefined1 param_2)
{
  *(undefined1 *)(*(int *)(param_1 + 0x110) + 0x18) = param_2;
  return;
}

void __cdecl _func_000459C0(int *q, int *p) { int _func_0012E6D0(...), _func_0012EE00(...); float _func_0012EA60(...); char x[12], y[12]; _func_0012E6D0(x,p+4,p); _func_0012E6D0(y,p+8,p); _func_0012EE00(q,x,y); _func_0012EA60(q); }

unsigned char _func_00045A10(int s,int* b){int _func_00106070(...);int a=b[0];if(a&&a!=*(int*)(s+0x68)-1){int c=b[1];if(c&&c!=*(int*)(s+0x6c)-1){int x=_func_00106070(*(int*)(s+0x68),b);unsigned char v=*(unsigned char*)(x+*(int*)(s+0xc4));return (v>>2)&1;}}return 1;}

extern unsigned int _D_001D2E34, _D_001D2E38;
extern unsigned short _D_001D2E30;
extern float _D_001D27B8, _D_001D290C;
void _func_00131990(char *);
void _func_000A2310(void *);
void _func_000A22B0(void *, int, int, int, int, int, int);
void _func_000A2350(void *, float);
void _func_000A22D0(void *);
extern unsigned int _D_001D2E34;
extern unsigned int _D_001D2E38;
void _func_00045A60(void *p) { char s[128]; unsigned int i=0; char *src=*(char **)((char*)p+0x70); *(unsigned int*)s=_D_001D2E34; *(unsigned int*)(s+4)=_D_001D2E38; while(i<120) s[8+i++]=0; { char *d=s+8; while(*d)d++; while(*src)*d++=*src++; } { char *d=s+8; while(*d)d++; *(unsigned short*)d=_D_001D2E30; } _func_00131990(s); }

int func_000A2310(int);
int func_000A22B0(int,int,int,int,int,int);
int func_000A2350(int,float);
int func_000A22D0(int);
void func_00045BC0(int p,char mode) { if(mode) { int q=p+0x64; float t=((float (__cdecl *)(int))func_000A2310)(q); int z=**(int **)(*(int *)(p+0x84)+0x10); func_000A22B0(q,1,*(unsigned short *)(z+0x18),*(unsigned short *)(z+0x1a),*(int *)(z+0x1c),0); func_000A2350(q,t); } else func_000A22D0(p+0x64); }

int _func_001068B0(int,int,int,int,int);
int _func_00106AC0(int,int,int *);
int _func_00106070(int,int *);
int _func_00026990(int,int,int);
void _func_00045C20(unsigned char *p, int a, int b)
{
  int new_var[2];
 _func_001068B0((int) (p + 4), (int) (p + 0x110), (int) (p + 0x108), a, b); _func_00106AC0((int) (p + 4), (int) (p + 0xfc), &new_var[0]);
  p[0] = 0;
  if ((((new_var[0] >= 0) && (new_var[0] < (*((int *) (p + 0xc))))) && (new_var[1] >= 0)) && (new_var[1] < (*((int *) (p + 0xc)))))
  {
    int x = _func_00106070(*((int *) (p + 0xc)), &new_var[0]);
    if ((*((unsigned char *) (((*((int *) ((*((int *) (p + 0x28))) + 4))) + (x * 4)) + 2))) & 0x10)
    {
      _func_00026990(*((int *) (p + 0x28)), new_var[0], new_var[1]);
      p[0] = 1;
    }
  }
}

void _func_00045CC0(int a,int* b){int _func_00106410(...);*(int*)(a+0xf0)=b[0];*(int*)(a+0xf4)=b[1];*(int*)(a+0xf8)=b[2];_func_00106410(*(int*)(a+8),b,a+0x110);}

int _func_00106410(int,int,int);
int _func_000A2310(int);
int _func_000A22B0(int,int,int,int,int,int);
int _func_000A2350(int,float);
int _func_000A22D0(int);
extern unsigned int D_001D2E34, D_001D2E38;
extern unsigned short D_001D2E30;
extern float D_001D27B8, D_001D290C;
void _func_00045D00(int a, unsigned int *b) { int *out=(int *)a; int x; x=out[2]; out[0x3f]=b[0]; out[0x40]=b[1]; out[0x41]=b[2]; _func_00106410(x,(int)b,(int)(out+0x42)); }

void _func_00045D40(int a, int b, int *c, int *d, float f0, float f1, int v, float *state, int flag){extern float _D_001D27B8;int _func_0012EA60(...),_func_00058890(...);int x[7];if(!flag){x[0]=c[0];x[1]=c[2];x[2]=d[0];x[3]=d[2];if(state[1]!=_D_001D27B8){state[1]=0;_func_0012EA60(state);}x[5]=*(int*)state;x[6]=((int*)state)[2];x[4]=v;_func_00058890(a,x);*(char*)(a+0x78)=1;}*(int*)(a+0x7c)=0;*(int*)(a+0x84)=*(int*)&f0;*(int*)(a+0x80)=v;*(float*)(a+0x88)=f1/f0;}

undefined4 func_00045E00(int param_1, undefined4 param_2, int param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8)
{
  int func_00106AC0(...);
  int func_0012E840(...);
  int func_00106210(...);
  int func_0012E6D0(...);
  int func_0012EA60(...);
  int func_00045D40(...);
  int iVar1;
  int iVar2;
  longdouble lVar3;
  int local_60;
  int local_5c;
  float local_58;
  int local_54;
  int local_50;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  
  func_00106AC0(param_1 + 4,param_3,&local_48);
  local_5c = *(int *)(*(int *)(param_1 + 0x28) + 4);
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  local_50 = -1;
  local_58 = 3.4028235e+38;
  local_60 = 0;
  if (iVar1 != 0) {
    do {
      local_54 = 0;
      if (iVar1 != 0) {
        do {
          if ((*(byte *)(local_5c + 2) & 0x50) == 0x50) {
            local_38 = (float)local_48;
            local_34 = (float)local_44;
            local_40 = (float)local_54;
            local_3c = (float)local_60;
            lVar3 = (longdouble)func_0012E840(&local_38,&local_40);
            if (lVar3 < (longdouble)local_58) {
              local_58 = (float)lVar3;
              local_2c = local_60;
              local_50 = iVar2;
              local_30 = local_54;
            }
          }
          local_5c = local_5c + 4;
          iVar2 = iVar2 + 1;
          local_54 = local_54 + 1;
        } while (local_54 != *(int *)(param_1 + 0xc));
      }
      iVar1 = *(int *)(param_1 + 0xc);
      local_60 = local_60 + 1;
    } while (local_60 != iVar1);
    if (local_50 != -1) {
      func_00106210(param_1 + 4,&local_30,&local_28);
      local_1c = *(undefined4 *)(param_3 + 4);
      local_20 = local_28;
      local_18 = local_24;
      func_0012E6D0(local_14,&local_20,param_3);
      func_0012EA60(local_14);
      func_00045D40(param_2,param_3,&local_20,param_5,param_6,param_7,local_14,param_8);
      return 1;
    }
  }
  return 0;
}

