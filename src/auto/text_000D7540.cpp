/* 20 functions from 0x000D7540 to 0x000D84FA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct E_001E5488 { unsigned char a, b; short x, y; unsigned char z, pad; };
extern int D_001E54E8;
extern int D_0031E508;
extern unsigned char D_001E53A8[];
void func_000D7870(signed char *p){if(p){int i=(((p[1]+p[0]*6)*0x10+p[2])*0xc+p[3])*0xc;*(int*)(D_0031E508+i+4)=0;*(int*)(p+8)=1;}}

int func_000D79D0(signed char *a,signed char *b,int value){int x=(int)a[0];int y=(int)a[1];int z=(int)a[2];int w=(int)a[3];int i=(((y+x*6)*16+z)*12+w)*12;int *base=(int*)D_0031E508;int *slot=(int*)((char*)base+i+4);if(*slot==value)*slot=0;if(b[0]==1&&b[1]==5&&b[3]==11&&b[2]>=9&&b[2]<=10){*(char*)base=1;return 1;}x=(int)b[0];y=(int)b[1];z=(int)b[2];w=(int)b[3];i=(((y+x*6)*16+z)*12+w)*12;*(int*)((char*)base+i+4)=value;return *(char*)base;}

void func_000D7C70(void){extern void func_000688D0(...); extern void func_000D7540(...); int *s=(int*)D_0031E508; signed char r=*(signed char*)((char*)s+0xd805),c=*(signed char*)((char*)s+0xd804); char b=D_001E53A8[c+r*4]; int a[4]={0x43a00000,0x43700000,0x44200000,0x43f00000};func_000688D0();func_000D7540((char*)s+0xdaa4+b*0x14,&a[0],&a[2],1,0,0);}

void func_000D7CF0(void) {
    extern E_001E5488 D_001E5488[]; extern char D_001DB1F4;
    int func_001031C0(...); int func_000688D0(...); int func_00103130(...); int func_00103990(...); int func_00102E80(...);
    void func_000D7540(...);
    char *g = (char *)D_0031E508;
    bool done = false;
    int h = func_001031C0(*(int *)(g + 0xefec), &D_001DB1F4);
    unsigned int sz[2]; float pos[2]; volatile int t;
    func_000688D0();
    if (D_001E5488[0].a != 0xff) {
        E_001E5488 *e = D_001E5488;
        do {
            if ((unsigned char)g[0xd804] == e->a && (unsigned char)g[0xd805] == e->b) {
                sz[0] = 0x43a00000; sz[1] = 0x43a00000;
                t = e->x; pos[0] = (float)t;
                t = e->y; pos[1] = (float)t;
                func_000D7540(g + 0xe8a0, pos, sz, 4, 5, e->z);
                if ((char)func_00103130(h)) func_00103990(h, 1);
                done = true;
            }
        } while ((++e)->a != 0xff);
        if (done) return;
    }
    func_00102E80(h);
}

void func_000D7DE0(void)
{
 extern int D_0031E508;
 int func_000688D0(...),func_000D7540(...);
 int p=D_0031E508;
 unsigned int local[4];
 local[0]=0x44200000;
 local[1]=0x41f00000;
 local[2]=0x43a00000;
 func_000688D0();
 if(*(unsigned char *)(p+0xd805)==0) {
  local[3]=0x42520000;
  func_000D7540(p+0xdcc0,&local[2],&local[0],4,5,0);
 }
}

#pragma optimize("y", off)
void func_000D7E40(void)
{
    extern int D_0031E508;
    extern float D_001D313C;
    int func_000688D0(...);
    int func_000D7540(...);
    int object = D_0031E508;
    float coords[4];
    int i;
    coords[0] = 40;
    coords[1] = 56;
    coords[2] = *(float *)(object + 0xefe4) * D_001D313C;
    coords[3] = *(float *)(object + 0xefe8) * D_001D313C;
    func_000688D0();
    i = 0;
    while (i < *(int *)(object + 0xdaa0)) {
        func_000D7540(object + 0xd80c, coords + 2, coords, 4, 5, 0);
        coords[0] = coords[0] + D_001D313C;
        i = i + 1;
    }
}
#pragma optimize("", on)
unsigned char func_000D7FE0(int *p,int *q){int *x=&D_001E54E8;if(q[1]!=20){while(*x!=-1){if(*x++==q[1])goto done;}if(*p==0)return 1;}done:return 0;}

void func_000D8370(void)
{
  int func_000B5650(...);
  int func_000D7C70(...);
  int func_000D7B60(...);
  int func_000D7790(...);
  int func_000D7CF0(...);
  int func_000D78C0(...);
  int func_000D7A80(...);
  int func_000D7EE0(...);
  int func_000D7DE0(...);
  int func_000688D0(...);
  char cVar1;
  
  cVar1 = func_000B5650(6);
  if (cVar1 != '\0') {
    func_000D7C70();
    func_000D7B60();
    func_000D7790();
    func_000D7CF0();
    func_000D78C0();
    func_000D7A80();
    func_000D7EE0();
    func_000D7DE0();
    func_000688D0();
    return;
  }
  return;
}

void func_000D83B0(void)
{
  extern undefined4 D_003080AC;
  int func_000D7E40(...);
  if (D_003080AC != 2) {
    func_000D7E40();
    return;
  }
  return;
}

void func_000D83C0(unsigned int *p)
{
 int func_000D72B0(...),func_000D79D0(...);
 if(p[2]==4) func_000D72B0(p,p+1,0xffffffff,0);
 else if(p[2]==5) func_000D72B0(p,p+1,1,0);
 func_000D79D0(p,p+1,1);
 p[0]=p[1];
 p[2]=2;
}

char _func_000D8410(char *param_1, char param_2)
{
    int *func_000D72B0(...);
    char func_000D74D0(...);
    int func_000D7340(...);
    void func_000D83C0(...);
    char a[4];
    int *piVar2;
    int iVar3;
    a[0] = param_1[0]; a[1] = param_1[1]; a[2] = param_1[2]; a[3] = param_1[3];
    if (param_2 == 2) {
        piVar2 = func_000D72B0(a, &param_2, -1, 0);
        if (piVar2[1] != 0x14) {
            if (func_000D74D0(piVar2) == 0 && *piVar2 == 0) {
                iVar3 = func_000D7340(a);
                if (iVar3 != 0) {
                    *(int *)(iVar3 + 8) = 4;
                    func_000D83C0(iVar3);
                    return 1;
                }
            }
        }
    } else if (param_2 == 3) {
        piVar2 = func_000D72B0(a, &param_2, 1, 0);
        if (piVar2[1] != 0x14) {
            if (func_000D74D0(piVar2) == 0 && *piVar2 == 0) {
                iVar3 = func_000D7340(a);
                if (iVar3 != 0) {
                    *(int *)(iVar3 + 8) = 5;
                    func_000D83C0(iVar3);
                    return 1;
                }
            }
        }
    }
    return 0;
}

