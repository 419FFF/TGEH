/* 7 functions from 0x000BE260 to 0x000BF1F7, found by Ghidra. */
#include "common.h"

extern int D_00313B60, D_00314DB8, D_00314DBC;
extern void func_0011FED0(int, void*);
extern int func_0011BDD0(int, int);
extern void func_00133F30(void*);
#pragma optimize("y", off)
void func_000BE260(void) {
    unsigned char buffer[0x234];
    int result[2];
    func_0011FED0(D_00313B60, result);
    if (D_00314DB8 == 0) return;
    int local[21] = {0};
    local[0]=1; local[1]=1; local[2]=func_0011BDD0(D_00314DBC,0);
    local[2]=2; local[3]=2; local[8]=2; local[9]=2; local[10]=0; local[11]=0; local[12]=0; local[13]=0; local[14]=0;
    func_00133F30(local);
}

void __cdecl _func_000BEB30(void) { extern char _D_001D9794[]; extern int _D_003080AC; extern int _D_00314D90; extern float _D_001D32C4; extern float _D_001D27B0; extern void __cdecl _func_0009C590(void*); extern void __cdecl _func_000A2780(int,int,float,int); _func_0009C590(_D_001D9794); if (_D_003080AC != 2) { int *p=(int *)_D_00314D90; int *q=*(int **)(p[0x110/4]); double v=(double)*(int *)((char *)q+0xfc)*(double)_D_001D32C4; _func_000A2780(0x33,1,(float)((double)_D_001D27B0-v),(int)q); } }

#pragma optimize("y", on)
void __cdecl _func_000BEC50(void) { extern int _D_00314D98[]; extern float _D_00314DC0[]; extern float _D_001D5414; extern float _D_001D27B8; extern void __cdecl _func_00088A50(int,float,int); int i=0; do { int p=*(int *)((char *)_D_00314D98+i); if(p){ double f=(double)*(float *)((char *)_D_00314DC0+i)-(double)_D_001D5414; *(float *)((char *)_D_00314DC0+i)=(float)f; if(f<=(double)_D_001D27B8){ _func_00088A50(p,(float)f,1); } else { _func_00088A50(p,1.0f,1); *(unsigned char *)(p+0x20)|=1; *(int *)((char *)_D_00314D98+i)=0; } } i+=4; } while(i<0x20); }

void func_000BF130(void)
{
 extern int D_00314D90;
 int *p = (int *)(*(int *)(D_00314D90 + 0x110) + 8);
 int n = 10;
 do {
  int *q = p - 1;
  int a = *q;
  unsigned char f = *(unsigned char *)(*(int *)(a + 0x2c) + 0x20);
  *(int *)(a + 0x110) = ((f & 1) ? 0 : 10);
  a = p[0]; f = *(unsigned char *)(*(int *)(a + 0x2c) + 0x20); *(int *)(a + 0x110) = ((f & 1) ? 0 : 10);
  a = p[1]; f = *(unsigned char *)(*(int *)(a + 0x2c) + 0x20); *(int *)(a + 0x110) = ((f & 1) ? 0 : 10);
  a = p[2]; f = *(unsigned char *)(*(int *)(a + 0x2c) + 0x20); *(int *)(a + 0x110) = ((f & 1) ? 0 : 10);
  a = p[3]; f = *(unsigned char *)(*(int *)(a + 0x2c) + 0x20); *(int *)(a + 0x110) = ((f & 1) ? 0 : 10);
  p += 4;
  --n;
  a = *p; f = *(unsigned char *)(*(int *)(a + 0x2c) + 0x20); *(int *)(a + 0x110) = ((f & 1) ? 0 : 10);
  p += 2;
 } while (n);
}

#pragma optimize("", on)
extern int D_00314D98;
extern int D_00314DC0;
extern int D_00314D9C;
extern int D_00314DC4;
extern int D_00314DA0;
extern int D_00314DC8;
extern int D_00314DA4;
extern int D_00314DCC;
extern int D_00314DA8;
extern int D_00314DD0;
extern int D_00314DAC;
extern int D_00314DD4;
extern int D_00314DB0;
extern int D_00314DD8;
extern int D_00314DB4;
extern int D_00314DDC;
