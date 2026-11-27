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
extern "C" int (__stdcall * __imp__RtlNtStatusToDosError)(int);
#pragma optimize("s", on)
int __stdcall func_001473F4(int h, unsigned short *name, unsigned short *out, int outlen)
{
  extern int _D_001E2804;
  int func_0013F47C(...);
  int __stdcall func_0010BAA0(int, void *, int, int *, int);
  unsigned short *func_00148BC5(...);
  int func_0013EB10(...);
  int func_0013F492(...);
  int __stdcall func_0010BCE7(int, int, int, int);
  int cur;
  int gotv = 0;
  int bytes;
  volatile int ok = 0;
  int namelen;
  volatile unsigned short z;
  unsigned short buf[0x8c];
  unsigned short *p = buf;
  int skipping = 0;
  unsigned short *q, *e;
  unsigned int total, off;
  int n;

  cur = 0x8c;
  namelen = func_0013F47C(name);
  z = 0;
  for (;;) {
    if (!gotv) {
      if (!func_0010BAA0(h, p, cur * 2, &bytes, 0) || !bytes)
        return ok;
    }
    gotv = 0;
    total = bytes + ((p - buf) * 2);
    if (skipping) {
      q = func_00148BC5(buf, &_D_001E2804);
      p = buf;
      cur = 0x8c;
      if (q) {
        off = ((char *)q - (char *)buf) + 4;
        if (off < total) {
          total -= off;
          func_0013EB10(p, (char *)buf + off, total);
          p = (unsigned short *)((char *)buf + total);
          cur = 0x8c - (total >> 1);
        }
        skipping = 0;
      }
    } else {
      q = func_00148BC5(buf, name);
      if (!q || *(unsigned short *)((char *)q + namelen * 2) != 0x3d) {
        skipping = 1;
        gotv = 1;
      } else {
        cur = (int)((char *)q + namelen * 2 + 2);
        e = func_00148BC5((unsigned short *)cur, &_D_001E2804);
        if (e) {
          n = (e - (unsigned short *)cur);
          if (n > outlen - 1)
            n = outlen - 1;
          func_0013F492(out, cur, n);
          out[n] = 0;
          off = ((char *)e - (char *)buf) + 4;
          if (off < total)
            func_0010BCE7(h, off - total, 0, 1);
          ok = 1;
          return ok;
        }
        skipping = 1;
        p = buf;
        cur = 0x8c;
      }
    }
  }
}
#pragma optimize("", on)
int __stdcall func_00147577(int a,int b) { return b ? 0x491 : 0; }

void __stdcall func_001475F7(int a) { int x=0; }

#pragma optimize("s", on)
int __stdcall func_00147986(unsigned char *src, int len, int used, int max)
{
  extern signed char D_002E99D0[];
  extern int D_002E99B8[];
  extern unsigned int D_002E9AD4;
  extern unsigned int D_002E9AD8;
  extern unsigned short D_002E9AD0;
  extern int D_002E9ADC;
  extern int D_002E9AE0;
  extern int D_002E9AE4;
  extern int D_002E9AE8;
  extern int D_002E9AEC;
  extern int __stdcall func_0010AAA3(int);
  unsigned short *dst = (unsigned short *) used;
  int count = 0;
  unsigned char *p = src;
  if (len == (-1))
  {
    unsigned char *s1 = src + 1;
    unsigned char *q = src;
    unsigned char b;
    do
    {
      b = *q;
      q++;
    }
    while (b != 0);
    len = (q - s1) + 1;
  }
  if (len > 0)
  {
    used = (0, 0);
    do
    {
      unsigned int c = *p;
      int extra = (unsigned short) ((short) D_002E99D0[c]);
      unsigned int v = 0;
      if (((p + extra) - src) > len)
      {
        break;
      }
      switch (extra)
      {
        case 5:
          p++;
          used++;
          v = ((((((((((c & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF;
          v <<= 6;

        case 4:
          v += *p;
          p++;
          used++;
          v <<= 6;

        case 3:
          v += *p;
          p++;
          used++;
          v <<= 6;

        case 2:
          v += *p;
          p++;
          used++;
          v <<= 6;

        case 1:
          v += *p;
          p++;
          used++;
          v <<= 6;

        case 0:
          v += *p;
          p++;
          used++;

      }

      v -= D_002E99B8[extra];
      if (v <= D_002E9AD4)
      {
        count++;
        if (count <= max)
        {
          *dst = (unsigned short) v;
          dst++;
        }
      }
      else
        if (v > D_002E9AD8)
      {
        count++;
        if (count <= max)
        {
          *dst = D_002E9AD0;
          dst++;
        }
      }
      else
      {
        v -= D_002E9AE0;
        count++;
        if (count <= max)
        {
          *dst = (unsigned short) ((v >> D_002E9ADC) + D_002E9AE8);
          dst++;
        }
        count++;
        if (count <= max)
        {
          *dst = (unsigned short) ((D_002E9AE4 & v) + D_002E9AEC);
          dst++;
        }
      }
    }
    while (used < len);
  }
  if ((max != 0) && (max < count))
  {
    func_0010AAA3(0x7a);
    count = 0;
  }
  return count;
}
#pragma optimize("", on)
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

#pragma optimize("y", on)
void func_001480C0(unsigned char *src, unsigned char *dst)
{
  unsigned char c, b1, b2, b3;
  unsigned int n, len;
  unsigned char *ref;

  if (src == 0)
    return;
  for (;;) {
    c = *src++;
    if (!(c & 0x80)) {
      b1 = *src++;
      for (n = c & 3; n; n--)
        *dst++ = *src++;
      ref = dst - ((c & 0x60) << 3) - b1 - 1;
      len = ((c >> 2) & 7) + 2;
      do {
        *dst++ = *ref++;
      } while (len--);
      continue;
    }
    if (!(c & 0x40)) {
      b1 = *src++;
      b2 = *src++;
      for (n = b1 >> 6; n; n--)
        *dst++ = *src++;
      ref = dst - ((b1 & 0x3f) << 8) - b2 - 1;
      len = (c & 0x3f) + 3;
      do {
        *dst++ = *ref++;
      } while (len--);
      continue;
    }
    if (!(c & 0x20)) {
      b1 = *src++;
      b2 = *src++;
      b3 = *src++;
      for (n = c & 3; n; n--)
        *dst++ = *src++;
      ref = dst - ((c & 0x10) << 12) - (b1 << 8) - b2 - 1;
      len = b3 + 4 + ((c & 0xc) << 6);
      do {
        *dst++ = *ref++;
      } while (len--);
      continue;
    }
    n = (c & 0x1f) * 4 + 4;
    if (n > 0x70) {
      for (n = c & 3; n; n--)
        *dst++ = *src++;
      return;
    }
    for (; n; n--)
      *dst++ = *src++;
  }
}
#pragma optimize("", on)

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
extern "C" int (__stdcall * __imp__RtlNtStatusToDosError)(int);
#include <string.h>
#include <stddef.h>
