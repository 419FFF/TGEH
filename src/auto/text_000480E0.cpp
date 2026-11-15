/* 16 functions from 0x000480E0 to 0x00048BE7, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00048240(undefined4 a, int b, int c, int d, float e) { int func_00106410(...); int func_00106340(...); int x,y; double z; char q,local[4]; func_00106410(d,c,&x); if(x>=0&&x<*(int*)(d+0x68)&&y>=0&&y<*(int*)(d+0x6c)){q=func_00106340(d,&x,local);if(q){z=(double)*(float*)(d+0x74)+(double)e;*(float*)(b+0x34)=(float)z;*(float*)(c+4)=(float)z;}} }

int func_000482B0(unsigned int *p, void *ctx) { void func_0012E6D0(...); float func_0012E9D0(...); unsigned char local[12]; unsigned int best=0,i=1; float v,min; func_0012E6D0(local,ctx,p[1]); min=func_0012E9D0(local); if(p[0]<2)return 0; for(;i<p[0];++i){func_0012E6D0(local,ctx,p[1]+i*16);v=func_0012E9D0(local);if(v<min){min=v;best=i;}}return best;}

void func_00048430(undefined4 a,undefined4 b,undefined4 c,undefined4 d,float e,int n){extern float D_001D27B8;void func_00048350(...);if(e<=D_001D27B8)n=1;for(;n!=0;--n)func_00048350(a,b,c,d,e/(float)n);}

void func_000484A0(undefined4 a,undefined4 b,undefined4 c,undefined4 d,float e,int n){extern float D_001D27B8;void func_00048350(...);if(e<=D_001D27B8)n=1;for(;n!=0;--n)func_00048350(a,b,c,d,-(e/(float)n));}

void func_000486B0(void) {
    int func_00116A90(...);
    func_00116A90(8, 1, 1);
}

void func_000486C0(int *param_1)
{
  int func_0013E469(...);
  extern undefined D_001D4E04;
  int func_00116FB0(...);
  int iVar1;
  undefined1 local_100 [256];
  
  iVar1 = 0;
  if (*param_1 != 0) {
    do {
      if (*(int *)(param_1[1] + 4 + iVar1 * 8) != 0) {
        func_0013E469(local_100,((undefined *)&D_001D4E04),
                       *(undefined4 *)(*(int *)(param_1[1] + iVar1 * 8) + 0xc));
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != *param_1);
  }
  func_00116FB0(param_1[1]);
  func_00116FB0(param_1);
  return;
}

int func_00048720(int *p,undefined4 a,undefined4 b,undefined4 c){int func_00116A90(...);int func_00106010(...);int r;if(!p[1])p[1]=func_00116A90(0x640,1,1);*(int*)(p[1]+p[0]*8)=c;r=func_00116A90(0x614,1,1);func_00106010(r+4,a,a,c);*(int*)(r+8)=b;*(int*)(r+0x5cc)=-1;*(int*)(r+0x604)=2;*(int*)(p[1]+p[0]*8+4)=r;p[0]++;return r;}

