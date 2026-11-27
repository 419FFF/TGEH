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

void _func_0012B1F0(unsigned char *param_1, int param_2)
{
  unsigned short local_c;
  unsigned int local_10;
  unsigned int *local_14;
  short *psVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char bVar6;
  unsigned int uVar7;
  unsigned char cVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned int bits;

  pbVar4 = param_1;
  bVar2 = param_1[1];
  bVar3 = *param_1;
  cVar8 = bVar2 >> 7;
  pbVar5 = param_1 + 1;
  pbVar5++;
  bVar6 = bVar2 & 0x7f;
  if (cVar8) {
    local_c = *(unsigned short *)pbVar5;
    pbVar5 += 2;
  }
  local_14 = (unsigned int *)(pbVar5 + bVar6 * 2);
  if (((int)local_14 - (int)pbVar4 & 3U) != 0) {
    local_14 = (unsigned int *)((int)local_14 + 2);
  }
  if (bVar6 <= 2) {
    local_10 = 1;
    uVar7 = 1;
  }
  else if (bVar6 <= 4) {
    local_10 = 3;
    uVar7 = 2;
  }
  else if (bVar6 <= 0x10) {
    local_10 = 0xf;
    uVar7 = 4;
  }
  uVar10 = (unsigned int)bVar3 << 2;
  iVar11 = 0;
  uVar9 = 0;
  if (uVar10 > 0) {
    do {
      if ((cVar8 == 0) || ((uVar9 & 3) != 3)) {
        if (iVar11 == 0) {
          bits = *local_14;
          local_14 = local_14 + 1;
          iVar11 = 0x20;
        }
        *(unsigned short *)(param_2 + uVar9 * 2) = *(unsigned short *)(pbVar5 + (bits & local_10) * 2);
        iVar11 = iVar11 - uVar7;
        bits = bits >> uVar7;
      }
      else {
        *(unsigned short *)(param_2 + uVar9 * 2) = local_c;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar10);
  }
  iVar11 = 0;
  uVar7 = 0;
  if (uVar10 > 0) {
    do {
      if ((cVar8 == 0) || ((uVar7 & 3) != 3)) {
        if (iVar11 == 0) {
          bits = *local_14;
          local_14 = local_14 + 1;
          iVar11 = 0x20;
        }
        iVar11 = iVar11 - 4;
        psVar1 = (short *)(param_2 + uVar7 * 2);
        *psVar1 = *psVar1 + (bits & 0xf);
        bits = bits >> 4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar10);
  }
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
  int __ftol2(...);
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
    uVar3 = __ftol2();
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

void func_0012B800(int param_1, int param_2)
{
  extern float D_001DF728, D_001D54D4;
  float func_00131230(float);
  int v;
  switch (*(unsigned char *)(param_2 + 0x12a)) {
  case 0:
    v = (int)((double)func_00131230((float)((double)*(int *)(param_1 + 0x58) * D_001DF728)) * D_001D54D4);
    break;
  case 1:
    v = (((*(int *)(param_1 + 0x58) >= 0x80) - 1) & 0x80) - 0x40;
    break;
  case 2:
    v = (0x80 - (*(int *)(param_1 + 0x58) + 0x80) % 256) >> 1;
    break;
  case 3:
    v = (0x80 - (0x180 - *(int *)(param_1 + 0x58)) % 256) >> 1;
    break;
  default:
    v = param_2;
    break;
  }
  v = *(unsigned char *)(param_2 + 0x12c) * v;
  if (*(unsigned char *)(param_2 + 0x12b) != 0)
    v = (*(int *)(param_1 + 0x5c) * v) / *(unsigned char *)(param_2 + 0x12b);
  int n = *(int *)(param_1 + 0x5c) + 1;
  *(int *)(param_1 + 0x18) += v >> 6;
  *(int *)(param_1 + 0x5c) = n;
  if (n > *(unsigned char *)(param_2 + 0x12b))
    *(int *)(param_1 + 0x5c) = *(unsigned char *)(param_2 + 0x12b);
  int b = *(int *)(param_1 + 0x58);
  b += *(unsigned char *)(param_2 + 0x12d);
  *(int *)(param_1 + 0x58) = b;
  if (b > 0xff)
    *(int *)(param_1 + 0x58) = b - 0x100;
  *(unsigned char *)(param_1 + 2) |= 1;
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

void _func_0012BA40(int param_1, int *param_2, int *param_3, unsigned char param_4, int param_5, int param_6, unsigned char param_7, unsigned char param_8, unsigned char param_9, unsigned int *param_10, int *param_11, unsigned char *param_12, int *param_13, unsigned char param_14)
{
  int iVar2;
  unsigned short *t = (unsigned short *)param_6;

  if (*param_2 < param_5) {
    if ((unsigned int)*param_3 == t[*param_2 * 2]) {
      if (((param_4 & 4) != 0) && (*param_2 == param_7)) {
        *param_2 = (unsigned int)param_8;
        *param_3 = t[param_8 * 2];
      }
      {
        unsigned int a0 = t[*param_2 * 2];
        unsigned int a2 = t[*param_2 * 2 + 1];
        unsigned int a4 = t[*param_2 * 2 + 2];
        unsigned int a6 = t[*param_2 * 2 + 3];
        int lo = a2 << 16;
        int hi = a6 << 16;
        if (*param_2 == param_5 - 1) {
          *param_10 = a2;
          *param_12 = 1;
          *(unsigned char *)(param_1 + 2) |= param_14;
          return;
        }
        if ((((param_4 & 2) != 0) && (*param_2 == param_9)) && (*(char *)(param_1 + 0x61) == '\0')) {
          *param_10 = a2;
          *(unsigned char *)(param_1 + 2) |= param_14;
          return;
        }
        iVar2 = a4 - a0;
        if (iVar2 == 0) {
          *param_13 = 0;
          *param_11 = lo;
          (*param_2)++;
        }
        else {
          *param_13 = (hi - lo) / iVar2;
          *param_11 = lo;
          (*param_2)++;
        }
      }
    }
    else {
      *param_11 = *param_11 + *param_13;
    }
  }
  *param_10 = (int)*(short *)((int)param_11 + 2);
  (*param_3)++;
  *(unsigned char *)(param_1 + 2) |= param_14;
  return;
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
int __ftol2(void);
