/* 11 functions from 0x00038830 to 0x000397BA, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00038900(int param_1, int *p) {
int func_0002F450(...); int func_00131220(...);
extern float D_001E461C, D_001D2808, D_001D27B8, D_001D314C, D_001E3A8C, D_001D3B20;
int func_0012EA00(...); int func_000B5650(...);
volatile int local[88]; float dx, dz, v;
if (p[0xc4] == 1 || p[0xc4] == 0) {
if (*(char *)(p+0x6a)) func_0002F450(param_1,p);
dx=(float)p[0x2c]; dz=(float)p[0x2e]; v=(float)func_00131220(dx*dx+dz*dz);
p[0xc5]=(int)(D_001E461C*v*D_001D2808+(float)p[0xc5]);
if (dx == D_001D27B8 && dz == D_001D27B8) { dx=(float)p[0xc]; v=(float)p[0xe]; } else { func_0012EA00(&dx); v=dz; }
p[0x26]=(int)(dx*(float)p[0xc5]); p[0x28]=(int)(v*(float)p[0xc5]);
v=(float)p[0xc5]-(float)p[0xc5]*(float)p[0xc5]*D_001E461C*D_001D314C; p[0xc5]=(int)v;
if(v<D_001D27B8) p[0xc5]=0;
v=D_001E3A8C*D_001E461C+(float)p[0x27];
if(v>D_001D3B20) p[0x27]=(int)v;
else if(D_001D3B20<=((float)p[0x27]-D_001E3A8C*D_001E461C)) p[0x27]=(int)0xc3960000;
else p[0x27]=(int)((float)p[0x27]-D_001E3A8C*D_001E461C);
} local[87]=0; }

void func_00039100(int param_1, int param_2)
{
  int func_000A22B0(...);
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_2 + 0x410);
  if (puVar1 != (undefined4 *)0x0) {
    func_000A22B0(param_1 + 100,1,*puVar1,puVar1[1],puVar1[2],0x3e4ccccd);
  }
  return;
}

int func_000ACFB0(int,int);
int func_00039190(int a,int b) { return func_000ACFB0(2,0); }

void func_00039220(int param_1, undefined4 *param_2)
{
  int func_000A2370(...);
  int iVar1;
  
  iVar1 = func_000A2370(param_1 + 100);
  if (iVar1 == 0) {
    *param_2 = 2;
    param_2[0x27] = 0;
    param_2[0x28] = 0;
    param_2[0x26] = 0;
  }
  return;
}

