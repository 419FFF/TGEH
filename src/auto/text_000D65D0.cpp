/* 12 functions from 0x000D65D0 to 0x000D753D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000D6AB0(void)
{
  int func_0009D280(...);
  extern undefined4 D_0031BA60;
  int func_0001B3F0(...);
  int func_00136450(...);
  int func_000D6390(...);
  int func_0009C590(...);
  extern undefined D_001D80F8;
  int func_0009D3E0(...);
  int func_0009D640(...);
  int func_000ECB60(...);
  int func_0010F8A0(...);
  int func_0011BE30(...);
  int func_000F8B60(...);
  int func_000F9700(...);
  int func_0002DF20(...);
  extern undefined4 D_00307DF8;
  extern undefined4 D_002EECA0;
  extern undefined D_0031B9C0;
  int func_00107C40(...);
  extern undefined4 D_00325148;
  extern undefined4 D_00308158;
  int func_000687F0(...);
  int func_000A2E30(...);
  undefined4 uVar1;
  
  func_0009D280(D_0031BA60);
  func_0001B3F0(D_0031BA60);
  func_00136450();
  func_000D6390();
  uVar1 = func_0009C590(((undefined *)&D_001D80F8));
  func_0009D3E0(uVar1);
  uVar1 = func_0009C590(((undefined *)&D_001D80F8));
  func_0009D640(uVar1);
  func_000ECB60();
  func_0010F8A0();
  func_0010F8A0();
  func_0010F8A0();
  func_0011BE30();
  func_0011BE30();
  func_0011BE30();
  func_000F8B60(1,0);
  func_000F9700();
  func_0002DF20(D_00307DF8);
  D_002EECA0 = 1;
  if (D_0031B9C0 != '\0') {
    func_00107C40(D_00325148,D_00308158,D_00308158);
  }
  func_000687F0();
  func_000A2E30(0);
  return;
}

void func_000D6B70(void)
{
 extern int D_00307D08,D_00313B34,D_0031B9D0,D_0031E4E0; extern char D_001DAF88;
 int func_001031C0(...); int func_00103990(...); int func_000D5750(...);
 int *g=(int *)D_00307D08; int *idx=&D_00313B34; int *p=(int *)g[4];
 short v=*(short *)(p+ (0)); v=*(short *)((char *)p+0x10+*idx*0x18);
 if(v==0){v=*(short *)((char *)p+0x148)-*(short *)((char *)p+0x130);}
 if(v){int a=func_001031C0(D_0031B9D0,&D_001DAF88,0);func_00103990(a);}
 { char c=D_0031E4E0; int n=(int)c+(int)v+4; n &= 0x80000003; if(n<0)n=(n-1|0xfffffffc)+1; if((char)n!=c)func_000D5750((char)n); }
}

char *func_000D72B0(char *a,char *b,char c,char d)
{
 extern int D_0031E508; extern char D_0031E50C; extern char D_001E5520;
 int base=D_0031E508; char x=a[0], y=a[1], z=a[2]+c, w=a[3]+d;
 D_0031E50C=0;
 if(z>=16||z<0||w>=12||w<0){D_0031E50C=1;return &D_001E5520;}
 b[1]=y;b[2]=z;b[0]=x;b[3]=w;
 return (char *)(base+4+((int)w+(((int)y+x*6)*16+z)*12)*12);
}

char *func_000D7340(char *p)
{
 extern int D_0031E508;
 unsigned i; char *base=(char *)(D_0031E508+0xdce9);
 for(i=0;i<150;i++,base+=0x14) if(*(int *)(base+7)==2 && base[-1]==p[0]&&base[0]==p[1]&&base[1]==p[2]&&base[2]==p[3]) return base-1;
 return 0;
}

char *func_000D7390(char *p){extern int D_0031E508;int i;char *q=(char*)(D_0031E508+0xe954);for(i=0;i<0x32;i++,q+=0x1c)if(*(int*)(q+8)==1&&q[0]==p[0]&&q[1]==p[1]&&q[2]==p[2]&&q[3]==p[3])return q;return 0;}

void func_000D73E0(undefined1 param_1, undefined1 param_2, undefined1 param_3, undefined1 param_4)
{
  extern undefined4 D_0031E508;
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = D_0031E508;
  uVar2 = 0;
  piVar3 = (int *)(D_0031E508 + 0xdcf0);
  do {
    if (*piVar3 == 0) {
      *(undefined4 *)(D_0031E508 + (uVar2 * 5 + 0x373c) * 4) = 2;
      iVar1 = iVar1 + uVar2 * 0x14;
      *(undefined1 *)(iVar1 + 0xdce8) = param_1;
      *(undefined1 *)(iVar1 + 0xdce9) = param_2;
      *(undefined1 *)(iVar1 + 0xdcea) = param_3;
      *(undefined1 *)(iVar1 + 0xdceb) = param_4;
      *(undefined4 *)(iVar1 + 0xdcf8) = 0;
      return;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 5;
  } while (uVar2 < 0x96);
  return;
}

void func_000D7450(char a,char b,char c,char d){extern int D_0031E508;int i;for(i=0;i<0x32;i++)if(!*(int*)(D_0031E508+0xe95c+i*0x1c)){char *p=(char*)(D_0031E508+i*0x1c);p[0xe954]=a;p[0xe955]=b;p[0xe956]=c;p[0xe957]=d;*(int*)(D_0031E508+(i+0x856)*0x1c)=0;*(int*)(p+0xe95c)=1;*(int*)(p+0xe960)=3;p[0xe965]=1;return;}}

unsigned char func_000D74D0(int *p)
{
 extern int _D_001E54E8;
 int *q = &_D_001E54E8;
 if (*q == -1) return 0;
 do { if (*q++ == *(int *)((char *)p + 4)) return 1; } while (*q != -1);
 return 0;
}

