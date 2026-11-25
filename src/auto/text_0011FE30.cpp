/* 16 functions from 0x0011FE30 to 0x00120E15, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0011FE30(int p){extern int D_00329238,D_00329234,D_0032923C;extern volatile float D_001D290C,D_001E7D28;volatile float f=(float)p;D_00329238=p;if(p<0)D_0032923C=(f+D_001D290C+D_00329234)/D_001E7D28;}

void func_0011FE60(float p){extern int D_00329238,D_00329234,D_0032923C;extern volatile float D_001D290C,D_001E7D28;volatile float f=(float)D_00329238;D_00329234=*(int*)&p;if(D_00329238<0)D_0032923C=(f+D_001D290C+p)/D_001E7D28;}

void func_0011FEA0(int param_1)
{
  extern undefined4 D_00329338;
  int func_00116A90(...);
  extern undefined4 D_00329334;
  D_00329338 = func_00116A90(param_1 * 0x60,1,1);
  D_00329334 = param_1;
  return;
}

void func_0011FED0(int p,int q){extern int D_00329238,D_00329234,D_00329330;extern float D_001D27B0;extern int D_00329340;int func_0010FC60(int),func_00011CB0(int,int),func_0012FA20(int,int,float,int,float),func_0012F2E0(int,int);if(*(unsigned char*)(p+0x20)&2)func_0010FC60(p);if(*(int*)(p+0xd4)!=D_00329238)func_00011CB0(q,p+((unsigned char)*(char*)(p+0x23)+1)*64);else {int a=(unsigned char)*(char*)(p+0x23);float x=D_001D27B0-*(float*)&D_00329234;func_0012FA20(q,p+(2-a)*64,x,p+(a+1)*64,*(float*)&D_00329234);}if((unsigned)D_00329330>0)func_0012F2E0(q,(int)&D_00329340);}

void func_0011FF70(int a, int b) { extern int D_003292E0,D_00329338,D_003292F0,D_00329330; int func_00011CB0(int,int),func_0012F730(unsigned*,int,int),func_0012F890(unsigned*,int); unsigned v[4]; *(int*)(D_003292E0*0x60+8+D_00329338)=a; func_00011CB0(D_003292E0*0x60+0x10+D_00329338,b); func_0012F730(v,a,b); func_0012F890(v,(int)&D_003292F0); *(int*)(D_003292E0*0x60+0x50+D_00329338)=D_00329330; int p=D_00329338+D_003292E0*0x60; unsigned t=v[2]; v[2]=t; if(t&0x80000000)t=~t; else t=t^0x80000000; *(unsigned*)p=t; int q=D_00329338+D_003292E0*0x60; *(int*)(q+4)=q+0x60; D_003292E0=D_003292E0+1; }

bool func_00120040(char *obj, int arg, unsigned int n, unsigned int *counts, float *pts)
{
    void func_0012F4C0(float *, int *, int);
    void func_0012F5B0(float *, float *, float *);
    float func_0012E8C0(float *, float *);
    float func_00131210(float);
    extern int D_003292F0;
    extern float D_001D27B8;
    unsigned int i, j, k;
    float v[3];
    float t, d, r;
    __declspec(align(16)) float m[12];
    float tmp[3];

    func_0012F4C0(m, &D_003292F0, arg);
    k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < counts[i]; j++, k++) {
            float *p = pts + k * 4;
            func_0012F5B0(v, p, m);
            t = p[3] - func_0012E8C0(tmp, v);
            d = func_00131210(v[1]) * *(float *)(obj + 0x14);
            d = func_00131210(v[0]) * *(float *)(obj + 0x10) + d;
            d = func_00131210(v[2]) * *(float *)(obj + 0x18) + d;
            r = d - (func_0012E8C0((float *)obj, v) + t);
            if (D_001D27B8 > r)
                return false;
        }
    }
    return true;
}

#pragma optimize("y", off)
int func_00120170(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, char *param_7)
{
  extern int D_003291C0, D_00329250, D_00329248, D_00329330, D_00329254, D_003281D0;
  extern char D_00325314[], D_00325318[];
  int func_0011FED0(...);
  int func_0011F920(...);
  char func_0011A930(...);
  char func_00120040(...);
  int func_0011F960(...);
  int *piVar1;
  int iVar2;
  int *puVar3;
  int uVar5;
  char *puVar7;
  int uVar6;
  char local_50[76];

  if (*(int *)(param_1 + 0x24) == D_003291C0) {
    return param_3;
  }
  *(int *)(param_1 + 0x24) = D_003291C0;
  if (param_7 == 0) {
    func_0011FED0(param_1, local_50);
    param_7 = local_50;
  }
  uVar5 = func_0011F920(param_1);
  if ((*(unsigned short *)(param_1 + 0x20) & 0x201) != 0) {
    D_00329250++;
  } else {
    D_00329248++;
    if (*(int *)(D_00325314 + (unsigned)*(unsigned char *)(param_1 + 0x22) * 0x1c) != 0) {
      if (D_00329330 == 0 && (*(unsigned short *)(param_1 + 0x20) & 0x804) != 0) {
        if (!((*(unsigned short *)(param_1 + 0x20) & 0x800) ? func_0011A930(param_1, param_7, param_4, param_5, param_6) : func_00120040(param_1, param_7, param_4, param_5, param_6))) {
          D_00329254++;
          goto done;
        }
      }
      (**(void (**)(int, char *, int))(D_00325314 + (unsigned)*(unsigned char *)(param_1 + 0x22) * 0x1c))(param_1, param_7, 0);
    }
  }
done:
  for (piVar1 = *(int **)(param_1 + 0x30); piVar1 != 0; piVar1 = (int *)piVar1[3]) {
    if ((*(unsigned char *)((char *)piVar1 + 6) & 0x10) == 0) {
      iVar2 = *piVar1;
      if ((*(unsigned char *)(iVar2 + 0x20) & 1) == 0 && *(unsigned char *)(iVar2 + 0x22) == D_003281D0) {
        *(int *)(param_2 + param_3 * 4) = iVar2;
        param_3++;
      }
    }
  }
  for (puVar3 = *(int **)(param_1 + 0x28); puVar3 != 0; puVar3 = (int *)puVar3[3]) {
    if ((*(unsigned short *)((char *)puVar3 + 6) & 0x10) == 0) {
      if ((*(unsigned short *)((char *)puVar3 + 6) & 1) == 0) {
        puVar7 = 0;
        uVar6 = *puVar3;
      } else {
        uVar6 = *puVar3;
        puVar7 = param_7;
      }
      param_3 = func_00120170(uVar6, param_2, param_3, param_4, param_5, param_6, puVar7);
    }
  }
  func_0011F960(uVar5);
  if (*(int *)(D_00325318 + (unsigned)*(unsigned char *)(param_1 + 0x22) * 0x1c) != 0) {
    (**(void (**)(int))(D_00325318 + (unsigned)*(unsigned char *)(param_1 + 0x22) * 0x1c))(param_1);
  }
  return param_3;
}
#pragma optimize("", on)
void func_00120B60(undefined4 param_1, undefined4 param_2)
{
  int func_00120750(...);
  int func_001206B0(...);
  func_00120750(param_1,param_2);
  func_001206B0();
  return;
}

void func_00120B80(undefined4 param_1, undefined4 param_2)
{
  int func_001360A0(...);
  extern undefined4 D_003292E0;
  extern undefined4 D_00329330;
  func_001360A0(param_1,param_2);
  D_003292E0 = 0;
  D_00329330 = 0;
  return;
}

void func_00120BA0(void)
{
  int func_00136360(...);
  extern undefined4 D_00329240;
  extern undefined4 D_00329244;
  extern undefined4 D_00329258;
  extern undefined4 D_00329268;
  extern undefined4 D_0032925C;
  extern undefined4 D_0032926C;
  extern undefined4 D_00329260;
  extern undefined4 D_00329270;
  extern undefined4 D_00329264;
  extern undefined4 D_00329274;
  extern undefined4 D_0032924C;
  extern undefined4 D_00329248;
  extern undefined4 D_00329250;
  extern undefined4 D_00329254;
  func_00136360();
  D_00329240 = 0;
  D_00329244 = 0;
  D_00329258 = 0;
  D_00329268 = 0;
  D_0032925C = 0;
  D_0032926C = 0;
  D_00329260 = 0;
  D_00329270 = 0;
  D_00329264 = 0;
  D_00329274 = 0;
  D_0032924C = 0;
  D_00329248 = 0;
  D_00329250 = 0;
  D_00329254 = 0;
  return;
}

void *func_00120BF0(int name)
{
    extern char D_001DF658, D_001DF650;
    int func_0013E469(...);
    int func_0011BF40(...);
    int func_0011BDD0(...);
    int func_00131C80(...);
    int func_0011B990(...);
    char *func_00116A90(...);
    short func_00135260(...);
    short func_00135270(...);
    int func_00131D60(...);
    int func_00131D10(...);
    char path[256];
    char *obj;
    int a, h, f;
    unsigned char *p;
    int i;
    func_0013E469(path, &D_001DF658, name);
    a = func_0011BF40(path, 0);
    h = func_0011BDD0(a, 0);
    func_0013E469(path, &D_001DF650, name);
    f = func_00131C80(path, 0);
    if (f == 0) {
        (*(short *)(a + 0x2a))--;
        func_0011B990(a);
        return 0;
    }
    obj = func_00116A90(0x2598, 1, 1);
    *(int *)(obj + 0x2590) = a;
    *(int *)(obj + 0x2594) = h;
    *(short *)(obj + 0x258a) = func_00135260(h);
    *(short *)(obj + 0x258c) = func_00135270(h);
    func_00131D60(f, obj, 0x2582);
    func_00131D10(f);
    p = (unsigned char *)(obj + 2);
    for (i = 0; i < 0xf0; i++) {
        unsigned short *q = (unsigned short *)p;
        q[0] = (unsigned short)((p[1] << 8) | p[0]);
        q[1] = (unsigned short)((p[3] << 8) | p[2]);
        q[2] = (unsigned short)((p[5] << 8) | p[4]);
        q[3] = (unsigned short)((p[7] << 8) | p[6]);
        q[4] = (unsigned short)((p[9] << 8) | p[8]);
        q[5] = (unsigned short)((p[11] << 8) | p[10]);
        q[6] = (unsigned short)((p[13] << 8) | p[12]);
        q[7] = (unsigned short)((p[15] << 8) | p[14]);
        q[8] = (unsigned short)((p[17] << 8) | p[16]);
        q[9] = (unsigned short)((p[19] << 8) | p[18]);
        q[10] = (unsigned short)((p[21] << 8) | p[20]);
        q[11] = (unsigned short)((p[23] << 8) | p[22]);
        q[12] = (unsigned short)((p[25] << 8) | p[24]);
        q[13] = (unsigned short)((p[27] << 8) | p[26]);
        q[14] = (unsigned short)((p[29] << 8) | p[28]);
        q[15] = (unsigned short)((p[31] << 8) | p[30]);
        q[16] = (unsigned short)((p[33] << 8) | p[32]);
        q[17] = (unsigned short)((p[35] << 8) | p[34]);
        q[18] = (unsigned short)((p[37] << 8) | p[36]);
        q[19] = (unsigned short)((p[39] << 8) | p[38]);
        p += 40;
    }
    return obj;
}

void func_00120DD0(int p){int func_0011B990(int),func_00116FB0(int);int x=*(int*)(p+0x2590);--*(short*)(x+0x2a);func_0011B990(*(volatile int*)(p+0x2590));func_00116FB0(p);}

void func_00120E00(int param_1)
{
  extern undefined4 D_0032B6F4;
  extern undefined4 D_00329390;
  D_0032B6F4 = param_1;
  D_00329390 = *(undefined4 *)(param_1 + 0x2594);
  return;
}

