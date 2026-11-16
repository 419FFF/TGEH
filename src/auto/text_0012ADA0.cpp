/* 15 functions from 0x0012ADA0 to 0x0012BD3A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0012AE40(int, int, void *);
void _func_0012FA20(int, void *, int, void *, int);
#pragma optimize("y", off)
void _func_0012B140(int param_1, int *param_2, int param_3)
{
    volatile char local_110[0x40];
    volatile char local_d0[0xC0];
    _func_0012AE40(param_1, param_2[0], (void *)local_110);
    _func_0012AE40(param_1, param_2[1], (void *)local_d0);
    _func_0012FA20(param_3, (void *)local_110, param_2[2], (void *)local_d0, param_2[3]);
}
#pragma optimize("", on)
unsigned int _func_0012B1A0(char *p) {
 unsigned int h=0; char c=*p;
 while(c) {
   if(c >= 'A' && c <= 'Z') c += 0x20;
   h=(h<<4)+(int)c;
   unsigned int top=h & 0xf0000000;
   if(top) h=(top>>24 ^ h)&0x0fffffff;
   char *next=p+1;
   c=*next;
   p=next;
 }
 return h;
}

#pragma optimize("", on)
int func_0012B340(ushort *param_1, ushort *param_2)
{
  return (uint)*param_1 - (uint)*param_2;
}

void _func_0012B700(int p)
{
    int cur = *(int *)(p + 8);
    int end = *(int *)(p + 0x7c);
    if (cur < end) {
        cur += (unsigned int)*(unsigned char *)(p + 0x80) * 4;
        *(int *)(p + 8) = cur;
        if (cur > end) {
            *(int *)(p + 8) = end;
            *(unsigned char *)(p + 2) |= 1;
        }
    } else if (cur > end) {
        cur -= (unsigned int)*(unsigned char *)(p + 0x80) * 4;
        *(int *)(p + 8) = cur;
        if (cur < end) {
            *(int *)(p + 8) = end;
            *(unsigned char *)(p + 2) |= 1;
        }
    }
}

extern int _D_001E7EA8[];
extern int _D_001E7EAC[];
int _func_0012BC90(int a, int b)
{
    int c = _D_001E7EA8[a];
    if (b < 0 && a != 0)
        return c + ((c - _D_001E7EA8[a - 1]) * b) / 128;
    return c + ((_D_001E7EAC[a] - c) * b) / 128;
}

void func_0012BCF0(int param_1)
{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0x8f) <= *(byte *)(param_1 + 0x8e)) {
    *(int *)(param_1 + 0x14) = -*(int *)(param_1 + 0xc);
  }
  bVar1 = *(byte *)(param_1 + 0x8e) + 1;
  *(byte *)(param_1 + 0x8e) = bVar1;
  if ((uint)*(byte *)(param_1 + 0x90) + (uint)*(byte *)(param_1 + 0x8f) <= (uint)bVar1) {
    *(undefined1 *)(param_1 + 0x8e) = 0;
  }
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
  return;
}

