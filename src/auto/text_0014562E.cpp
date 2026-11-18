/* 35 functions from 0x0014562E to 0x001464F0, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct F92 { char *_ptr; int _cnt; char *_base; int _flag; int _file; int _charbuf; int _bufsiz; };
struct IO92 { int h; unsigned char osfile; char pad[35]; };
extern IO92 *D_0037C300[]; extern IO92 D_002E92A0;
int func_001454D9(...); int func_0014063B(...); int func_00146D23(...); int func_001460D6(void);

extern int _D_001E2320; extern int _D_0037C414; extern int *_D_0037C410; int _func_0013EEE4(...); int _func_00143691(...); int _func_00146980(...); int _func_001436BF(...); void _func_001456A9(void); int _func_0013EF1F(...); void _func_0014562E(void) { int count; int i; count=0; _func_0013EEE4(&_D_001E2320,16); _func_00143691(1); for(i=3;i<_D_0037C414;i++){int *slot=&_D_0037C410[i]; int p=*slot; if(p){ if((*(unsigned char*)(p+12)&0x83) && _func_00146980(p)!=-1) count++; if(i>=20){_func_001436BF(p);*slot=0;} }} _func_001456A9(); _func_0013EF1F(count); }

void func_001456A9(void) {
    int func_001435DF(...);
    func_001435DF(1);
}

undefined4 func_001456B2(int *param_1)
{
  int func_001453C0(...);
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar3 = *param_1 - param_1[2];
    if (0 < iVar3) {
      iVar1 = func_001453C0(param_1[4],param_1[2],iVar3);
      if (iVar1 == iVar3) {
        if ((char)param_1[3] < '\0') {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}

int _func_001456B2(...); int _func_001469D1(...); int _func_0014570F(int p) { int r=_func_001456B2(p); if(r)return -1; if((*(unsigned char *)(p+0xd)&0x40)!=0)return -_func_001469D1(*(int *)(p+0x10)); return 0; }

void func_00145809(void) {
    int func_001435DF(...);
    func_001435DF(1);
}

void func_00145812(void) {
    int func_0014573D(...);
    func_0014573D(1);
}

#pragma optimize("y", off)
#pragma auto_inline(off)
unsigned short func_00145C92(unsigned short ch, F92 *f) { int size, i; char mbc[8]; int fh=f->_file; if(!(f->_flag&0x40) && ((fh==-1?&D_002E92A0:&D_0037C300[fh>>5][fh&0x1f])->osfile&0x80)){ size=func_001454D9(mbc,ch); if(size==-1){ *(int*)func_001460D6()=0x2a; return 0xffff; } for(i=0;i<size;i++){ int r; if(--f->_cnt<0) r=func_0014063B((int)mbc[i],f); else { *f->_ptr=mbc[i]; r=(unsigned char)*f->_ptr++; } if(r==-1) return 0xffff; } return ch; } f->_cnt-=2; if(f->_cnt<0) return (unsigned short)func_00146D23(ch,f); *(unsigned short*)f->_ptr=ch; f->_ptr+=2; return ch; }
#pragma optimize("", on)
int _func_00145D57(unsigned short *out,unsigned char *s,int flag) { if(!s)return 0; if(flag==0)return 0; unsigned char c=*s; if(c==0){ if(out) *(volatile unsigned short*)out=0; return 0; } if(out) *out=(unsigned short)c; return 1; }

void _func_00145D8E(int value) { extern int _D_002E92C8[40]; extern void _func_00147C02(int); int i=0; do { if(value==_D_002E92C8[i*2]) break; ++i; } while((unsigned)i<19); if(value==_D_002E92C8[i*2]) _func_00147C02(_D_002E92C8[i*2+1]); }

void _func_00145DBA(void) { extern void _func_00145D8E(int); extern void (__cdecl *D_0037BCAC)(void); _func_00145D8E(0xfc); if(D_0037BCAC) { D_0037BCAC(); } _func_00145D8E(0xff); }

extern int __stdcall func_00147C34(int, int);
int __stdcall func_00147C34(int,int);
int func_00145DDC(int a, int b) { int result=0; if (func_00147C34(b,a)==0) result=1; return result; }

int _func_00145E12(int value) { extern int __stdcall func_00147D02(int); int result=0; if(func_00147D02(value)==0) result=1; return result; }

void func_0014607B(void) {
    int func_001435DF(...);
    func_001435DF(13);
}

int _func_00146084(int arg) { extern int D_0037C408,D_0037C1A4; extern int D_002E8B7C,D_002E8B80; extern void __stdcall _func_00145F63(int); extern void __stdcall _func_001429CB(int); if(D_0037C408==0){ D_0037C1A4=-3; _func_00145F63(0); D_0037C408=1; return 0; } if(arg==0)return 0; int f=D_002E8B7C; if(f) ((void(*)())f)(); else { f=D_002E8B80; if(f)((void(*)())f)(); } _func_001429CB(0); return 0; }

int func_001460D6(void)
{
  int func_00142880(...);
  int iVar1;
  
  iVar1 = func_00142880();
  return iVar1 + 8;
}

int func_001460DF(void)
{
  int func_00142880(...);
  int iVar1;
  
  iVar1 = func_00142880();
  return iVar1 + 0xc;
}

void _func_001460E8(unsigned int value) { extern int func_00142880(void); extern unsigned int _D_002E9520[45],_D_002E9524[45]; int *state=(int*)func_00142880(); state[3]=value; unsigned int i; for(i=0;i<45;i++) if(value==_D_002E9520[i*2]) { state=(int*)func_00142880(); state[2]=_D_002E9524[i*2]; return; } if(value>=0x13 && value<=0x24){state=(int*)func_00142880();state[2]=13;return;} if(value>=0xbc && value<=0xca){state=(int*)func_00142880();state[2]=8;return;} state=(int*)func_00142880();state[2]=22; }

int func_0014615B(void) {
    return 0;
}

extern "C" __declspec(dllimport) void __stdcall RtlInitializeCriticalSection(void *); int __stdcall func_0014615E(void *a,int b) { RtlInitializeCriticalSection(a); if(b==0)return 1; return 1; }

int _func_0014616E(int a,int b) { extern int _D_001E26D0; extern int D_0037BCB4; extern int _func_0013EEE4(...); extern void _func_0013EF1F(void); _func_0013EEE4(&_D_001E26D0,0x10); if(D_0037BCB4==0) { D_0037BCB4=0; } int r=((int (__cdecl *)(int,int))D_0037BCB4)(a,b); _func_0013EF1F(); return r; }

int _func_001461CF(int value) { extern int D_0037BCB8; int f=D_0037BCB8; if(f==0)return 0; int result=((int (__cdecl *)(int))f)(value); if(result==0) return 0; return 1; }

int _func_001461EA(F92 *f)
{
  int _func_0014546B(...);
  int _func_00147022(...);
  int flag = f->_flag;
  int n;
  if ((flag & 0x83) == 0 || (flag & 0x40) != 0)
    goto fail;
  if ((flag & 2) != 0) {
    f->_flag = flag | 0x20;
    goto fail;
  }
  flag |= 1;
  f->_flag = flag;
  if ((flag & 0x10c) == 0)
    _func_0014546B(f);
  else
    f->_ptr = f->_base;
  n = _func_00147022(f->_file, f->_base, *(int *)((char *)f + 0x18));
  f->_cnt = n;
  if (n == 0 || n == -1) {
    f->_flag |= ((n != 0) ? 0x10 : 0) + 0x10;
    f->_cnt = 0;
    goto fail;
  }
  if ((f->_flag & 0x82) == 0) {
    int fh = f->_file;
    IO92 *p = (fh == -1) ? &D_002E92A0 : (IO92 *)((char *)D_0037C300[fh >> 5] + (fh & 0x1f) * 0x28);
    if ((p->osfile & 0x82) == 0x82)
      f->_flag |= 0x2000;
  }
  if (*(int *)((char *)f + 0x18) == 0x200 && (f->_flag & 8) != 0 && (f->_flag & 0x400) == 0)
    *(int *)((char *)f + 0x18) = 0x1000;
  f->_cnt = n - 1;
  return (unsigned char)*f->_ptr++;
fail:
  return -1;
}

int _func_0014546B(...); unsigned int _func_001462CB(unsigned int value,int *p) { int flags; char *q; if(value==0xffffffff)goto fail; flags=p[3]; if((flags&1)||flags>=0||(flags&2))goto fail; if(p[2]==0)_func_0014546B(p); if(p[0]==p[2]){if(p[1]!=0)goto fail;++p[0];} --p[0]; q=(char*)p[0]; if(flags&0x40){if(*q!=(char)value){p[0]=(int)(q+1);goto fail;}}else *q=(char)value; ++p[1]; p[3]=(p[3]&0xffffffef)|1; return value&0xff; fail:return 0xffffffff; }

long double _func_00146337(double value) { return (long double)(int)value; }

int _func_0014546B(...);
int _func_00146348(unsigned int,unsigned int,unsigned int*);
undefined4 func_00146348(uint param_1, uint param_2, uint *param_3)
{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1 + param_2;
  uVar2 = 0;
  if ((uVar1 < param_1) || (uVar1 < param_2)) {
    uVar2 = 1;
  }
  *param_3 = uVar1;
  return uVar2;
}

void func_00146369(undefined4 *param_1, undefined4 *param_2)
{
  int func_00146348(...);
  int iVar1;
  
  iVar1 = func_00146348(*param_1,*param_2,param_1);
  if (iVar1 != 0) {
    iVar1 = func_00146348(param_1[1],1,param_1 + 1);
    if (iVar1 != 0) {
      param_1[2] = param_1[2] + 1;
    }
  }
  iVar1 = func_00146348(param_1[1],param_2[1],param_1 + 1);
  if (iVar1 != 0) {
    param_1[2] = param_1[2] + 1;
  }
  func_00146348(param_1[2],param_2[2],param_1 + 2);
  return;
}

void _func_001463C7(unsigned int *p) { unsigned int a=p[0]; unsigned int b=p[1]; unsigned int c=p[2]; unsigned int first=a+a; unsigned int carryA=a>>31; p[0]=first; unsigned int second=b+b|carryA; p[1]=second; unsigned int third=c+c; unsigned int carryB=b>>31; p[2]=third|carryB; }

void _func_001463F5(unsigned int *p) { unsigned int high=p[2]; unsigned int mid=p[1]; unsigned int low=p[0]; unsigned int outMid=(mid>>1)|(high<<31); p[1]=outMid; unsigned int outLow=(low>>1)|(mid<<31); p[0]=outLow; p[2]=high>>1; }

void _func_00146422(char *param_1,int param_2,uint *param_3)
{
    if (param_2 != 0) {
        param_3[0] = 0;
        param_3[1] = 0;
        param_3[2] = 0;
    }
}

