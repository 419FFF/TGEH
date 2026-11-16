/* 15 functions from 0x00148220 to 0x00148CF6, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0013AF30(void *);
void _func_00131D10(void *);
void _func_00116FB0(void *);
void _func_00148540(char *obj)
{
    if (obj != 0) {
        _func_0013AF30(*(void **)(obj + 0x82C));   /* obj->res    */
        _func_00131D10(*(void **)obj);             /* obj->handle */
        _func_00116FB0(*(void **)(obj + 0x824));   /* obj->buf3   */
        _func_00116FB0(*(void **)(obj + 0x8));     /* obj->buf2   */
        _func_00116FB0(*(void **)(obj + 0x4));     /* obj->buf1   */
        _func_00116FB0(obj);                       /* the object  */
    }
}

int _func_00148590(...);
unsigned int _func_0013AF50(...);
void _func_0013AF70(...);
void* _func_00116A90(...);
int _func_00131EB0(...);
unsigned char _func_001486F0(void* a, void* b) { return _func_00148590(a,b) != 0; }

uint func_00148710(undefined4 param_1, undefined4 param_2)
{
  int func_00148590(...);
  int iVar1;
  
  iVar1 = func_00148590(param_1,param_2);
  if (iVar1 != 0) {
    return *(uint *)(iVar1 + 0xc) & 0x7fffffff;
  }
  return 0;
}

void* _func_00148740(unsigned int* p, void* q) {
 _func_0013AF50(p[0x20b]);
 int* d=(int*)_func_00148590(p,q);
 if (!d) { _func_00148590(p,q); _func_0013AF70(p[0x20b]); return 0; }
 int* r=(int*)_func_00116A90(0x14,1,1);
 r[0]=(int)d; r[1]=(int)p; r[3]=0;
 unsigned int n=d[3];
 if ((int)n<0) { n &= 0x7fffffff; if(n>0x20000)n=0x20000; r[2]=(int)_func_00116A90(n,1,1); }
 _func_00131EB0(p[0],d[2],0);
 r[4]=d[2];
 _func_0013AF70(p[0x20b]);
 return r;
}

undefined4 func_00148AE0(int param_1)
{
  return *(undefined4 *)(param_1 + 0xc);
}

unsigned char _func_00148AF0(unsigned int* p) { return p[3] >= (*(unsigned int*)(p[0]+12)&0x7fffffff); }

void func_00148B10(int param_1)
{
  int func_00116FB0(...);
  func_00116FB0(*(undefined4 *)(param_1 + 8));
  func_00116FB0(param_1);
  return;
}

