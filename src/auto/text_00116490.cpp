/* 25 functions from 0x00116490 to 0x0011745B, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct HNode { HNode *next; HNode *prev; unsigned int addr; unsigned int size; int unk10; };
struct HHeap {
    unsigned int base;
    char pad04[0xb0];
    HNode *freeList;
    HNode *head;
    HNode *tail;
    HNode *head2;
    HNode *tail2;
    unsigned int used;
    int count;
    char padd0[8];
    unsigned int mark;
    int freeCount;
};
static inline HNode *HAlloc(HHeap *h)
{
    HNode *p = h->freeList;
    h->freeList = p->next;
    p->next = 0;
    p->prev = 0;
    p->addr = 0;
    p->size = 0;
    p->unk10 = 0;
    h->freeCount--;
    return p;
}
static inline void HFree(HHeap *h, HNode *n)
{
    n->next = h->freeList;
    h->freeList = n;
    n->addr = 0;
    n->size = 0;
    h->freeCount++;
}
extern float _func_001161D0(void *, int);
extern void _func_00115FC0(void *, float);
void _func_00116590(void *p, unsigned int value)
{
    float f = _func_001161D0(p, 0);
    *(unsigned int *)((char *)p + 0x1c) = value;
    _func_00115FC0(p, f);
}

void func_001165C0(int param_1)
{
  int func_001161D0(...);
  func_001161D0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0);
  return;
}

void _func_001165E0(void *p)
{
    if (*(int *)((char *)p + 0x10) != 0) {
        *(float *)((char *)p + 0x20) = _func_001161D0(p, 0);
        *(int *)((char *)p + 0x10) = 0;
    }
}

void _func_00116610(void *p)
{
    void *q = *(void **)((char *)*(void **)((char *)p + 4) + 8);
    if (*(int *)((char *)q + 0x10) != 0) {
        *(float *)((char *)q + 0x20) = _func_001161D0(q, 0);
        *(int *)((char *)q + 0x10) = 0;
    }
}

void _func_00116640(int x){extern int _func_00116A90(int,int,int); int* s=(int*)x; unsigned int v=s[2]; int n=5000; if(v<(unsigned)n)n=v; int old=s[0xdc/4];old+=n;s[0xdc/4]=old;int* p=(int*)_func_00116A90(n*20,1,1);int i=n-1, b=0; if(i>0){int* q=p;b=i;do{--i; q[0]=(int)(q+5);q+=5;}while(i);}p[b*5]=0;int* node=(int*)s[0xb4/4];while(*node)node=(int*)*node;*node=(int)p;int k=s[3];s[5+k]=n;s[25+k]=(int)p;s[3]=k+1;}

void _func_001166D0(int* param_1, int* param_2, int param_3) {
  if (param_3 == 0) {
    param_2[1] = param_1[0xbc/4];
    param_2[0] = 0;
    if (param_1[0xbc/4] != 0) {
      *(int*)param_1[0xbc/4] = (int)param_2;
      param_1[0xbc/4] = (int)param_2;
      return;
    }
    param_1[0xb8/4] = (int)param_2;
    param_1[0xbc/4] = (int)param_2;
    return;
  }
  param_2[0] = param_3;
  param_2[1] = *(int*)(param_3+4);
  if (*(int*)(param_3+4) != 0) {
    *(int*)*(int*)(param_3+4) = (int)param_2;
    *(int*)(param_3+4) = (int)param_2;
    return;
  }
  param_1[0xb8/4] = (int)param_2;
  *(int*)(param_3+4) = (int)param_2;
}

void _func_00116740(int* param_1, int* param_2) {
  if (param_2[1] != 0) *(int*)param_2[1] = param_2[0];
  else param_1[0xb8/4] = param_2[0];
  if (param_2[0] != 0) *(int*)(param_2[0]+4) = param_2[1];
  else param_1[0xbc/4] = param_2[1];
}

void func_00116780(unsigned char p){extern int D_00326814,D_00326810; extern unsigned char D_00326818[],D_0032687C; void func_0013AF50(int); void func_0013AF70(int); int i; unsigned char c; func_0013AF50(D_00326814); i=D_00326810; c=p; i++; D_00326818[i]=c; D_0032687C=c; {int x=D_00326814; D_00326810=i; func_0013AF70(x);}}

void func_001167C0(void){extern int D_00326814,D_00326810; extern unsigned char D_00326817[],D_0032687C; void func_0013AF50(int); void func_0013AF70(int); func_0013AF50(D_00326814); D_00326810--; D_0032687C=D_00326817[D_00326810+1]; func_0013AF70(D_00326814);}

void _func_00116800(int value) {
  extern int __cdecl _func_0013B1E0(void);
  int* p = (int*)_func_0013B1E0();
  int index = p[0x84 / 4] + 1;
  p[0x84 / 4] = index;
  p[index + 0x88 / 4] = value;
}

void func_00116820(void)
{
  int func_0013B1E0(...);
  int iVar1;
  
  iVar1 = func_0013B1E0();
  *(int *)(iVar1 + 0x84) = *(int *)(iVar1 + 0x84) + -1;
  return;
}

int * func_00116830(int *param_1, unsigned int param_2, int param_3, unsigned int *param_4)
{
  int func_001166D0(...);
  int *piVar3;
  unsigned int uVar4;
  int *piVar2;
  unsigned int uVar1;

  piVar2 = (int *)param_1[0x2e];
  uVar4 = *param_1 + 1;
  piVar3 = (int *)0;
  if (piVar2 != (int *)0) {
    do {
      uVar1 = piVar2[2];
      if (uVar1 >= (unsigned int)param_1[0x36]) break;
      uVar1 = (piVar2[3] - ((uVar1 - 1 + param_3) & ~(param_3 - 1U))) + uVar1;
      if ((uVar1 >= param_2) && (uVar1 < uVar4)) {
        if ((*piVar2 != 0) &&
            ((*(unsigned int *)(*piVar2 + 8) < (unsigned int)param_1[0x36] &&
              (piVar3 = piVar2, uVar4 = uVar1, uVar1 == param_2)))) break;
        if (piVar3 == (int *)0) {
          piVar3 = piVar2;
          uVar4 = uVar1;
        }
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0);
  }
  if (piVar3 == (int *)0)
    return (int *)0;
  uVar4 = (piVar3[2] - 1 + param_3) & ~(param_3 - 1U);
  param_4[2] = uVar4;
  if (uVar4 != (unsigned int)piVar3[2]) {
    piVar2 = (int *)param_1[0x2d];
    param_1[0x2d] = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    param_1[0x37] = param_1[0x37] - 1;
    func_001166D0(param_1, piVar2, piVar3);
    piVar2[2] = piVar3[2];
    piVar2[3] = param_4[2] - piVar3[2];
  }
  param_4[1] = param_1[0x31];
  *param_4 = 0;
  if ((unsigned int *)param_1[0x31] == (unsigned int *)0) {
    param_1[0x30] = (int)param_4;
  } else {
    *(unsigned int *)param_1[0x31] = (unsigned int)param_4;
  }
  param_1[0x31] = (int)param_4;
  piVar3[3] = piVar3[3] + ((piVar3[2] - param_4[3]) - param_4[2]);
  piVar3[2] = param_4[3] + param_4[2];
  return piVar3;
}

int *_func_00116960(int *pool, unsigned int size, unsigned int align, int *out)
{
    extern void _func_001166D0(int *, int *, int);
    unsigned int best = pool[0] + 1;
    int *found = 0;
    int *blk = (int *)pool[0xbc / 4];
    while (blk) {
        unsigned int len = blk[3];
        unsigned int start;
        unsigned int rem;
        if ((unsigned int)blk[2] + len < (unsigned int)pool[0xd8 / 4])
            break;
        start = (blk[2] + align - 1) & ~(align - 1);
        rem = blk[2] - start + len;
        if (rem >= size && rem < best) {
            found = blk;
            best = rem;
            if (rem == size)
                break;
        }
        blk = (int *)blk[1];
    }
    if (!found)
        return 0;
    out[2] = (found[3] - size + found[2]) & ~(align - 1);
    if ((unsigned int)out[2] < (unsigned int)pool[0xd8 / 4])
        pool[0xd8 / 4] = out[2];
    out[1] = pool[0xc4 / 4];
    out[0] = 0;
    if (pool[0xc4 / 4])
        *(int *)pool[0xc4 / 4] = (int)out;
    else
        pool[0xc0 / 4] = (int)out;
    pool[0xc4 / 4] = (int)out;
    if ((unsigned int)(out[2] + size) < (unsigned int)(found[2] + found[3])) {
        int *n = (int *)pool[0xb4 / 4];
        pool[0xb4 / 4] = *n;
        n[0] = n[1] = n[2] = n[3] = n[4] = 0;
        pool[0xdc / 4]--;
        _func_001166D0(pool, n, found[0]);
        n[2] = out[2] + out[3];
        n[3] = found[3] - n[2] + found[2];
    }
    found[3] = out[2] - found[2];
    return found;
}

void _func_00116CC0(HHeap *h, HNode *n)
{
    extern void _func_001166D0(HHeap *, HNode *, HNode *);
    unsigned int addr;
    HNode *p;
    HNode *ins;
    HNode *nx;
    int i;

    h->count--;
    p = h->tail;
    h->used -= n->size;
    if (p != 0) {
        do {
            if (p->addr <= n->addr) {
                ins = p->next;
                goto found;
            }
            p = p->prev;
        } while (p != 0);
    }
    ins = h->head;
found:
    p = h->freeList;
    h->freeList = p->next;
    p->next = 0;
    p->prev = 0;
    p->addr = 0;
    p->size = 0;
    p->unk10 = 0;
    h->freeCount--;
    p->addr = n->addr;
    p->size = n->size;
    addr = n->addr;
    _func_001166D0(h, p, ins);
    if (n->prev != 0)
        n->prev->next = n->next;
    else
        h->head2 = n->next;
    if (n->next != 0)
        n->next->prev = n->prev;
    else
        h->tail2 = n->prev;
    n->next = h->freeList;
    h->freeList = n;
    n->addr = 0;
    n->size = 0;
    h->freeCount++;
    if (p->prev != 0)
        p = p->prev;
    i = 0;
    do {
        nx = p->next;
        if (nx == 0)
            break;
        if (p->addr + p->size == nx->addr) {
            p->size = nx->size + p->size;
            if (nx->prev != 0)
                nx->prev->next = nx->next;
            else
                h->head = nx->next;
            if (nx->next != 0)
                nx->next->prev = nx->prev;
            else
                h->tail = nx->prev;
            nx->next = h->freeList;
            h->freeList = nx;
            nx->addr = 0;
            nx->size = 0;
            h->freeCount++;
            nx = p;
        }
        i++;
        p = nx;
    } while (i < 3);
    if (addr >= h->mark) {
        addr = h->base;
        for (nx = h->tail; nx != 0; nx = nx->prev) {
            unsigned int e = nx->size + nx->addr;
            if (e < h->mark)
                break;
            addr = e;
        }
        h->mark = addr;
    }
}

int _func_00116E50(int p, unsigned int size, int a, int b)
{
    extern int D_00326814, D_00326810;
    extern int D_00326790[];
    extern unsigned char D_00326818[], D_0032687C;
    extern void func_0013AF50(int);
    extern void func_0013AF70(int);
    extern int *_func_0013B1E0(void);
    extern int _func_00116A90(unsigned int, int, int);
    extern void _func_00116CC0(int, int);
    if (p == 0)
        return _func_00116A90(size, a, b);
    func_0013AF50(D_00326814);
    int hdr = *(int *)(p - 4);
    int s = D_00326790[*(unsigned char *)(hdr + 0x13)];
    int *t = _func_0013B1E0();
    int k = t[0x84 / 4] + 1;
    t[0x84 / 4] = k;
    t[0x88 / 4 + k] = s;
    unsigned char c = *(unsigned char *)(hdr + 0x12);
    func_0013AF50(D_00326814);
    D_00326810++;
    D_00326818[D_00326810] = c;
    D_0032687C = c;
    func_0013AF70(D_00326814);
    int *u = _func_0013B1E0();
    int saved = u[0x80 / 4];
    u[0x80 / 4] = *(unsigned int *)(hdr + 8) >= *(unsigned int *)(s + 0xd8);
    *(int *)(s + 0xe0) = p;
    unsigned int n = *(unsigned int *)(hdr + 0xc) - *(unsigned short *)(hdr + 0x10);
    *(unsigned int *)(s + 0xe4) = n;
    if (n > size)
        *(unsigned int *)(s + 0xe4) = size;
    _func_00116CC0(s, hdr);
    int r = _func_00116A90(size, a, b);
    u[0x80 / 4] = saved;
    *(int *)(s + 0xe0) = 0;
    *(int *)(s + 0xe4) = 0;
    func_0013AF50(D_00326814);
    D_00326810--;
    D_0032687C = D_00326818[D_00326810];
    func_0013AF70(D_00326814);
    int *w = _func_0013B1E0();
    w[0x84 / 4]--;
    func_0013AF70(D_00326814);
    return r;
}

void func_00116FB0(int p){extern int D_00326814,D_00326790[]; void func_0013AF50(int); void func_0013AF70(int); void func_00116CC0(int,int); if(p){func_0013AF50(D_00326814); int q=*(int*)(p-4); func_00116CC0(D_00326790[*(unsigned char*)(q+0x13)],q); *(int*)(p-4)=0; func_0013AF70(D_00326814);}}

int _func_00117000(char param_1)
{
    extern int _D_00326814;
    extern int _D_00326880;
    extern int _D_00326790;
    int _func_0013AF50(...);
    void _func_0013AF70(...);
    int _func_00136B30(...);
    int sum = 0;
    _func_0013AF50(_D_00326814);
    for (unsigned int i = 0; i < 0x80; i += 0x10) {
        int *p = *(int **)((char *)&_D_00326790 + i);
        if (p != 0) { sum += p[0x32]; if (p != (int *)_D_00326880) sum -= *p; }
        p = *(int **)((char *)&_D_00326790 + i + 4);
        if (p != 0) { sum += p[0x32]; if (p != (int *)_D_00326880) sum -= *p; }
        p = *(int **)((char *)&_D_00326790 + i + 8);
        if (p != 0) { sum += p[0x32]; if (p != (int *)_D_00326880) sum -= *p; }
        p = *(int **)((char *)&_D_00326790 + i + 12);
        if (p != 0) { sum += p[0x32]; if (p != (int *)_D_00326880) sum -= *p; }
    }
    if (param_1) sum += _func_00136B30();
    _func_0013AF70(_D_00326814);
    return sum;
}

void func_001170B0(void)
{
  int func_0013AF50(...);
  extern undefined4 D_00326814;
  extern undefined D_00326790;
  int func_0013AF70(...);
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  func_0013AF50(D_00326814);
  uVar3 = 0;
  do {
    if ((*(int *)(((undefined *)&D_00326790) + uVar3) != 0) &&
       (piVar1 = *(int **)(*(int *)(((undefined *)&D_00326790) + uVar3) + 0xb8), piVar1 != (int *)0x0)) {
      piVar2 = (int *)*piVar1;
      while (piVar2 != (int *)0x0) {
        piVar1 = (int *)*piVar1;
        piVar2 = piVar1;
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x80);
  func_0013AF70(D_00326814);
  return;
}

extern int _D_00326814;
extern int _D_00326880;
extern int _D_00326790;
extern int _D_00326794;
extern int _D_00326798;
extern int _D_0032679C;
int _func_0013AF50(...);
int _func_0013B1E0(...);
void _func_0013AF70(...);
int _func_00136B30(...);
void _func_00117100(void) { _func_0013AF50(_D_00326814); int p=_func_0013B1E0(); volatile int *q=(volatile int *)(p+0x80); int v=*q; *q=v+1; _func_0013AF70(_D_00326814); }

void _func_00117130(void) { _func_0013AF50(_D_00326814); int p=_func_0013B1E0(); volatile int *q=(volatile int *)(p+0x80); int v=*q; *q=v-1; _func_0013AF70(_D_00326814); }

void func_00117340(int p){extern int D_00326880; extern int D_00326790[]; void func_00116FB0(int); void func_00136B20(void); D_00326790[*(int*)(p+0xe8)]=0; if(p!=D_00326880){func_00116FB0(p);return;} func_00136B20();}

void _func_00117370(int p)
{
  extern int D_00326790[32]; extern int D_00326810, D_00326814, D_00326880; extern unsigned char D_00326818[100]; extern char D_0032687C, D_00326884;
  int _func_00117160(...); int _func_0013AF00(...);
  int i;
  for (i = 0; i < 32; i++) D_00326790[i] = 0;
  D_00326880 = _func_00117160(*(int*)(p + 0x1c), *(int*)(p + 0x24), *(int*)(p + 0x20));
  for (i = 0; i < 100; i++) D_00326818[i] = 0;
  D_00326810 = 0;
  D_0032687C = 0;
  D_00326814 = _func_0013AF00();
  D_00326884 = 1;
}

