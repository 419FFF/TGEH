/* 25 functions from 0x000EC2C0 to 0x000ECF11, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000EC3C0(int param_1,int *param_2)
{
 float func_0013E9E0(...);
 *(float *)(param_1+0x60)=func_0013E9E0(param_2[0]);
 *(float *)(param_1+0x64)=func_0013E9E0(param_2[1]);
 *(float *)(param_1+0x68)=func_0013E9E0(param_2[2]);
}

void func_000EC400(int *out,char **in)
{
 int func_001053E0(...); extern int D_00324588;
 char *s=*in; char *last=s; int index=0; int len=0; char c;
 char *p=s;
 do { c=*p; ++p; } while(c);
 len=(int)(p-(s+1));
 if(len>0) {
   do {
     c=s[index];
     if(c==':'||c=='/'||c=='\\') last=s+index+1;
     ++index;
     p=s; do { c=*p; ++p; } while(c);
   } while(index < (int)(p-(s+1)));
 }
 *out=func_001053E0(D_00324588,last);
}

void func_000EC470(int param_1,int *param_2)
{
 int func_0013E9DB(...); unsigned int i=0;
 for(;i<0x100;i++) { int v=param_2[i]; if(!v) break; *(unsigned char *)(param_1+0x89+i)=func_0013E9DB(v); }
 *(unsigned char *)(param_1+0x88)=i;
 int p=*(int *)(param_1+0xa0); ++*(int *)(p+0x10);
}

void func_000EC4C0(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 0x80;
  }
  return;
}

void func_000EC4E0(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 1;
  }
  return;
}

void func_000EC500(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfe;
  }
  return;
}

void func_000EC520(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 2;
  }
  return;
}

void func_000EC540(int p,unsigned int*a){float func_0013E9E0(unsigned int);unsigned char*o=(unsigned char*)p; *(float*)(o+0x6c)=func_0013E9E0(a[0]); *(float*)(o+0x70)=func_0013E9E0(a[1]); *(float*)(o+0x74)=func_0013E9E0(a[2]); *(float*)(o+0x78)=func_0013E9E0(a[3]); *(float*)(o+0x7c)=func_0013E9E0(a[4]); *(float*)(o+0x80)=func_0013E9E0(a[5]); *(float*)(o+0x84)=func_0013E9E0(a[6]); *(volatile unsigned char*)(o+0x9d)|=4;}

void func_000EC5C0(undefined4 param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  func_0013E9DB(*param_2);
  return;
}

void func_000EC5D0(int p,unsigned int*a){int func_0013E9DB(...);if(*a){int v=func_0013E9DB(*a);if(v==1)*(unsigned char*)(p+0x9e)|=2;else *(unsigned char*)(p+0x9e)&=0xfd;}}

void func_000EC600(int param_1)
{
  int func_00116E50(...);
  int iVar1;
  
  iVar1 = func_00116E50(*(undefined4 *)(param_1 + 0xc),(*(int *)(param_1 + 8) + 1) * 0x80,1,1);
  *(int *)(param_1 + 0xc) = iVar1;
  *(undefined1 *)(*(int *)(param_1 + 8) * 0x80 + iVar1 + 0x50) = 0;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

void func_000EC640(undefined4 *param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00324588;
  undefined4 uVar1;
  
  uVar1 = func_001053E0(D_00324588,*param_2);
  *param_1 = uVar1;
  return;
}

void func_000EC760(int p, unsigned int *a){int func_0013E9DB(...);int func_00116A90(...);int n=func_0013E9DB(*a);int*q=(int*)func_00116A90(n<<4,1,1);*(int*)(p+0x78)=(int)q;*(int*)(p+0x64)=0;}

void _func_000EC790(int p, char **v)
{
 long double _func_0013E9E0(...);
 *(float *)(*(int *)(p+0x78)+(*(int *)(p+0x64)<<4))=(float)_func_0013E9E0(v[0]);
 *(float *)(*(int *)(p+0x78)+(*(int *)(p+0x64)<<4)+4)=(float)_func_0013E9E0(v[1]);
 *(float *)(*(int *)(p+0x78)+(*(int *)(p+0x64)<<4)+8)=(float)_func_0013E9E0(v[2]);
 ++*(int *)(p+0x64);
}

void func_000EC970(void)
{
  extern undefined4 D_00324584;
  int func_00125BC0(...);
  extern undefined D_001DC8C0;
  int func_000EC1F0(...);
  int func_000EC230(...);
  int func_00125D20(...);
  extern undefined D_001D88E8;
  int func_000EC260(...);
  extern undefined D_001DC8B8;
  int func_000EC280(...);
  extern undefined D_001DC8AC;
  int func_000EC2A0(...);
  extern undefined D_001DC8A4;
  int func_000EC2C0(...);
  extern undefined D_001DC89C;
  int func_000EC3C0(...);
  extern undefined D_001D28F0;
  int func_000EC400(...);
  extern undefined D_001DC88C;
  int func_000EC470(...);
  extern undefined D_001DC880;
  extern undefined D_001DC870;
  extern undefined D_001DC864;
  extern undefined D_001D8824;
  int func_000EC540(...);
  extern undefined D_001DC858;
  extern undefined D_001DC844;
  extern undefined D_001DC834;
  extern undefined D_001DC824;
  extern undefined D_001DC810;
  int func_000EC5D0(...);
  extern undefined D_001DC808;
  int func_000EC600(...);
  int func_000EC7F0(...);
  int func_000EC660(...);
  extern undefined D_001DC800;
  int func_000EC760(...);
  extern undefined D_001DC7F8;
  int func_000EC790(...);
  undefined4 uVar1;
  
  D_00324584 = func_00125BC0(0,((undefined *)&D_001DC8C0),&func_000EC1F0,0);
  uVar1 = func_00125BC0(D_00324584,((undefined *)&D_001DC8C0),&func_000EC230,0);
  func_00125D20(uVar1,((undefined *)&D_001D88E8),&func_000EC260);
  func_00125D20(uVar1,((undefined *)&D_001DC8B8),&func_000EC280);
  func_00125D20(uVar1,((undefined *)&D_001DC8AC),&func_000EC2A0);
  func_00125D20(uVar1,((undefined *)&D_001DC8A4),&func_000EC2C0);
  func_00125D20(uVar1,((undefined *)&D_001DC89C),&func_000EC3C0);
  func_00125D20(uVar1,((undefined *)&D_001D28F0),&func_000EC400);
  func_00125D20(uVar1,((undefined *)&D_001DC88C),&func_000EC470);
  func_00125D20(uVar1,((undefined *)&D_001DC880),&func_000EC4C0);
  func_00125D20(uVar1,((undefined *)&D_001DC870),&func_000EC4E0);
  func_00125D20(uVar1,((undefined *)&D_001DC864),&func_000EC520);
  func_00125D20(uVar1,((undefined *)&D_001D8824),&func_000EC540);
  func_00125D20(uVar1,((undefined *)&D_001DC858),0xec5b0);
  func_00125D20(uVar1,((undefined *)&D_001DC844),&func_000EC5C0);
  func_00125D20(uVar1,((undefined *)&D_001DC834),&func_000EC5C0);
  func_00125D20(uVar1,((undefined *)&D_001DC824),&func_000EC500);
  func_00125D20(uVar1,((undefined *)&D_001DC810),&func_000EC5D0);
  uVar1 = func_00125BC0(D_00324584,((undefined *)&D_001DC808),&func_000EC600,&func_000EC7F0);
  func_00125D20(uVar1,((undefined *)&D_001D88E8),&func_000EC640);
  func_00125D20(uVar1,((undefined *)&D_001DC8B8),&func_000EC260);
  func_00125D20(uVar1,((undefined *)&D_001DC8A4),&func_000EC660);
  func_00125D20(uVar1,((undefined *)&D_001DC800),&func_000EC760);
  func_00125D20(uVar1,((undefined *)&D_001DC7F8),&func_000EC790);
  return;
}

void _func_000ECB20(int a, int b, int c)
{
 char _func_000FC730(...); int _func_00122BB0(...);
 extern unsigned char _D_00311518; extern int _D_00313B0C; extern int _D_00307D08;
 unsigned char flags=_D_00311518;
 int ready=_D_00313B0C;
 if((flags&1) && _func_000FC730(ready)) {
  int x=c; int y=b; int z=a; int resource=_D_00307D08;
  _func_00122BB0(resource,z,y,x);
 }
}

void func_000ECB60(void) {
    extern int D_00307D08;
    int func_00122D30(...);
    func_00122D30(D_00307D08);
}

void func_000ECB70(unsigned int param_1)
{
 int func_00122D00(...); extern int D_00307D08;
 func_00122D00(D_00307D08,param_1);
}

void _func_000ECDB0(int unused, int *arg)
{
 long double _func_0013E9E0(...);
 extern int _D_00324598; extern char *_D_0032459C; extern float _D_001D27B8;
 int index=_D_00324598;
 int *entry=(int *)(_D_0032459C+index*0x28);
 char *s=(char *)arg[0]; char *d=(char *)entry; char c;
 do { c=*s; *d=c; s++; d++; } while(c);
 *(float *)(entry+8)=(float)_func_0013E9E0((char *)arg[1]);
 long double value=_func_0013E9E0((char *)arg[2]);
 *(float *)(entry+9)=(float)value;
 if(value < _D_001D27B8) *(int *)(entry+9)=0x461c4000;
 *(float *)(entry+9)=*(float *)(entry+8)+*(float *)(entry+9);
 _D_00324598++;
}

void _func_000ECE40(int p)
{
 char _func_00131A10(...); int _func_00125BC0(...); int _func_00125D20(...);
 int _func_00125E80(...); int _func_00125D90(...); int _func_00105D10(...);
 extern int _D_00324598,_D_00324594,_D_003245A0,_D_0032459C;
 extern char _D_001DC8D0; extern char _D_001D29C7; extern void _func_000ECDB0(...);
 _D_00324598=0; _D_00324594=0; _D_003245A0=(int)0xbf800000;
 if(_func_00131A10(p)) {
  int a=_func_00125BC0(0,&_D_001DC8D0,0,0);
  _func_00125D20(a,&_D_001DC8D0,_func_000ECDB0);
  _func_00125E80(p,0); _func_00125D90(a);
 }
 int *e=(int *)(_D_0032459C+_D_00324598*40);
 e[8]=0x47c35000; e[9]=0;
 _func_00105D10(&_D_001D29C7);
}

void func_000ECEE0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00131990(...);
  extern undefined D_001DC8DC;
  int func_0013B7E0(...);
  extern undefined D_001D29C7;
  func_00131990(((undefined *)&D_001DC8DC));
  func_0013B7E0(param_1,param_2,param_3,param_4);
  func_00131990(((undefined *)&D_001D29C7));
  return;
}
// Prototypes
extern int func_0013E9E0(int arg);
extern void func_0012FF00(float* buffer);

// External data
extern float D_001DC7F0;

// Struct definitions based on offsets (assuming 4-byte alignment for simplicity)
typedef struct {
    int f32[16]; // Used by the function to read 16 values from param_2
} S_D_000EC2C0_arg2;

// The first argument (param_1) is a buffer of floats.
// We don't need to declare it globally, just use its type in the signature.
