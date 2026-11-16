/* 25 functions from 0x000FFA60 to 0x00100A53, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000FFA60(void) {
    extern int D_00324BA4;
    extern int D_00324BA8;
    extern int D_00324BB0;
    extern int D_00324BB4;
    D_00324BA4 = 0;
    D_00324BA8 = 0;
    D_00324BB0 = 0;
    D_00324BB4 = 0;
}

void func_000FFA80(void){extern unsigned int D_00324BA4,D_00324BB0;void func_0011C3E0(unsigned int),func_00116FB0(unsigned int);unsigned int p;while(D_00324BA4){p=*(unsigned int*)(D_00324BA4+8);func_0011C3E0(p);func_00116FB0(p);}while(D_00324BB0){p=*(unsigned int*)(D_00324BB0+8);func_0011C3E0(p);func_00116FB0(p);}}

int func_0012F120(...);
int func_001100A0(...);
int func_0012F4C0(...);
int func_0011C3E0(...);
int func_0011C3B0(...);
int func_0012E650(...);
int func_0012FE20(...);
int func_0012F2E0(...);
int func_0012E590(...);
int func_0010FF70(...);
int func_00110060(...);
int func_0012F730(...);
int func_0012F7A0(...);
int func_0012F420(...);
int func_0012F250(...);
int func_00112250(...);
int func_00069540(...);
int func_0011AFD0(...);
int func_001105E0(...);
extern int* D_00324BA4;
extern int* D_00307DF8;
extern float D_001D27B8;
extern int* D_00324BB0;
extern int* D_00307DD8;
extern int* D_00324AFC;
void func_000FFAE0(void)
{
    float matrix[16];
    float a[16];
    float b[16];
    int* node = D_00324BA4;
    func_0012F120(matrix);
    while (node != 0) {
        int* state = (int*)node[2];
        int* obj = (int*)state[3];
        node = (int*)node[0];
        float out1[15], out2[4];
        func_001100A0(obj, out1);
        func_001100A0((int*)D_00307DF8[11], out2);
        func_0012F4C0(a, out2, out1);
        int done = 1;
        float* v=(float*)state;
        if (v[26] != D_001D27B8 || v[27] != D_001D27B8 || v[28] != D_001D27B8) {
            v[20] += v[26];
            if (v[26] <= D_001D27B8) {
                if (v[20] < v[23] || v[20] == v[23]) done=0;
                else v[20]=v[23];
            } else if (v[20] < v[23]) done=0;
            else v[20]=v[23];
            v[21] += v[27];
            if (v[27] <= D_001D27B8) {
                if (v[21] < v[24] || v[21] == v[24]) done=0;
                else v[21]=v[24];
            } else if (v[21] < v[24]) done=0;
            else v[21]=v[24];
            v[22] += v[28];
            if (v[28] <= D_001D27B8) {
                if (v[22] < v[25] || v[22] == v[25]) done=0;
                else v[22]=v[25];
            } else if (v[22] < v[25]) done=0;
            else v[22]=v[25];
        }
        if (D_001D27B8 < v[35]) {
            for (int i=0;i<3;i++) {
                int x=29+i, y=32+i;
                if (v[x] <= v[y]) {
                    v[x] += v[35];
                    if (v[x] > v[y]) v[x]=v[y];
                    else done=0;
                } else {
                    v[x] -= v[35];
                    if (v[x] < v[y]) v[x]=v[y];
                    else done=0;
                }
            }
            *((unsigned char*)obj+0xd0) |= 4;
        }
        if (done) {
            func_0011C3E0(state);
            func_0011C3B0(D_00324BB0,state,state);
        }
        float mat2[16];
        func_0012E650(mat2, obj+0xc0);
        func_0012FE20(matrix,v[29],v[30],v[31]);
        func_0012F2E0(b,matrix);
        func_0012E590(mat2,obj+0xc0);
        func_0012E590(mat2,v+20);
        func_0010FF70(obj,mat2);
        if (*(int*)(state+37)) {
            func_00110060(obj,a);
            func_0012F730(*(int*)(state+37)+8,obj,a);
        }
        if (((unsigned char*)state)[0x90]) break;
    }
}

void func_00100400(undefined4 param_1, undefined2 param_2, undefined2 param_3)
{
  int func_00116070(...);
  extern undefined4 D_00324BBC;
  int iVar1;
  
  iVar1 = func_00116070(D_00324BBC,0x54);
  *(undefined4 *)(iVar1 + 0x4c) = param_1;
  *(undefined2 *)(iVar1 + 0x50) = param_2;
  *(undefined2 *)(iVar1 + 0x52) = param_3;
  return;
}

void func_00100730(undefined4 param_1)
{
  int func_00110480(...);
  extern undefined4 D_00324968;
  func_00110480(*(undefined4 *)(D_00324968 + 0xe0),param_1,0);
  return;
}

void func_00100750(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324D34;
  if (D_001E5EC8 != '\0') {
    D_00324D34 = param_1;
  }
  return;
}

void func_00100770(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324D38;
  if (D_001E5EC8 != '\0') {
    D_00324D38 = param_1;
  }
  return;
}

void func_00100790(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324D3C;
  if (D_001E5EC8 != '\0') {
    D_00324D3C = param_1;
  }
  return;
}

void func_001007B0(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324D40;
  if (D_001E5EC8 != '\0') {
    D_00324D40 = param_1;
  }
  return;
}

void func_001007D0(unsigned char param_1) {
    extern unsigned char D_001E5EC8;
    extern unsigned char D_00324D44;
    if (D_001E5EC8 != 0) {
        D_00324D44 = param_1;
    }
}

void func_00100880(void){extern unsigned char D_001E5EC8,D_00324D46;extern unsigned int D_00324D00,D_00324BD4;void func_001032D0(void),func_00110760(unsigned int),func_00105270(void);if(D_001E5EC8){func_001032D0();func_00110760(D_00324D00);func_00110760(D_00324BD4);D_00324D46=0;func_00105270();}}

void func_00100990(unsigned char param_1) {
    extern unsigned char D_001E5EC8;
    extern unsigned char D_00324D46;
    if (D_001E5EC8 != 0) {
        D_00324D46 = param_1;
    }
}

void func_001009B0(int a0) {
    extern int D_00324D28;
    D_00324D28 = a0;
}

void func_00100A20(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324BD8;
  if (D_001E5EC8 != '\0') {
    D_00324BD8 = param_1;
  }
  return;
}

void func_00100A40(undefined4 param_1)
{
  extern undefined D_001E5EC8;
  extern undefined4 D_00324BC8;
  if (D_001E5EC8 != '\0') {
    D_00324BC8 = param_1;
  }
  return;
}

