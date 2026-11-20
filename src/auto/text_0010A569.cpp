/* 20 functions from 0x0010A569 to 0x0010B32A, found by Ghidra. */
#include "common.h"

struct XSTR_0010A86C { unsigned short Length, MaximumLength; char *Buffer; };
extern "C" XSTR_0010A86C *__imp__XeImageFileName;
extern "C" int (__stdcall *__imp__IoDeleteSymbolicLink)(void *);
extern "C" int (__stdcall *__imp__IoCreateSymbolicLink)(void *, void *);
#pragma optimize("y", off)
int func_0010A86C(void)
{
  extern char *D_00010118;
  extern char D_001DED7C[], D_001DED74[], D_001E62C8[];
  int __stdcall func_0010A3F2(char **, int *, char *);
  void __stdcall func_0010A456(char *, int);
  int func_0013F294(...);
  int func_0013F170(...);
  int func_0013F116(...);
  int __stdcall func_0010A569(char *, int, int, int);
  int __stdcall func_0010A6EB(char *, char *, int, int);
  char bufA[3072];
  char bufB[360];
  char bufC[360];
  char bufD[360];
  int tid;
  int n;
  int r;
  char *name;
  struct { unsigned short len, max; char *buf; } as;
  int sz = 0x168;
  tid = *(int *)(D_00010118 + 8);
  if (tid != -0x20000) {
    int len;
    char *nm;
    int *pr = &r;
    *pr = func_0010A3F2(&name, &n, bufA);
    if (*pr == 0) {
      func_0010A456(bufB, sz);
      nm = bufB;
    } else {
      nm = name;
    }
    {
      char *q = nm;
      while (*q++) ;
      len = q - (nm + 1);
    }
    if (__imp__XeImageFileName->Length > (unsigned)len) {
      if (func_0013F294(__imp__XeImageFileName->Buffer, nm, len) == 0) {
        len++;
        func_0013F170(bufD, __imp__XeImageFileName->Buffer + len, __imp__XeImageFileName->Length - len);
        bufD[__imp__XeImageFileName->Length - len] = 0;
        if (func_0013F116(bufC, sz, D_001DED74, D_001DED7C, bufD) < 0) return 0;
        if (func_0010A569(bufD, tid, *(int *)(D_00010118 + 0xac), 0) >= 0) {
          func_0010A6EB(bufC, n != -1 ? bufA : 0, 0, n);
        }
      }
    }
    if (r != 0) {
      char *q = nm;
      while (*q++) ;
      as.len = as.max = (unsigned short)(q - (nm + 1));
      as.buf = nm;
      __imp__IoDeleteSymbolicLink(D_001E62C8);
      __imp__IoCreateSymbolicLink(D_001E62C8, &as);
    }
  }
  return 0;
}
unsigned char __stdcall func_0010AA16(char *dst,char *src,int n){extern int D_001DED88;int _func_0013EEE4(...);int _func_0013EF1F(...);_func_0013EEE4(&D_001DED88,0x10);char *out=dst;char *in=src;while(n){if(*in==0)break;*out=*in;out++;in++;n--;}if(n==0){out--;*out=0;_func_0013EF1F();return 1;}*out=0;_func_0013EF1F();return 0;}

int _func_0010AA7B(void){extern int D_003252D4;int fs;int *tls=*(int**)((char*)&fs+4);return *(int*)(tls[D_003252D4]+8);}

void __stdcall func_0010AAA3(int value) { extern int D_003252D4; int fs; int *tls=*(int**)((char*)&fs+4); *(int*)(tls[D_003252D4]+8)=value; }

extern "C" __declspec(dllimport) int __stdcall RtlNtStatusToDosError(int);
extern "C" __declspec(dllimport) void __stdcall RtlInitAnsiString(void*, const char*);
extern int func_00109CF3(int, int);
extern "C" __declspec(dllimport) int __stdcall NtCreateFile(void*, unsigned int, void*, void*, void*, unsigned int, unsigned int, unsigned int, unsigned int);
extern "C" __declspec(dllimport) int __stdcall NtQueryInformationFile(void*, void*, void*, unsigned int, unsigned int);
extern "C" __declspec(dllimport) int __stdcall NtWriteFile(void*, void*, void*, void*, void*, void*, unsigned int, void*);
extern "C" __declspec(dllimport) int __stdcall NtClose(void*);
unsigned char __stdcall func_0010AA16(char*, char*, int);
void *__stdcall func_0010C577(int);
unsigned int __stdcall func_0010C5B6(int);
void __stdcall func_0010C598(int);
void __stdcall func_0010AAA3(int);
int __stdcall func_0010AAD1(int);
int __stdcall func_0010AAD1(int s) { int e=RtlNtStatusToDosError(s); func_0010AAA3(e); return e; }

int __stdcall func_0010AAE8(int a0, int *a1, int *out, int a3) { int e; if(a1[0]==0x103){ if(a3==0) e=0x102; else { e=a1[4]; if(!e)e=a0; e=func_00109CF3(e,-1); } if(e==0x102){func_0010AAA3(0x3e4);return 0;} if(e!=0)return 0; } *out=a1[1]; if(a1[0]<0){func_0010AAD1(a1[0]);return 0;} return 1; }

void __stdcall func_0010AB4D(int *a0, const char *a1, void *a2) { RtlInitAnsiString(a2,a1); a0[1]=(int)a2; a0[0]=-4; a0[2]=0x80; }

long long * __stdcall func_0010AB75(long long *out, unsigned int n) { unsigned long long x; if(n==0xffffffff) return 0; x=(unsigned long long)n*10000; *out=-(long long)x; return out; }

void *__stdcall func_0010ABA3(unsigned int size,int flags){extern unsigned int D_001E62B8[4];void *__stdcall func_0010C4DD(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);void *__stdcall func_0010C49A(unsigned int,unsigned int,unsigned int,unsigned int);void *__stdcall func_0010C45F(unsigned int,unsigned int);unsigned int t,prot;void*r;if(flags<0){if(!(flags&0xf000000))flags=(flags&0xfcffffff)|0xc000000;t=((unsigned int)flags>>24)&15;prot=D_001E62B8[((unsigned int)flags>>28)&3];if(t==1)r=func_0010C4DD(size,0,0xffffff,0x1000,prot);else r=func_0010C49A(size,0xffffffff,1<<t,prot);if(r&&(flags&0x40000000)){unsigned int i;for(i=0;i<size;i++)((unsigned char*)r)[i]=0;}}else r=func_0010C45F(size,((unsigned int)flags>>24)&0x40);return r;}

#pragma optimize("y", off)
void __stdcall func_0010AC43(void*p,unsigned int f){extern void __stdcall MmFreeContiguousMemory(void*);void __stdcall func_0010C47C(void*);if(f&0x80000000)MmFreeContiguousMemory(p);else func_0010C47C(p);}
int __stdcall func_0010AC5D(void *file,unsigned int expected) { extern int __stdcall NtOpenFile(void*,unsigned int,void*,void*,unsigned int,unsigned int); extern int __stdcall NtQueryVolumeInformationFile(void*,void*,void*,unsigned int,unsigned int); extern int __stdcall NtClose(void*); unsigned char oa[12],iosb[8],info[16]; unsigned int attr=0x40; int status; status=NtOpenFile(&file,0x100001,&attr,oa,3,0x800021); if(status<0) return status; status=NtQueryVolumeInformationFile(file,iosb,info,0x18,3); NtClose(file); if(status>=0&&*(unsigned int*)(info+0x10)**(unsigned int*)(info+0x0c)!=expected) status=0xc000014f; return status; }

#pragma optimize("s", on)
int __stdcall func_0010ACD5(int a0, char *path, int n, int a3)
{
    struct { int root; void *name; int attr; } oa;
    struct { unsigned short len, max; char *buf; } name;
    unsigned char iosb[8];
    int info[14];
    char *f = path;
    char *s = f;
    char *q = s + 1;
    char c;
    int len;
    char *p;
    int status;
    do { c = *s; s++; } while (c != 0);
    len = s - q;
    p = f + len;
    func_0010AA16(p, (char*)a3, n - len);
    RtlInitAnsiString(&name, f);
    oa.root = 0;
    oa.name = &name;
    oa.attr = 0x40;
    status = NtCreateFile(&path, 0x40100000, &oa, iosb, 0, 4, 1, 3, 0x22);
    *p = 0;
    if (status >= 0) {
        status = NtQueryInformationFile(path, iosb, info, 0x38, 0x22);
        if (status >= 0 && info[10] == 0 && info[11] == 0) {
            void *buf = func_0010C577(a0);
            if (buf) {
                status = NtWriteFile(path, 0, 0, 0, iosb, buf, func_0010C5B6(a0), 0);
                func_0010C598(a0);
            }
        }
        NtClose(path);
    } else if (status == 0xc0000035) {
        status = 0;
    }
    return status;
}
#pragma optimize("t", on)
int __stdcall func_0010B0F0(unsigned int a,unsigned int b){extern char D_001DED38;extern char D_001E62E0,D_001E62E8,D_001E62F0,D_001E62F8;void func_0013E469(void*,void*,unsigned int);int __stdcall func_0010ADBC(void*,void*,void*,unsigned int,unsigned int,unsigned int);char tmp[12];int r;func_0013E469(tmp,&D_001DED38,a);r=func_0010ADBC(&D_001E62E0,&D_001E62E8,tmp,1,0,0);if(r>=0)r=func_0010ADBC(&D_001E62F0,&D_001E62F8,tmp,1,b,0);return r;}

extern "C" __declspec(dllimport) void __stdcall HalReturnToFirmware(unsigned long); void __stdcall func_0010B145(int a,int b,int c){extern int D_00010118; int __stdcall func_00109A27(int,int*); if(*(int*)(D_00010118+8)!=-131072){int local[768]={0};local[0]=a;local[1]=0;local[2]=b;local[3]=c;func_00109A27(0,local);return;} HalReturnToFirmware(4);__debugbreak();__assume(0);}

int __stdcall func_0010B1AA(int a0){int __stdcall func_0010AC5D(int,int);return func_0010AC5D(a0,0x4000);}

extern "C" __declspec(dllimport) void __stdcall HalRegisterShutdownNotification(void*, int);
extern "C" __declspec(dllimport) int __stdcall IoCreateSymbolicLink(void*, void*);
extern "C" __declspec(dllimport) void __stdcall MmFreeContiguousMemory(void*);
extern "C" unsigned char *__imp__XboxHardwareInfo;
extern "C" int **__imp__LaunchDataPage;
