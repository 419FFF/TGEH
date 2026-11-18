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

int func_00100230(int key){extern int* D_00324BA4;extern int* D_00324BB0;int *p=D_00324BA4;while(p){int *v=(int*)p[2];if(v[3]==key)return (int)v;p=(int*)p[0];}p=D_00324BB0;while(p){int *v=(int*)p[2];if(v[3]==key)return (int)v;p=(int*)p[0];}return 0;}

int func_00100340(int key,int a,int *xyz,int d,unsigned char flag){extern int* D_00324BA4;extern int* D_00324BB0;extern int D_00307D04;int func_00116800(...),func_00116A90(...),func_001100D0(...),func_00116820(...),func_0011C3E0(...),func_0011C3B0(...);int *p;int obj=0;for(p=D_00324BA4;p;p=(int*)p[0]){obj=p[2];if(*(int*)(obj+0xc)==key)goto found;}for(p=D_00324BB0;p;p=(int*)p[0]){obj=p[2];if(*(int*)(obj+0xc)==key)goto found;}func_00116800(D_00307D04);obj=func_00116A90(0xa0,1,1);*(int*)(obj+0xc)=key;func_001100D0(key,obj+0x10);func_00116820();goto setfields;found:func_0011C3E0(obj);setfields:func_0011C3B0(&D_00324BA4,obj,obj);*(unsigned int*)(obj+0x80)=xyz[0];*(unsigned int*)(obj+0x84)=xyz[1];*(unsigned int*)(obj+0x88)=xyz[2];*(unsigned int*)(obj+0x8c)=d;*(unsigned char*)(obj+0x90)=flag;*(unsigned int*)(obj+0x94)=a;return obj;}

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

#pragma optimize("y", off)
unsigned char func_00100430(int a,int b){int func_0011BDD0(...);float func_001165C0(...);extern float D_001D314C;int func_00129C70(...);extern int D_00326898;int func_0012F120(...);int func_001313C0(...);int func_0013BB50(...);int manager=func_0011BDD0(*(int*)(b+0xe0),0);int item=*(int*)(manager+8)+*(int*)(a+0x4c)*0x30;double value=(double)func_001165C0(a)*(double)D_001D314C;unsigned int id=*(unsigned short*)(a+0x52);func_00129C70(*(int*)(item+4),id,((int*)&D_00326898)[id]);char temp[32];func_0012F120(temp);unsigned int slot=*(unsigned short*)(a+0x50);float vals[11];vals[slot]=(float)value;int n=func_001313C0((float)value);vals[slot]=vals[slot]-(float)n;func_0013BB50(*(int*)(*(int*)(item+4)+8+id*4),temp);short* count=(short*)(*(int*)(b+0xe0)+0x2a);--*count;return 1;}
#pragma optimize("", on)
void func_001004F0(void){extern int D_00324BC0;extern int D_00324BBC;int func_00115D60(...);int local[6];if(D_00324BC0==0){local[1]=0;local[2]=(int)func_00100430;local[3]=0;local[4]=0;local[5]=0;D_00324BBC=func_00115D60(local);}++D_00324BC0;}

#pragma optimize("y", off)
void func_001006C0(int p){int func_00110060(...);int func_001100A0(...);extern int D_00313B60;int func_0012E650(...);int func_001105E0(...);char buffer[48];int* out;int v[3];func_00110060(p,buffer);func_001100A0(D_00313B60,&out);v[0]=out[12];v[1]=out[13];v[2]=out[14];func_0012E650(v,p+0xc0);func_001105E0(p,buffer,0);}
#pragma optimize("", on)
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

void func_001007F0(void){extern unsigned char D_001E5EC8;extern int D_00324D2C;extern unsigned char D_00324D46;extern int D_00324D30,D_00324D14,D_00324D18,D_00324D1C,D_00324D20,D_00326110,D_00324BD4,D_00324D00;extern int D_001D5814;int func_001051F0(...);int func_001032A0(...);int func_0010F750(...);if(D_001E5EC8){D_00324D2C=0;D_00324D46=0;D_00324D30=0x3f800000;D_00324D14=0x3f800000;D_00324D18=0x3f800000;D_00324D1C=0x3f800000;D_00324D20=0x3f800000;func_001051F0();func_001032A0();D_00324BD4=func_0010F750(&D_001D5814,D_00326110,0xe0);D_00324D00=func_0010F750(&D_001D5814,D_00326110,0xe0);}}

void func_00100880(void){extern unsigned char D_001E5EC8,D_00324D46;extern unsigned int D_00324D00,D_00324BD4;void func_001032D0(void),func_00110760(unsigned int),func_00105270(void);if(D_001E5EC8){func_001032D0();func_00110760(D_00324D00);func_00110760(D_00324BD4);D_00324D46=0;func_00105270();}}

extern int _D_00324D2C;
extern char _D_001E5EC8;
extern int _D_00324BD4;
extern char _D_00324D46;
extern int _D_00324D3C;
extern int _D_00324D40;
extern char _D_001E5ECB;
extern int _D_00324BE8;
int _func_00110060(...);
int _func_001105E0(...);
int _func_001039C0(...);
int _func_00104D10(...);
int _func_001275D0(...);
void _func_001008C0(void)
{
    __declspec(align(16)) int a[16];
    __declspec(align(16)) int b[16];
    _D_00324D2C++;
    if (_D_001E5EC8 && _D_00324BD4) {
        if (!_D_00324D46) {
            _func_00110060(_D_00324D3C, a);
            if (_D_00324D40) {
                _func_00110060(_D_00324D40, b);
                a[12] = b[12]; a[13] = b[13]; a[14] = b[14]; a[15] = b[15];
            }
            _func_001105E0(_D_00324BD4, a, 0);
        }
        _func_001039C0();
        _func_00104D10();
        if (_D_001E5ECB && _D_00324BE8)
            _func_001275D0(_D_00324BE8);
    }
}

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

void func_001009C0(char p) { extern char D_001E5EC8; extern float D_00324D30,D_001D4F8C,D_001D27B8,D_001D27B0; if(D_001E5EC8){ if(p){D_00324D30-=D_001D4F8C;if(D_00324D30<D_001D27B8)D_00324D30=0.0f;}else{D_00324D30+=D_001D4F8C;if(D_00324D30>D_001D27B0)D_00324D30=1.0f;}}}

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
extern int _func_00116800(unsigned int);
extern int _func_00116A90(unsigned int, int, int);
extern void _func_001100D0(int, unsigned int);
extern void _func_00116820();
extern void _func_0011C3E0(int);
extern int _func_0012E6D0(unsigned int, unsigned int, unsigned int);
extern void _func_0012EA60(unsigned int);
extern void _func_0012ECA0(unsigned int, int);
