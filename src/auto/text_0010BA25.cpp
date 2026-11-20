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

#pragma optimize("", on)
