/* 3 functions from 0x0012D240 to 0x0012DFC4, found by Ghidra. */
#include "common.h"

struct Cell { int a; int b; };
struct Row { int a; Cell *cells; };
struct Sub { char pad[0x18]; int tex; char pad2[0x1c]; };
struct Blk { char pad[0x18]; unsigned int n; Sub *subs; char pad2[0x130 - 0x20]; };
struct Hdr {
  Row *rows; Blk *blks; char pad[0x10]; short ncols; char pad2[6]; unsigned int nrows;
  short nblks; unsigned char fl; unsigned char fl2;
};

Hdr * __cdecl _func_0012DE60(int f)
{
  int _func_00126180(...), _func_00139FC0(...);
  Hdr *p;
  unsigned int i, j;
  p = (Hdr *)_func_00126180(f);
  p->rows = (Row *)_func_00126180(f);
  for (i = 0; i < p->nrows; i++) {
    p->rows[i].cells = (Cell *)_func_00126180(f);
    for (j = 0; j < (unsigned int)p->ncols; j++)
      p->rows[i].cells[j].b = _func_00126180(f);
  }
  p->blks = (Blk *)_func_00126180(f);
  for (i = 0; i < (unsigned int)p->nblks; i++)
    p->blks[i].subs = (Sub *)_func_00126180(f);
  for (i = 0; i < (unsigned int)p->nblks; i++) {
    for (j = 0; j < p->blks[i].n; j++) {
      if (p->blks[i].subs[j].tex)
        p->blks[i].subs[j].tex = _func_00139FC0(f);
    }
  }
  *(unsigned short *)&p->fl = (p->fl & 1) | 2;
  return p;
}

int __cdecl _func_0012DF90(int param_1)
{
    extern int _D_00331B24;
    int i;
    int value = 0;
    for (i = param_1 - 1; i >= 0; --i)
        value = value * 0x100 + *(unsigned char *)(_D_00331B24 + i);
    _D_00331B24 += param_1;
    return value;
}
