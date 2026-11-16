/* 21 functions from 0x0009C590 to 0x0009D51A, found by Ghidra. */
#include "common.h"

int func_0009CAA0(int param_1,int param_2)
{
 int func_0009C510(...),func_0009C590(...),func_0011B4F0(...);
 char work[512]; int object; int *s; int i,n;
 func_0009C510(param_2,work,work+256); object=param_1;
 if(!object)object=func_0009C590(work);
 s=*(int **)(object+0x1c); n=s[3]; i=0;
 while(i<n) { if(!func_0011B4F0(*(int *)((char *)s[4]+i*0x34),work+0x10c)) return (int)((char *)s[4]+i*0x34); ++i; }
 return 0;
}

int func_0009CB40(int param_1,int param_2)
{
 int func_0009C510(...),func_0009C590(...),func_0011B4F0(...);
 char work[512]; int object; int *s; int i,n;
 func_0009C510(param_2,work+0x10,work+0x110); object=param_1;
 if(!object)object=func_0009C590(work+0x10);
 s=*(int **)(object+0x1c); n=s[5]; i=0;
 while(i<n) { if(!func_0011B4F0(*(int *)((char *)s[6]+i*0x34),work+0x110)) return *(int *)(object+0x28)+i*0x40; ++i; }
 return 0;
}

void func_0009CBE0(void) {
    int func_0009C590(...);
    func_0009C590();
}

int func_0009CBF0(int param_1, int param_2)
{
    int func_0009C510(...);
    int func_0009C590(...);
    int func_0011B4F0(...);
    unsigned char scratch[0x200];
    int object;
    int *entries;
    int count;
    int i;
    func_0009C510(param_2, scratch, scratch + 0x100);
    object = param_1;
    if (!object) object = func_0009C590(scratch);
    entries = *(int **)(object + 0x1c);
    count = entries[7];
    for (i = 0; i < count; ++i) {
        if (!func_0011B4F0(*(int *)((char *)entries[8] + i * 0x10), scratch + 0x10c))
            return (int)((char *)entries[8] + i * 0x10);
    }
    return 0;
}

void func_0009D3E0(int p)
{
  int func_0009D2B0(...);
  unsigned short flags = *(unsigned short *)(p + 0x10);
  if ((flags & 2) == 0) {
    flags |= 2;
    *(unsigned short *)(p + 0x10) = flags;
    func_0009D2B0(p);
  }
}

void func_0009D500(int param_1)
{
 int func_0009D400(...);
 unsigned char *p=(unsigned char *)(param_1+0x10);
 if ((*p & 0x40)==0) { func_0009D400(param_1); *p=(unsigned char)(*p|0x40); }
}

