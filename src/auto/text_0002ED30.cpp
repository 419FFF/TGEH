/* 6 functions from 0x0002ED30 to 0x0002FAA1, found by Ghidra. */
#include "common.h"

struct V3 { int x, y, z; };

void _func_0002ED30(int o, int *arr, int a2, int a3, int a4, int a5){
 int func_001100A0(...); int func_0012F7A0(...); char func_00011D20(...); char func_0002EC40(...);
 int func_0002D4A0(...); int func_000C7F80(...); int func_0001B7F0(...); int func_0013F2E9(...);
 int func_000F9C00(...); int func_00107C40(...); int func_000ECB20(...);
 extern int D_00307DF8; extern int D_003251B8; extern char D_001D3C18; extern char D_001D3C0C;
 int m; int v[3]; int tmp[3]; int i; int *z; int k; int obj;
 if(*(int*)(o+8)==0) return;
 func_001100A0(*(int*)(*(int*)(o+8)+0x2c),&m);
 v[0]=*(int*)(*(int*)(o+8)+0x40); v[1]=*(int*)(*(int*)(o+8)+0x44); v[2]=*(int*)(*(int*)(o+8)+0x48);
 func_0012F7A0(v,m);
 i=0;
 if(arr[0]!=0){
  do{
   if(arr[i]==*(int*)(o+8)) return;
   i++;
   if(i==10) return;
  }while(arr[i]!=0);
 }
 obj=*(int*)(o+8);
 {
  char t=*(char*)(obj+0x13);
  if(t==0x19||t==0x26||t==0x4b||t==0x17||t==5){
   if(func_00011D20(obj)) return;
   if(!func_0002EC40(a2,a3,a4,*(int*)(o+8),tmp)) return;
   obj=*(int*)(o+8)+0x150;
   z=(int*)obj; for(k=0;k<11;k++) z[k]=0;
   *(char*)(obj+0x24)=1;
   *(int*)(obj+0x10)=D_00307DF8;
   *(int*)(obj+0x28)=a5;
   *(int*)obj=tmp[0]; *(int*)(obj+4)=tmp[1]; *(int*)(obj+8)=tmp[2];
   *(int*)(obj+0x18)=0x3f800000;
   arr[i]=*(int*)(o+8);
   func_0002D4A0();
   func_00107C40(D_003251B8,*(int*)(o+8),D_00307DF8);
   func_000ECB20(0,0x42700000,0x3e4ccccd);
   return;
  }
  if(*(char*)(obj+0x12)==0xb){
   if(!func_0002EC40(a2,a3,a4,obj,0)) return;
   func_0001B7F0(*(int*)(o+8),1,a5);
   arr[i]=*(int*)(o+8);
   if(*(int*)(o+8)==0 || **(int**)(*(int*)(o+8)+0x1c)==0 || func_0013F2E9(**(int**)(*(int*)(o+8)+0x1c),&D_001D3C18)!=0){
    func_0002D4A0();
   } else if(a5==4||a5==5){
    func_000F9C00(*(int*)(o+8),&D_001D3C0C);
   }
   func_00107C40(D_003251B8,*(int*)(o+8),D_00307DF8);
   func_000ECB20(0,0x42700000,0x3e4ccccd);
   return;
  }
  if(t==0x27){
   if(!func_0002EC40(a2,a3,a4,obj,0)) return;
   arr[i]=*(int*)(o+8);
   obj=*(int*)(o+8)+0x150;
   z=(int*)obj; for(k=0;k<11;k++) z[k]=0;
   *(char*)(obj+0x24)=1;
   *(int*)(obj+0x28)=a5;
   return;
  }
  if(!func_0002EC40(a2,a3,a4,obj,0)) return;
  func_000C7F80(*(int*)(o+8));
 }
}

unsigned int func_0002F2A0(int p1,int p2,int p3,int p4){int func_00115100(...);int func_001151F0(...);int func_0012F2E0(...);int func_0012F7A0(...);int func_0002EFC0(...);extern int D_002EE754;extern char D_002EDDE8[];int x=*(int*)(p1+0x110),i;char frame[84];int a=func_00115100(*(int*)(p1+0x98),p4);func_001151F0(*(int*)(p1+0x98),a,frame+40);func_0012F2E0(frame+40,p2);int *v=(int*)(frame+44);v[0]=*(int*)(p3+0x48);v[1]=*(int*)(p3+0x4c);v[2]=*(int*)(p3+0x50);func_0012F7A0(v,frame+40);for(i=0;i<D_002EE754;++i)func_0002EFC0(D_002EDDE8+i*12,x+0x32c,frame+40,p3+0x54);return D_002EE754&0xffffff00;}

extern float _D_001D27B8; extern float _D_002EEA98; int func_0002F380(int a,int b,int n,float f) { volatile unsigned int x[4],y[4]; int i=0; x[0]= n<0 ? *(unsigned int*)&_D_001D27B8 : 0; x[1]=0x3c23d70a; x[2]=0x3f400000; x[3]=0x3f733333; y[0]=0; y[1]=0x3c23d70a; y[2]=0x3f400000; y[3]=0x3f733333; if(n<3) y[3]=0x3f733333; while(i<3) { float lo=*(volatile float*)&x[i]; float hi=*(volatile float*)&y[i+1]; if(f>=lo && f<hi) break; ++i; } _D_002EEA98=f; return i; }

void func_0002F950(int p1)
{
  extern int D_001D3CAC, D_001D3CA8, D_001D3CA4, D_001D3CB0;
  extern short D_001D3CB4;
  extern char D_001D3C90, D_001D3C7C;
  int func_0011E840(...); int func_0011DD60(...); int func_0011E830(...); int func_00110480(...);
  union { double d; int a[61]; } u;
  int x = *(int*)(p1 + 0x110);
  int i, r;
  int *a = u.a;
  for (i = 0; i < 61; i++) a[i] = 0;
  a[46] = 1; a[47] = 1;
  a[36] = 2; a[37] = 2;
  a[32] = 0; a[33] = 0; a[34] = 0; a[35] = 0;
  a[42] = 3; a[43] = 3; a[44] = 3; a[45] = 3;
  a[48] = 0; a[54] = 0; a[53] = 0; a[55] = 0;
  a[2] = D_001D3CAC;
  a[0] = D_001D3CA4;
  a[1] = D_001D3CA8;
  a[60] = 10;
  a[57] = 0x18;
  a[5] = D_001D3CB0;
  *(short*)&a[6] = D_001D3CB4;
  a[59] = 0x58;
  r = func_0011E840(&D_001D3C90, a);
  *(int*)(x + 0x20c) = r;
  *(int*)(x + 0x208) = func_0011DD60(&D_001D3C7C, 0x18, r, *(int*)(r + 0x14c));
  func_0011E830(*(int*)(x + 0x20c), *(int*)(x + 0x208));
  func_00110480(*(int*)(p1 + 0x2c), *(int*)(x + 0x20c), 8);
}

