/* 20 functions from 0x001473F4 to 0x00148211, found by Ghidra. */
#include "common.h"

#pragma optimize("y", off)
extern int __stdcall func_0010BF49(int,int,int,int,int,int,int);
extern int __stdcall func_001473AC(int,int);
extern int __stdcall func_001473F4(int,int,void*,int);
extern int __stdcall func_0013F44A(void*,int);
extern int __stdcall func_0010B7F8(int);
extern int __stdcall func_0010AA7B(void);
extern "C" void (__stdcall * __imp__RtlInitAnsiString)(void*, const char*);
extern "C" int (__stdcall * __imp__NtCreateFile)(void*, unsigned int, void*, void*, void*, unsigned int, unsigned int, unsigned int, void*);
extern "C" int (__stdcall * __imp__NtClose)(void*);
extern "C" int (__stdcall * __imp__NtOpenFile)(void*, unsigned int, void*, void*, unsigned int, void*);
extern "C" int (__stdcall * __imp__NtSetInformationFile)(void*, void*, void*, unsigned int, unsigned int);
extern int _D_001E27B4;
int __stdcall func_00147577(int a,int b) { return b ? 0x491 : 0; }

void __stdcall func_001475F7(int a) { int x=0; }

int __stdcall func_00147ADC(void* a,int b,char* c,int d,int e,int f) { return e == -1 ? 0 : e; }

int __stdcall func_00147B97(int* a,unsigned short* b) { int x=1; return x; }

int _func_00147C02(char *p) { int len=0; char *start=p; while(*p++) ; return p-start; }

#pragma optimize("y", off)
void __stdcall _func_00147C30(int arg) { }
#pragma optimize("", on)
int __stdcall func_00147C34(void *p, unsigned int n) { extern int _D_001E2860; extern void _func_0013EEE4(int,int); extern void _func_0013EF1F(void); unsigned int a=(unsigned int)p,z,pg,end; _func_0013EEE4((int)&_D_001E2860,16); if(n && a) { z=a+n-1; if(z>=a) { volatile unsigned char v=*(volatile unsigned char *)a; pg=a&0xfffff000; end=z&0xfffff000; while(pg!=end){pg+=0x1000; v=*(volatile unsigned char *)pg;} } } _func_0013EF1F(); return 1; }

int __stdcall func_00147C99(void *p, unsigned int n) { extern int _D_001E2870; extern void _func_0013EEE4(int,int); extern void _func_0013EF1F(void); unsigned int a=(unsigned int)p,z,pg,end; _func_0013EEE4((int)&_D_001E2870,16); if(n && a) { z=a+n-1; if(z>=a) { volatile unsigned char v=*(volatile unsigned char *)a; *(volatile unsigned char *)a=v; pg=a&0xfffff000; end=z&0xfffff000; while(pg!=end){pg+=0x1000; v=*(volatile unsigned char *)pg; *(volatile unsigned char *)pg=v;} } } _func_0013EF1F(); return 1; }

#pragma optimize("", on)
void __stdcall func_00147D02(unsigned int a0) { extern void __stdcall _func_00147C34(int,int); _func_00147C34(1,a0); }
#pragma optimize("y", off)
extern int* __imp__HalBootSMCVideoMode;
int func_00147D10(void)
{
  return *__imp__HalBootSMCVideoMode;
}

int __stdcall func_00147D18(void *handle, void *unused) { char object_name[8], io_status[8]; int allocation_size=-3, attributes=0x40, status; char *object_name_ptr; extern void __stdcall _func_0010AAD1(int); __imp__RtlInitAnsiString(object_name,(const char*)handle); object_name_ptr=object_name; status=__imp__NtCreateFile(&handle,0x100001,&allocation_size,io_status,0,0x80,3,2,&object_name_ptr); if(status<0){_func_0010AAD1(status);return 0;} __imp__NtClose(handle); return 1; }

int __stdcall func_00147D84(void *name) { char object_name[8], io_status[8], disposition; void *handle; int status, allocation_size=-3, attributes=0x40; char *object_name_ptr; extern void __stdcall _func_0010AAD1(int); extern int _func_00110000; __imp__RtlInitAnsiString(object_name,(const char*)name); object_name_ptr=object_name; status=__imp__NtOpenFile(&handle,0x3ff0,&allocation_size,io_status,7,&_func_00110000); if(status<0){_func_0010AAD1(status);return 0;} disposition=1; status=__imp__NtSetInformationFile(handle,io_status,&disposition,1,0xd); __imp__NtClose(handle); if(status<0)_func_0010AAD1(status); return status >= 0; }

void __stdcall _func_001AFFC1(void*); void __fastcall _func_001480AA(void* self, void*) { _func_001AFFC1((char*)self-4); }

#pragma optimize("", on)
extern char D_001E2854[];
extern char D_001E274C[];

// Assuming standard Windows/MSVC calling convention for imports if not specified otherwise
#ifdef __cplusplus
extern "C" {
#endif
void RtlNtStatusToDosError();
#ifdef __cplusplus
}
#endif
extern char D_001E2854[];
extern char D_001E274C[];
void __imp__RtlNtStatusToDosError();
#include <string.h>
#include <stddef.h>

// External Data Declarations
extern char D_001E2854[];
extern char D_001E274C[];

// External Function Prototypes (from assembly calls)
void _func_0014731A_12(void);
void _func_00147577_8(void);
void _func_0010F188_8(void);
extern void __imp__RtlNtStatusToDosError(void);
