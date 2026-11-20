/* 15 functions from 0x0012ADA0 to 0x0012BD3A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Chan12BB70 {
  char p0[2];
  unsigned char flags;
  char p3[9];
  int vol;
  int pan;
  char p14[0x4c];
  int v60[2];
  char p68[0x14];
  int v7c;
  unsigned char v80;
  char p81;
  unsigned char v82;
  unsigned char v83;
};

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

void func_0012B750(uint param_1)
{
  int func_00131230(...);
  extern undefined4 D_001DF724;
  int func_00131210(...);
  extern undefined4 D_001D557C;
  int func_0013E3F4(...);
  char cVar1;
  byte bVar2;
  uint uVar3;
  longdouble lVar4;
  
  cVar1 = *(char *)(param_1 + 0x81);
  uVar3 = param_1;
  switch(*(byte *)(param_1 + 0x9e) & 3) {
  case 0:
    lVar4 = (longdouble)func_00131230((float)(int)cVar1 * D_001DF724);
    func_00131210((float)(lVar4 * (longdouble)D_001D557C));
    uVar3 = func_0013E3F4();
    break;
  case 1:
    bVar2 = cVar1 * '\b';
    if (cVar1 < '\0') {
      bVar2 = cVar1 * -8 - 1;
    }
    uVar3 = (uint)bVar2;
    break;
  case 2:
  case 3:
    uVar3 = 0xff;
  }
  uVar3 = (int)(*(byte *)(param_1 + 0x83) * uVar3) >> 5 & 0xfffffffc;
  if (-1 < *(char *)(param_1 + 0x81)) {
    uVar3 = -uVar3;
  }
  *(uint *)(param_1 + 0x18) = uVar3;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 1;
  return;
}

void _func_0012B930(char *o)
{
  extern float _D_001DF724;
  extern float _D_001D557C;
  extern float _func_00131230(float);
  extern float _func_00131210(float);
  unsigned char r;
  double x;
  signed char pos = *((signed char *) (o + 0x85));
  unsigned char ph = pos & 0x1f;
  switch (((*((unsigned char *) (o + 0x9e))) >> 4) & 3)
  {
    case 0:
      if (o || _D_001D557C)
    {
      x = *((signed char *) (o + 0x81));
      goto sine;
    }
    else
    {
      x = *((signed char *) (o + 0x81));
      goto sine;
    }

    case 1:
      r = ph << 3;
      if (pos < 0)
    {
      r = 0xff - r;
    }
      *((int *) (o + 0x14)) = r;
      break;

    case 2:
      *((int *) (o + 0x14)) = 0xff;
      break;

    case 3:
      x = *((signed char *) (o + 0x81));
      sine:
    *((int *) (o + 0x14)) = (int) ((double) _func_00131210((float) (((double) _func_00131230((float) (x * _D_001DF724))) * _D_001D557C)));

      break;

  }

  *((int *) (o + 0x14)) = ((*((unsigned char *) (o + 0x87))) * (*((int *) (o + 0x14)))) >> 6;
  if ((*((signed char *) (o + 0x85))) >= 0)
  {
    if (((*((int *) (o + 0x14))) + (*((int *) (o + 0xc)))) > 0x40)
    {
      *((int *) (o + 0x14)) = 0x40 - (*((int *) (o + 0xc)));
    }
  }
  else
  {
    if (((short) ((*((short *) (o + 0xc))) - (*((short *) (o + 0x14))))) < 0)
    {
      *((int *) (o + 0x14)) = *((int *) (o + 0xc));
    }
    *((int *) (o + 0x14)) = -(*((int *) (o + 0x14)));
  }
  *((char *) (o + 0x85)) = (*((char *) (o + 0x86))) + (*((char *) (o + 0x85)));
  if ((*((signed char *) (o + 0x85))) > 0x1f)
  {
    *((char *) (o + 0x85)) -= 0x40;
  }
  *((unsigned char *) (o + 2)) |= 2;
}

void _func_0012BB70(Chan12BB70 *c, unsigned char cmd)
{
  if (cmd >= 0x10 && cmd <= 0x50) {
    c->vol = cmd - 0x10;
    c->flags |= 2;
    return;
  }
  switch (cmd >> 4) {
  case 6:
  case 8:
    c->vol -= cmd & 0xf;
    if (c->vol < 0) c->vol = 0;
    c->flags |= 2;
    return;
  case 7:
  case 9:
    c->vol += cmd & 0xf;
    if (c->vol > 0x40) c->vol = 0x40;
    c->flags |= 2;
    return;
  case 10:
    c->v82 = cmd & 0xf;
    return;
  case 11:
    c->v83 = cmd & 0xf;
    return;
  case 12:
    c->pan = (cmd & 0xf) << 4;
    c->flags |= 4;
    return;
  case 13:
    c->pan -= cmd & 0xf;
    c->flags |= 4;
    return;
  case 14:
    c->pan += cmd & 0xf;
    c->flags |= 4;
    return;
  case 15:
    if (cmd & 0xf) c->v80 = cmd << 4;
    c->v7c = c->v60[1];
    c->flags &= 0xf7;
    return;
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
extern float _D_001DF724;
extern float _D_001D557C;
float _func_00131230(float);
float _func_00131210(float);
int _func_0013E3F4(void);
