/* 31 functions from 0x001095A0 to 0x0010A569, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
extern "C" __declspec(dllimport) int __stdcall IoCreateSymbolicLink(void *, void *);
extern "C" __declspec(dllimport) int *LaunchDataPage;
extern "C" __declspec(dllimport) int __stdcall NtOpenSymbolicLinkObject(int *, unsigned int, void *);
extern "C" __declspec(dllimport) int __stdcall NtQuerySymbolicLinkObject(int, void *, unsigned int *);
extern "C" __declspec(dllimport) int __stdcall NtClose(int);
extern "C" __declspec(dllimport) int __stdcall RtlInitAnsiString(void*, const char*);
extern "C" __declspec(dllimport) int __stdcall NtOpenFile(int*, unsigned int, void*, void*, unsigned int, unsigned int);
extern "C" __declspec(dllimport) int __stdcall NtQueryVolumeInformationFile(int, void*, void*, unsigned int, unsigned int);
extern "C" __declspec(dllimport) int __stdcall NtReadFile(int, int, int, int, void *, void *, unsigned int, void *);
extern "C" __declspec(dllimport) int __stdcall NtWriteFile(int, int, int, int, void *, void *, unsigned int, void *);
extern "C" __declspec(dllimport) unsigned int *HalDiskCachePartitionCount;

void _func_001095A0(void) { int func_001160B0(...); int func_0011D0E0(...); int func_00110760(...); extern unsigned int D_003252A8; extern unsigned int D_00325228[]; extern unsigned int D_00325268[]; unsigned int i=0; if(D_003252A8>0) do { func_001160B0(D_00325228[i]); func_0011D0E0(*(unsigned int*)((char*)D_00325268[i]+0x38)); func_00110760(D_00325268[i]); i++; } while(i<D_003252A8); D_003252A8=0; }

void _func_00109600(void) { extern unsigned int D_003252C4,D_003252B8,D_003252B4,D_003252C8,D_003252C0; extern int D_001DEBA4; int func_000688D0(...); int func_0011BF40(...); D_003252C4=0; D_003252B8=1065353216; D_003252B4=1065353216; D_003252C8=0; func_000688D0(); D_003252C0=func_0011BF40(&D_001DEBA4,0); func_000688D0(); }

void func_00109650(void)
{
  int func_000688D0(...);
  int func_0011B990(...);
  extern undefined4 D_003252C0;
  func_000688D0();
  func_0011B990(D_003252C0);
  func_000688D0();
  return;
}

extern undefined4 D_003252A8;
extern undefined4 D_003252B8;
extern undefined4 D_003252B4;
extern undefined4 D_003252C8;
extern undefined4 D_001DEBA4;
#pragma optimize("y", on)
void _func_00109670(unsigned int a, unsigned int b) { int func_0013F2E9(...); extern int D_001D4D38; extern unsigned int D_003252BC,D_003252B8,D_003252B4,D_001E3A48,D_00307DB4; if(func_0013F2E9(a,&D_001D4D38)==0){ D_003252BC=0; D_003252B4=b; D_001E3A48=D_00307DB4; D_003252B8=0x3f800000; } }

#pragma optimize("y", on)
void _func_001096B0(unsigned int a, unsigned int b) { int func_0013F2E9(...); extern int D_001D4D38; extern unsigned int D_003252BC,D_003252B8,D_003252B4,D_001E3A48,D_00307DB4; if(func_0013F2E9(a,&D_001D4D38)) return; D_003252BC=0; D_003252B8=0xbf800000; D_003252B4=b; D_001E3A48=D_00307DB4; }
#pragma optimize("", on)

unsigned int _func_001096F0(void) { extern double D_003252C4,D_001D27B8,D_001D27B0; if(D_003252C4==D_001D27B8)return 0; if(D_003252C4==D_001D27B0)return 2; return 1; }

#pragma optimize("y", on)
void _func_00109830(void)
{
  extern float D_0032923C, D_003252C4, D_001D27B8, D_001D27B0, D_001D2800, D_001DAE38;
  extern int D_003252BC;
  int func_000688D0(...);
  int func_001383B0(...);
  int func_00133F30(...);
  int func_0011E4A0(int, int, float, int, int, int, void*, int);
  int func_00109730(...);
  int a[25];
  float &prev = *(float*)&D_003252C8;
  float &div = *(float*)&D_003252B4;
  float &mul = *(float*)&D_003252B8;
  int &cur = *(int*)&D_003252C4;
  double fVar1 = (double)D_0032923C - prev;
  D_003252C8 = *(int*)&D_0032923C;
  D_003252C4 = D_003252C4 - fVar1 / div * mul;
  if (D_003252C4 < (double)D_001D27B8) {
    cur = 0;
    return;
  }
  if (D_003252C4 > (double)D_001D27B0) {
    cur = 0x3f800000;
  }
  func_000688D0();
  func_001383B0();
  a[0] = 0; a[1] = 0; a[2] = 0; a[3] = 0; a[4] = 0; a[5] = 0; a[6] = 0;
  a[10] = 3; a[14] = 1; a[15] = 0; a[16] = 0; a[22] = 6; a[21] = 0; a[23] = 2;
  func_00133F30(&a[4]);
  if (D_003252BC == 0) {
    func_0011E4A0(0, 0, D_003252C4 * (double)D_001D2800, 0x43f00000, 0, 0, a, 0x3f800000);
    func_0011E4A0(0x44200000, 0, D_001DAE38 - D_003252C4 * (double)D_001D2800, 0x43f00000, 0, 0, a, 0x3f800000);
  }
  if (D_003252C4 == (double)D_001D27B0) {
    func_00109730();
  }
}
#pragma optimize("", on)
void _func_001099A0(void) { extern unsigned int D_00313A70,D_00332730; int func_000B0730(...); int func_000B09A0(...); unsigned int x[27]={0}; x[4]=2;x[5]=2;x[6]=1;D_00313A70=1;x[1]=0x280;x[2]=0x1e0;x[3]=0x20;x[7]=0x2800000;x[8]=30000;x[9]=0x20;x[16]=0x400000;x[12]=8;D_00332730=0;func_000B0730(x);for(;;)func_000B09A0(); }

void __stdcall func_00109A27(unsigned int a,unsigned int b) { extern unsigned int D_001E3604,D_001E3608; int __stdcall _func_0010A6EB(unsigned int,unsigned int,int,int); unsigned int* p=&D_001E3604; while(p<&D_001E3608) { if(*p) { ((void (__cdecl *)(unsigned int,unsigned int,int,int))*p)(a,b,1,0); return; } p++; } _func_0010A6EB(a,b,0,0); }

unsigned int _func_00109B91(void) { unsigned int a=0,b=0; int _ExQueryNonVolatileSetting(...); int r=_ExQueryNonVolatileSetting(7,&a,&b,4,0); if(r<0)return 0; if(a>9)return 1; return 0; }

int __stdcall func_00109BBE(int a,int b,int c,int d) { int __stdcall NtCreateEvent(...); int __stdcall f(int,int*,int*); int x=0,y=0,z=0; if(d) z=f(d,&x,&y); int r=NtCreateEvent(&d,z,b==0,c,0); return r<0?0:d; }

int __stdcall func_00109C1F(int a) { extern int __declspec(dllimport) __stdcall NtSetEvent(int,int); int __stdcall func_0010AAD1(int); int r=NtSetEvent(a,0); if(r<0) { func_0010AAD1(r); return 0; } else { return 1; } }

#pragma optimize("", on)
extern "C" __declspec(dllimport) int __stdcall NtClearEvent(int);
#pragma optimize("y", on)
int __stdcall func_00109C3F(int event) { int result=NtClearEvent(event); if(result>=0) return 1; extern int __stdcall func_0010AAD1(int); func_0010AAD1(result); return 0; }
#pragma optimize("", on)
int __stdcall func_00109CA1(int a,int b) { int _func_0010AB75(...); int __stdcall KeDelayExecutionThread(...); int x=a,y=a; int r=(int)_func_0010AB75(a,&x); if(!r){x &= r; y=0x80000000;} do { r=KeDelayExecutionThread(1,a,b,&x); } while(b && r==0x101); if(r==0xc0)return 0xc0; else return 0; }

extern void __stdcall _func_00109C5D(int, int, int);
void __stdcall func_00109CF3(int a0, int a1)
{
  _func_00109C5D(a0, a1, 0);
  return;
}

void __stdcall func_00109D05(int a0)
{
  int __stdcall func_00109CA1(int, int);
  int value = a0;
  func_00109CA1(value, 0);
}

#pragma optimize("s", on)
int __stdcall func_00109D13(int path, unsigned long long *freeToCaller, unsigned long long *total, unsigned long long *freeTotal)
{
    int __stdcall func_0010AAD1(int);
    int func_0010AA7B(void);
    int __stdcall func_0010AAA3(int);
    unsigned long long __stdcall func_0013EEB0(unsigned long long, unsigned long long);
    unsigned long long info[3];
    int oa[3];
    int io[2];
    int r;
    {
        char name[8];
        RtlInitAnsiString(name, (char*)path);
        oa[1] = (int)name;
        oa[0] = -3;
        oa[2] = 0x40;
        r = NtOpenFile(&path, 0x100001, oa, io, 3, 0x800021);
    }
    if (r < 0) {
        func_0010AAD1(r);
        if (func_0010AA7B() == 2)
            func_0010AAA3(3);
        return 0;
    }
    r = NtQueryVolumeInformationFile(path, io, info, 0x18, 3);
    NtClose(path);
    if (r < 0) {
        func_0010AAD1(r);
        return 0;
    }
    {
        unsigned int unit = ((unsigned int*)info)[5] * ((unsigned int*)info)[4];
        unsigned long long freeBytes = func_0013EEB0(info[1], unit);
        unsigned long long totalBytes = func_0013EEB0(info[0], unit);
        if (freeToCaller) *freeToCaller = freeBytes;
        if (total) *total = totalBytes;
        if (freeTotal) *freeTotal = freeBytes;
    }
    return 1;
}

int __stdcall func_0010A052(int p)
{
    int __stdcall func_00109E07(int, int*, int*);
    int __stdcall func_0010B32A(void*, int);
    int __stdcall func_0010AC5D(void*, int);
    void __stdcall func_0010AAD1(int);
    int func_0013F116(...);
    extern unsigned int D_00010124;
    extern char D_001DECD0[], D_001DECC0[];
    char buf[0x104];
    int blk[4];
    int r, size, ok;

    r = func_00109E07(p, &blk[3], &blk[1]);
    if (r >= 0) {
        p = (p != 0 || blk[1] != 0) ? 1 : 0;
        size = 0x4000 << (D_00010124 >> 30);
        func_0013F116(buf, 0x104, D_001DECD0, blk[3]);
        RtlInitAnsiString(&blk[0], buf);
        RtlInitAnsiString(&blk[2], buf);
        (*(short*)&blk[2])--;
        if (p) {
            ok = func_0010B32A(&blk[2], size);
            if (ok == 0)
                return ok;
        }
        r = func_0010AC5D(&blk[0], size);
        if (r < 0 && !p) {
            if (func_0010B32A(&blk[2], size))
                r = func_0010AC5D(&blk[0], size);
        }
        if (r >= 0) {
            r = IoCreateSymbolicLink(D_001DECC0, &blk[2]);
            ok = r >= 0;
            if (ok)
                return ok;
        }
    } else {
        ok = 0;
    }
    func_0010AAD1(r);
    return ok;
}

#pragma optimize("", on)
extern "C" __declspec(dllimport) int __stdcall RtlInitAnsiString(void*, const char*);
extern "C" __declspec(dllimport) int __stdcall NtOpenFile(int*, unsigned int, void*, void*, unsigned int, unsigned int);
extern "C" __declspec(dllimport) int __stdcall NtQueryVolumeInformationFile(int, void*, void*, unsigned int, unsigned int);
extern "C" __declspec(dllimport) int __stdcall NtClose(int);
int __stdcall func_0010A157(int path) { int __stdcall func_0010AAD1(int);int func_0010AA7B(void);int __stdcall func_0010AAA3(int);char name[8];int io[2];int oa[4];int info[24];int r;RtlInitAnsiString(name,(char*)path);oa[0]=-3;oa[1]=(int)name;oa[2]=0x40;r=NtOpenFile(&path,0x100001,oa,io,3,0x800021);if(r<0){func_0010AAD1(r);if(func_0010AA7B()==2)func_0010AAA3(3);return 0;}r=NtQueryVolumeInformationFile(path,io,info,0x18,3);NtClose(path);if(r<0){func_0010AAD1(r);return 0;}return info[4]*info[5];}

int _func_0010A1F6(void) { extern void _func_0010B733(void);extern void _func_0010B1BB(void);extern void _func_0010B6A6(void);extern void _func_0010B64E(void);extern void _func_001099A0(int,int,int);extern int __stdcall _func_0010B145(int,int,int);extern unsigned int D_003252D4;extern char* __stdcall NtCurrentTeb(void);_func_0010B733();_func_0010B1BB();char*t=NtCurrentTeb();int* p=*(int**)(*(int*)(t+0x20)+0x250);char*q=p?*(char**)((char*)p+0x24):0;if(q){int d=*(int*)(*(int*)(t+4)+D_003252D4*4)-*(int*)(t+0x50);*q=1;*(int*)(q+4)=d+8;}_func_0010B6A6();_func_0010B64E();_func_001099A0(0,0,0);_func_0010B145(1,1,0);return 0;}

void _func_0010A26A(void) { extern int *D_00010118;extern int D_00010108,D_00010000,D_001DEF50,D_001DEF40,D_001DEF44,D_0037C07C;extern int *D_001DEF48;extern int _func_0010A1F6(void);extern int __stdcall _func_0010BA25(int,int,int,void*,int,int);extern int __stdcall _func_0010B145(int,int,int);extern int __stdcall _func_0010B7F8(int);int*p=D_00010118;int a=D_00010108-(int)p+(int)&D_00010000;if(a<*p)*p=a;int n=(((D_001DEF50-D_001DEF40)+D_001DEF44+15)&0xfffffff0)+4;D_0037C07C=n;*D_001DEF48=n/-4;int zero=0;int r=_func_0010BA25(zero,zero,zero,_func_0010A1F6,zero,zero);if(!r)_func_0010B145(1,1,zero);_func_0010B7F8(r);}

int __stdcall _func_0010BF49(int, int, int, int, int, int, int);
int __stdcall _func_0010BAA0(int, void *, int, unsigned int *, int);
int __stdcall _func_0010BCE7(int, unsigned int, int, int);
void __stdcall _func_0010AAA3(int);
int _func_0010AA7B(...);
int __stdcall _func_0010B7F8(int);
unsigned int __stdcall func_0010A326(int path, void *dst)
{
    unsigned char buf[0x184];
    unsigned int result = 0;
    int h = _func_0010BF49(path, 0x80000000, 0, 0, 3, 0x8000080, 0);
    if (h != -1) {
        if (_func_0010BAA0(h, buf, 0x178, (unsigned int *)&path, 0)) {
            if (path == 0x178 && *(unsigned int *)(buf + 0x118) >= *(unsigned int *)(buf + 0x104)) {
                path = *(unsigned int *)(buf + 0x118) - *(unsigned int *)(buf + 0x104);
                if (!_func_0010BCE7(h, path, 0, 0)) goto fail;
                if (!_func_0010BAA0(h, dst, 0x1d0, (unsigned int *)&path, 0)) goto fail;
                if (path == 0x1d0) goto done;
            }
            _func_0010AAA3(0xd);
        }
    }
fail:
    if (_func_0010AA7B() > 0)
        result = (_func_0010AA7B() & 0xffff) | 0x80070000;
    else
        result = _func_0010AA7B();
done:
    if (h != -1) _func_0010B7F8(h);
    return result;
}

int __stdcall func_0010A3F2(int *result,int *status,int *buffer) {
 extern int* __declspec(dllimport) LaunchDataPage;
 int *p=0; int active=0; *status=-1; *result=0;
 if(LaunchDataPage && (p=(int*)*LaunchDataPage)!=0) {
  if((*((unsigned char*)p+0x214)&1)){*status=p[0x86];*result=(int)&p[0x87];active=1;}
  else *status=*p;
 }
 if(*status!=-1){int *src=p?(int*)((char*)p+0x400):status;int i;for(i=0;i<0x300;i++)buffer[i]=src[i];}
 return active;
}

int __stdcall func_0010A456(char *out,unsigned int capacity) {
 extern int __stdcall func_0010AA16(char*,char*,unsigned int);extern int D_001E62C8,D_001DED54;
 union {char data[0x210];struct{unsigned short len,max;char*buf;} us;} u;
 struct OA{int length;int name;int attrs;} oa;int result;
 out[0]=0;oa.length=0;oa.name=(int)&D_001E62C8;oa.attrs=0x40;
 result=NtOpenSymbolicLinkObject((int*)&out,0x40,&oa);
 if(result>=0){u.us.len&=0;u.us.max=0x208;u.us.buf=u.data;result=NtQuerySymbolicLinkObject(*(int*)&out,&u.us,0);NtClose(*(int*)&out);if(result>=0){unsigned int n=u.us.len+1;if(capacity>=n)return func_0010AA16(out,u.data,n);}}
 return func_0010AA16(out,(char*)&D_001DED54,capacity);
}

void __stdcall func_0010A4E8(char *a,char *b) {
 int *page=(int*)*LaunchDataPage; int n1,n2; char c; char *p;
 p=a+1; do { c=*a++; } while(c); n1=(int)(a-p);
 p=b+1; do { c=*b++; } while(c); n2=(int)(b-p);
 if(n1+n2+8>=0x1ec) return;
 char *x=(char*)page+0x214; *(unsigned short*)x=1; x++; x++; *(unsigned short*)x=(unsigned short)n1;
 int v=page[0]; x++; x++; *(int*)x=v; x+=8; if(v==-1) page[0]=0;
 p=a-n1-1; int d=(int)x-(int)p; do { c=*p; *(p+d)=c; ++p; } while(c);
 p=b-n2-1; d=(int)(x+n1)-(int)p; do { c=*p; *(p+d)=c; ++p; } while(c);
}

#pragma optimize("", on)
extern undefined4 *__imp__LaunchDataPage;
extern void* __imp__MmAllocateContiguousMemory();
extern void __imp__MmPersistContiguousMemory();
extern undefined4 _D_001DEBC4;
extern u16 D_003252C0;
void func_00136510(unsigned int a, unsigned int b, unsigned int c, unsigned int d);
int func_0011BDD0(u16* p1, int val);
void func_00133F30(int* p);
void func_0011E4A0(unsigned int a, unsigned int b, unsigned int c, unsigned int d, void* e, unsigned int f, unsigned int g, unsigned int h);
struct S_D_00109D13_arg1 {
    int field1; // +0x0
    int field2; // +0x4
};

struct S_D_00109D13_arg2 {
    int field1; // +0x0
    int field2; // +0x4
};

struct S_D_00109D13_arg3 {
    int field1; // +0x0
    int field2; // +0x4
};
