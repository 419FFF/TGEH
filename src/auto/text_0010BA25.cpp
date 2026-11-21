/* 31 functions from 0x0010BA25 to 0x0010C944, found by Ghidra. */
#include "common.h"
extern "C" __declspec(dllimport) int __stdcall XeLoadSection(int);
extern "C" __declspec(dllimport) int __stdcall XeUnloadSection(int);

#include <string.h>
union LI64 { struct { unsigned long lo; long hi; } p; long long q; };
typedef long (__stdcall *NtQueryFn)(void*, void*, unsigned long, unsigned long, unsigned long);
typedef long (__stdcall *NtSetFn)(void*, void*, unsigned long, unsigned long, unsigned long);
extern "C" NtQueryFn __imp__NtQueryInformationFile;
extern "C" NtSetFn __imp__NtSetInformationFile;
extern void __stdcall _func_0010AAD1(long);
extern void __stdcall func_0010AAA3(long);
struct XHdr { int a[5]; int magic; unsigned int size; int rest[26]; };
#pragma intrinsic(memset, memcmp)
unsigned int __readfsdword(unsigned long);
#pragma intrinsic(__readfsdword)
unsigned int func_0010BA93(void) { return *(unsigned int *)(__readfsdword(0x28) + 0x12c); }

extern "C" __declspec(dllimport) long __stdcall NtWriteFile(void*, void*, void*, void*, void*, void*, unsigned long, void*);
extern "C" __declspec(dllimport) long __stdcall NtWaitForSingleObject(void*, int, void*);
int __stdcall func_0010BB8D(void *h, void *buf, unsigned long n, unsigned long *written, unsigned long *ov)
{
    unsigned long off[2];
    unsigned long iosb[2];
    long status;
    if (written != 0) *written = 0;
    if (ov != 0) {
        off[0] = ov[2];
        off[1] = ov[3];
        ov[0] = 0x103;
        status = NtWriteFile(h, (void*)ov[4], 0, (ov[4] & 1) ? (void*)0 : (void*)ov, ov, buf, n, off);
        if ((status & 0xc0000000) == 0xc0000000 || status == 0x103) goto fail;
        if (written != 0) *written = ov[1];
        return 1;
    }
    status = NtWriteFile(h, 0, 0, 0, iosb, buf, n, 0);
    if (status == 0x103) {
        status = NtWaitForSingleObject(h, 0, 0);
        if (status < 0) goto err;
        status = iosb[0];
    }
    if (status >= 0) {
        *written = iosb[1];
        return 1;
    }
err:
    if ((status & 0xc0000000) == 0x80000000) *written = iosb[1];
fail:
    return 0;
}

#pragma optimize("s", on)
unsigned long __stdcall func_0010BCE7(void *h, long off, long *hiPtr, int method)
{
    unsigned long iosb[2];
    LI64 pos;
    unsigned long info[14];
    LI64 d;
    long status;
    unsigned long ret;
    if (hiPtr) { d.p.hi = *hiPtr; d.p.lo = off; }
    else d.q = off;
    switch (method) {
    case 0:
        pos.q = d.q;
        break;
    case 1:
        goto cur;
    case 2:
        status = __imp__NtQueryInformationFile(h, iosb, (unsigned long)info, 0x38, 0x22);
        if (status < 0) goto fail;
        pos.q = *(long long*)&info[10] + d.q;
        break;
    default:
    cur:
        status = __imp__NtQueryInformationFile(h, iosb, (unsigned long)&pos, 8, 0xe);
        if (status < 0) goto fail;
        pos.q += d.q;
        break;
    }
    if (pos.q < 0) {
        func_0010AAA3(0x83);
        goto bad;
    }
    if (hiPtr == 0 && (pos.p.hi & 0x7fffffff) != 0) {
        func_0010AAA3(0x57);
        goto bad;
    }
    status = __imp__NtSetInformationFile(h, iosb, (unsigned long)&pos, 8, 0xe);
    if (status >= 0) {
        if (hiPtr != 0) *hiPtr = pos.p.hi;
        if (pos.p.lo == 0xffffffff) func_0010AAA3(0);
        return pos.p.lo;
    }
    _func_0010AAD1(status);
    ret = 0xffffffff;
    if (hiPtr != 0) *hiPtr = ret;
    return ret;
bad:
    return 0xffffffff;
fail:
    _func_0010AAD1(status);
    return 0xffffffff;
}
#pragma optimize("", on)
typedef long (__stdcall *NtQueryFn)(void*, void*, unsigned long, unsigned long, unsigned long);
typedef long (__stdcall *NtSetFn)(void*, void*, unsigned long, unsigned long, unsigned long);
typedef long (__stdcall *NtFlushFn)(void*, void*);
extern "C" NtQueryFn __imp__NtQueryInformationFile;
extern "C" NtSetFn __imp__NtSetInformationFile;
extern void __stdcall func_0010AAA3(long);
extern NtFlushFn __imp__NtFlushBuffersFile;
extern void __stdcall _func_0010AAD1(long);
long __stdcall func_0010BEA9(void *h) {
 unsigned int io[2];
 long r=__imp__NtFlushBuffersFile(h,io);
 if(r<0) _func_0010AAD1(r);
 return r>=0;
}

int __stdcall func_0010BED0(void *h, int *out)
{
    unsigned char info[0x38];
    unsigned int io[2];
    long status;
    status = __imp__NtQueryInformationFile(h, io, (unsigned long)info, 0x38, 0x22);
    if (status < 0) {
        _func_0010AAD1(status);
        return 0;
    }
    out[0] = *(int *)(info + 0x28);
    out[1] = *(int *)(info + 0x2c);
    return 1;
}

int __stdcall func_0010BF0E(void *h,int *out){int __stdcall func_0010BED0(void*,int*);void __stdcall func_0010AAA3(unsigned int);int local[2];if(!func_0010BED0(h,local))local[0]=-1;else{if(out)*out=local[1];if(local[0]==-1)func_0010AAA3(0);}return local[0];}

#pragma optimize("s", on)
typedef long (__stdcall *NtCreateFn)(void*, unsigned long, void*, void*, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
extern "C" NtCreateFn __imp__NtCreateFile;
#pragma optimize("s", on)
unsigned int __stdcall func_0010BF49(const char *name, unsigned int access, unsigned int share, void *sa, int disp, unsigned int flags, void *tmpl)
{
  extern long __stdcall __imp__RtlInitAnsiString(void*, const char*);
  unsigned short ansi[4];
  unsigned long attr[4];
  unsigned long iosb[2];
  unsigned long handle;
  unsigned long opts;
  unsigned long status;
  unsigned int orig = access;
  int slash;

  switch (disp) {
  case 1: access = 2; break;
  case 2: access = 5; break;
  case 3: access = 1; break;
  case 4: access = 3; break;
  case 5:
    access = 4;
    if (orig & 0x40000000) break;
  default:
    _func_0010AAD1(0xc000000d);
    return 0xffffffff;
  }
  __imp__RtlInitAnsiString(ansi, name);
  if (ansi[0] > 1 && name[ansi[0] - 1] == '\\') slash = 1;
  else slash = 0;
  attr[1] = (unsigned long)ansi;
  attr[0] = 0xfffffffd;
  attr[2] = 0x40;
  opts = ((((flags >> 4 & 0x8000000 | flags & 0x20000000) >> 1 | flags & 0x8000000) >> 8 | flags & 0x10000000) >> 6 | flags & 0x2000000) >> 0xb | ~(flags >> 0x19) & 0x20;
  if (flags & 0x4000000) { opts |= 0x1000; orig |= 0x10000; }
  if ((flags & 0x2000000) == 0) opts |= 0x40;
  status = __imp__NtCreateFile(&handle, orig | 0x100080, attr, iosb, 0, flags & 0x7fa7, share, access, opts);
  if ((long)status < 0) {
    _func_0010AAD1(status);
    if (status == 0xc0000035) func_0010AAA3(0x50);
    else if (status == 0xc00000ba) func_0010AAA3(slash ? 3 : 5);
    return 0xffffffff;
  }
  func_0010AAA3(((disp == 2 && iosb[1] == 3) || (disp == 4 && iosb[1] == 1)) ? 0xb7 : 0);
  return handle;
}
void __stdcall func_0010C0D4(int a,int b){extern unsigned char __imp__XboxHDKey[];extern void __stdcall XcHMAC(void*,unsigned int,void*,unsigned int,unsigned int,unsigned int,int);XcHMAC(__imp__XboxHDKey,0x10,&a,4,0,0,b);}

#pragma optimize("sy", off)
#pragma optimize("gs", on)
int __stdcall func_0010C0F3(int hFile, int p2, unsigned int *p3, int p4) {
    void __stdcall func_0010C0D4(int, void*);
    void __stdcall func_0010EC79(void*, int, void*);
    void func_0010ECDB(void*, void*, unsigned int);
    void __stdcall func_0010ECE0(void*, void*, int, int);
    void __stdcall func_0010AAD1(int);
    extern int (__stdcall *_imp__NtReadFile)(int,int,int,int,void*,void*,unsigned int,int);
    unsigned char tmp[20], hdr[0x74], buf[512]; int io[2];
    unsigned int n, total, chunk;
    if (p2 == 0) p2 = p3[9];
    func_0010C0D4(p2, tmp);
    n = 0x88;
    if (p3[6] < n) n = p3[6];
    func_0010EC79(tmp, 0x14, hdr);
    func_0010ECDB(hdr, p3 + 5, n - 0x14);
    if (hFile != 0 && p3[6] > 0x88) {
        total = p3[6] - 0x88;
        while (total != 0) {
            int st;
            chunk = 0x200;
            if (total < chunk) chunk = total;
            st = _imp__NtReadFile(hFile, 0, 0, 0, io, buf, chunk, 0);
            if (st < 0) { func_0010AAD1(st); return 0; }
            if (io[1] != chunk) { func_0010AAD1(0xc0000011); return 0; }
            func_0010ECDB(hdr, buf, chunk);
            total -= chunk;
        }
    }
    func_0010ECE0(hdr, tmp, 0x14, p4);
    return 1;
}
typedef long (__stdcall *NtReadFn)(void*, void*, void*, void*, void*, void*, unsigned long, void*);
extern NtReadFn __imp__NtReadFile;
extern void __stdcall func_0010AAD1(long);
extern void __stdcall func_0010AAA3(long);
extern int __stdcall func_0010C0F3(int, int, int *, int *);
#pragma optimize("y", off)
int __stdcall func_0010C1D8(int h, int b, int check, int *buf) {
    int tmp[5];
    int off[2];
    int io[2];
    unsigned int size;
    long r;
    int zero = 0;
    NtReadFn rd = __imp__NtReadFile;
    off[0] = zero;
    off[1] = zero;
    r = rd((void*)h, (void*)zero, (void*)zero, (void*)zero, io, buf, 0x1c, off);
    if (r < 0) goto fail;
    if (io[1] != 0x1c) goto bad;
    size = buf[6];
    if (size > 0x88) size = 0x88;
    r = rd((void*)h, (void*)zero, (void*)zero, (void*)zero, io, buf + 7, size - 0x1c, (void*)zero);
    if (r < 0) goto fail;
    if (io[1] != size - 0x1c) {
bad:
        r = 0xc0000010;
fail:
        func_0010AAD1(r);
        return 0;
    }
    if (buf[5] != 0x46534358) {
        func_0010AAA3(0xd);
        return 0;
    }
    if (size < 0x88)
        memset((char*)buf + size, 0, 0x88 - size);
    if (check != zero) {
        if (!func_0010C0F3(h, b, buf, tmp)) return 0;
        if (memcmp(tmp, buf, 20) != 0) {
            func_0010AAA3(5);
            return 0;
        }
    }
    return 1;
}

int __stdcall func_0010C2B9(unsigned int flags, unsigned char *s1, int n1, unsigned char *s2, int n2)
{
    extern unsigned int _D_001E6330[];
    extern int _D_001E6730[];
    unsigned char c1, c2;
    unsigned int u1, u2;
    unsigned int r = 0;
    unsigned int k = ~(flags >> 12) & 1;
    unsigned int f1 = flags & 1;
    flags &= 4;
    if (s1 == 0 || s2 == 0 || n1 < -1 || n2 < -1) {
        func_0010AAA3(0x57);
        return 0;
    }
    while (n1 != 0) {
        if (n2 == 0) {
            if (*s2 == 0) goto l_b;
            return 1;
        }
        c1 = *s1;
        if (c1 == 0) {
            if (*s2 != 0) return 1;
            return _D_001E6730[r];
        }
        c2 = *s2;
        if (c2 == 0) return 3;
        u1 = _D_001E6330[c1];
        u2 = _D_001E6330[c2];
        if (k != 0) {
            if ((u1 & 0x10000) != 0) {
                if ((u2 & 0x10000) == 0) {
                    if (r == 0) r = 4;
                    r |= 1;
                    goto l_64;
                }
                if (u1 < u2) r = 7;
                else if (u2 < u1) r = 0xb;
                goto l_c1;
            }
            if ((u2 & 0x10000) == 0) goto l_83;
            if (r == 0) r = 8;
            r |= 2;
            goto l_c7;
        }
      l_83:
        if (flags != 0) {
            if ((u1 & 0x20000) != 0) goto l_64;
            if ((u2 & 0x20000) != 0) goto l_c7;
        }
        if (f1 != 0) {
            if ((u1 & 0x100000) != 0) u1 = (c1 + 0x20) | 0x80000;
            if ((u2 & 0x100000) != 0) u2 = (c2 + 0x20) | 0x80000;
        }
        if (u1 < u2) return 1;
        if (u2 < u1) return 3;
      l_c1:
        s1++; n1--;
        goto l_c7;
      l_64:
        s1++; n1--;
        continue;
      l_c7:
        s2++; n2--;
    }
    if (n2 == 0) {
      l_b:
        return _D_001E6730[r];
    }
    return (n1 == 0) * 2 + 1;
}

#pragma optimize("y", on)
int func_0010C459(void) {
    extern int D_0037C074;
    return D_0037C074;
}

int __stdcall func_0010C45F(unsigned int a, unsigned int b) { extern int D_0037C074; int __stdcall func_0010DA9F(int, int, int); unsigned int x = a; return func_0010DA9F(D_0037C074, (x >> 3) & 8, b); }

unsigned int __stdcall func_0010C47C(unsigned int p)
{
  extern int __stdcall func_0010E21A(int, int, int);
  extern int _D_0037C074;
  return (((unsigned char) func_0010E21A(_D_0037C074, 0, p)) != 0) ? (0) : (p);
}

void *__stdcall func_0010C49A(unsigned int a,unsigned int b,unsigned int c,unsigned int d) { extern void *__stdcall __imp__MmAllocateContiguousMemoryEx(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int); void __stdcall func_0010AAA3(int); unsigned int lo,hi; void*p; if(b==0xffffffff){lo=0;hi=0xffffffff;}else{lo=b;hi=a+b-1;c=0;}p=__imp__MmAllocateContiguousMemoryEx(a,lo,hi,c,d);if(!p)func_0010AAA3(8);return p;}

void *__stdcall func_0010C4DD(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e) { extern void *__stdcall __imp__MmAllocateContiguousMemoryEx(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int); void __stdcall func_0010AAA3(int);void*p=__imp__MmAllocateContiguousMemoryEx(a,b,c,d,e);if(!p)func_0010AAA3(8);return p;}

unsigned int __stdcall func_0010C510(char*name) { extern long __stdcall __imp__RtlInitAnsiString(void*,const char*);extern unsigned char __stdcall __imp__RtlEqualString(void*,void*,int);extern int D_0001011C;extern unsigned int D_00010120;void __stdcall func_0010AAA3(int);unsigned char n[8],v[8];unsigned char*p;unsigned int end;__imp__RtlInitAnsiString(n,name);p=(unsigned char*)D_00010120;end=(unsigned int)(p+D_0001011C*0x38);do{__imp__RtlInitAnsiString(v,*(char**)(p+0x14));if(__imp__RtlEqualString(n,v,1))return(unsigned int)p;p+=0x38;}while(p<(unsigned char*)end);func_0010AAA3(0x490);return 0xffffffff;}

unsigned int __stdcall func_0010C577(int p){extern void __stdcall func_0010AAD1(int);int r=XeLoadSection(p);if(r<0){func_0010AAD1(r);r=0;goto done;}r=*(int*)(p+4);done:return r;}

extern "C" __declspec(dllimport) int __stdcall XeLoadSection(int);
extern "C" __declspec(dllimport) int __stdcall XeUnloadSection(int);
int __stdcall func_0010C598(int p){extern void __stdcall func_0010AAD1(int);int r=XeUnloadSection(p);if(r<0){func_0010AAD1(r);return 0;}goto yes;yes:return 1;}

#pragma optimize("y", on)
void *__stdcall func_0010C5B6(void *arg) { return *(void **)((char *)arg + 8); }

struct C_0010C5C0{unsigned int func_0010C5C0(void);}; unsigned int C_0010C5C0::func_0010C5C0(void){extern int _ExQueryNonVolatileSetting(...);unsigned int a,b;int r=_ExQueryNonVolatileSetting(10,&a,&b,4,0);if(r>=0)return a;return 0;}

extern "C" __declspec(dllimport) long __stdcall NtAllocateVirtualMemory(char **base, unsigned long zeroBits, unsigned long *size, unsigned long type, unsigned long protect);
extern "C" __declspec(dllimport) long __stdcall NtFreeVirtualMemory(char **base, unsigned long *size, unsigned long type);
extern char D_00010000;
typedef long (__stdcall *NtAllocFn)(void*, unsigned long, void*, unsigned long, unsigned long);
extern "C" NtAllocFn __imp__NtAllocateVirtualMemory;
void *__stdcall func_0010C5E5(void *arg)
{
    unsigned int **head = (unsigned int **)((char *)arg + 0x18);
    unsigned int **list = (unsigned int **)((char *)*head + 0x4c);
    unsigned int *seg;
    unsigned int *cur;
    unsigned long reserve, commit;
    unsigned int *end;
    unsigned int *node;
    unsigned int **prev;
    unsigned int *c;

    if (*list == 0) {
        seg = *(unsigned int **)((char *)*head + 0x48);
        if (seg == 0 || seg[2] == seg[1]) {
            reserve = (unsigned long)&D_00010000;
            seg = 0;
            if (NtAllocateVirtualMemory((char **)&seg, 0, &reserve, 0x2000, 4) < 0)
                return 0;
            commit = 0x1000;
            if (NtAllocateVirtualMemory((char **)&seg, 0, &commit, 0x1000, 4) < 0) {
                NtFreeVirtualMemory((char **)&seg, &reserve, 0x8000);
                return 0;
            }
            *seg = *(unsigned int *)((char *)*head + 0x48);
            *(unsigned int **)((char *)*head + 0x48) = seg;
            seg[1] = reserve;
            seg[2] = commit;
            cur = seg + 4;
        } else {
            commit = 0x1000;
            cur = (unsigned int *)((char *)seg + seg[2]);
            if (NtAllocateVirtualMemory((char **)&cur, 0, &commit, 0x1000, 4) < 0)
                return 0;
            seg[2] += commit;
        }
        end = (unsigned int *)((char *)seg + seg[2]);
        c = cur;
        prev = (unsigned int **)((char *)*head + 0x4c);
        for (; c < end; c += 4) {
            *prev = c;
            prev = (unsigned int **)c;
        }
        *prev = 0;
        list = (unsigned int **)((char *)*head + 0x4c);
    }
    node = (unsigned int *)*list;
    *list = (unsigned int *)*node;
    return node;
}

#pragma optimize("Ob1", on)
void __stdcall func_0010C705(void *p, unsigned int *node) {
    unsigned int **head=(unsigned int **)((char *)p+0x18);
    unsigned int *old=(unsigned int *)((char *)*head+0x4c);
    *node=*old;
    *(unsigned int **)((char *)*head+0x4c)=node;
    node[1]=0;
    node[2]=0;
}
void *__stdcall func_0010C5E5(void *);
void __stdcall func_0010C726(void *p,unsigned int a,unsigned int b) {
    unsigned char *base=(unsigned char*)p;
    unsigned int *link=(unsigned int*)(base+0x38);
    unsigned int *n;
    unsigned int end=a+b;
    while ((n=(unsigned int*)*link)!=0) {
        unsigned int start=n[1], len=n[2];
        if (start > a) break;
        if (start+len == a) {
            n[2]+=b;
            if (n[2] > *(unsigned int*)(base+0x1c)) *(unsigned int*)(base+0x1c)=n[2];
            return;
        }
        link=n;
    }
    if (end > *(unsigned int*)(base+0x1c)) *(unsigned int*)(base+0x1c)=end;
}

unsigned short * __stdcall func_0010C7B9(unsigned int *param_1, unsigned short *param_2, unsigned int *param_3, unsigned short *param_4)
{
  extern long (__stdcall *__imp__NtAllocateVirtualMemory)(void*, unsigned long, void*, unsigned long, unsigned long);
  int *piVar1;
  int iVar2;
  unsigned short *puVar3;
  int iVar5;
  unsigned short *puVar6;
  unsigned int *puVar7;
  unsigned short *puVar8;
  int *piVar10;
  int *local_c;
  int *local_8;
  bool bVar11;

  iVar2 = (int)param_2;
  local_8 = 0;
  piVar1 = *(int **)(iVar2 + 0x38);
  if (piVar1 != 0) {
    local_c = (int *)(iVar2 + 0x38);
    do {
      piVar10 = piVar1;
      if (*param_3 <= (unsigned int)piVar10[2] && (param_4 == 0 || (unsigned short *)piVar10[1] == param_4)) {
        param_2 = (unsigned short *)piVar10[1];
        if (param_1[0x161] == 0)
          iVar5 = __imp__NtAllocateVirtualMemory(&param_2, 0, param_3, 0x1000, 4);
        else
          iVar5 = ((int (__stdcall *)(unsigned int *, unsigned short **, unsigned int *))param_1[0x161])(param_1, &param_2, param_3);
        puVar3 = param_2;
        if (iVar5 < 0) return 0;
        *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) - (*param_3 >> 0xc);
        if (*(int *)(iVar2 + 0x1c) == piVar10[2]) *(int *)(iVar2 + 0x1c) = 0;
        puVar8 = *(unsigned short **)(iVar2 + 0x40);
        if ((*(unsigned char *)((int)puVar8 + 5) & 0x10) != 0 && puVar8 + (unsigned int)*puVar8 * 8 == (unsigned short *)piVar10[1]) goto found;
        if (local_8 == 0) puVar8 = *(unsigned short **)(iVar2 + 0x28);
        else puVar8 = (unsigned short *)(local_8[2] + local_8[1]);
        if ((*(unsigned char *)((int)puVar8 + 5) & 0x10) != 0) goto found;
        goto next;
      }
      piVar1 = (int *)*piVar10;
      local_c = piVar10;
      local_8 = piVar10;
    } while (piVar1 != 0);
  }
  return 0;
next:
  param_4 = puVar8;
  puVar8 = param_4 + (unsigned int)*param_4 * 8;
  if (*(unsigned short **)(iVar2 + 0x2c) <= puVar8 || *puVar8 == 0) {
    bVar11 = puVar8 != param_2;
    puVar8 = param_4;
    if (bVar11) return 0;
    goto found;
  }
  if ((*(unsigned char *)((int)puVar8 + 5) & 0x10) != 0) {
found:
    *(unsigned char *)((int)puVar8 + 5) &= 0xef;
    piVar10[1] = piVar10[1] + *param_3;
    piVar1 = piVar10 + 2;
    *piVar1 = *piVar1 - *param_3;
    if (*piVar1 == 0) {
      if (piVar10[1] == *(int *)(iVar2 + 0x2c)) {
        *(unsigned char *)((int)param_2 + 5) = 0x10;
        puVar6 = param_2;
      } else {
        *(unsigned char *)((int)param_2 + 5) = 0;
        puVar6 = *(unsigned short **)(iVar2 + 0x28);
      }
      *(unsigned short **)(iVar2 + 0x40) = puVar6;
      iVar5 = *piVar10;
      *local_c = iVar5;
      func_0010C705((void *)iVar2, (unsigned int *)piVar10);
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) - 1;
    } else {
      *(unsigned char *)((int)param_2 + 5) = 0x10;
      *(unsigned short **)(iVar2 + 0x40) = param_2;
    }
    *(char *)(puVar3 + 2) = (char)puVar8[2];
    *puVar3 = (unsigned short)(*param_3 >> 4);
    puVar3[1] = *puVar8;
    if ((*(unsigned char *)((int)puVar3 + 5) & 0x10) == 0)
      puVar3[(unsigned int)*puVar3 * 8 + 1] = *puVar3;
    if (*(int *)(iVar2 + 0x1c) == 0) {
      for (puVar7 = *(unsigned int **)(iVar2 + 0x38); puVar7 != 0; puVar7 = (unsigned int *)*puVar7) {
        if (*(unsigned int *)(iVar2 + 0x1c) <= puVar7[2]) *(unsigned int *)(iVar2 + 0x1c) = puVar7[2];
      }
    }
    return puVar3;
  }
  goto next;
}

#pragma optimize("", on)
