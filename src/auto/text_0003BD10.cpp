/* 10 functions from 0x0003BD10 to 0x0003CCB5, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

#pragma optimize("y", on)
bool func_0003C260(int param_1, int param_2, int param_3)
{
  int func_00011CB0(...), func_0012F7A0(...), func_0012ECA0(...), func_00110060(...);
  char func_0011AFD0(...);
  extern int D_002EE7C0, D_002EE7C4, D_002EE7C8;
  extern int D_002EE754;
  extern int D_002EDDEC[];
  extern int D_00307DF8;
  int v[4];
  int s[3];
  __declspec(align(16)) int m[16];
  __declspec(align(16)) char m2[64];
  int i;
  int *e;
  func_00011CB0(m, param_2 + 0x10);
  v[0] = D_002EE7C0;
  v[1] = D_002EE7C4;
  v[2] = D_002EE7C8;
  func_0012F7A0(v, param_2 + 0x10);
  m[12] = v[0];
  m[13] = v[1];
  m[14] = v[2];
  s[0] = *(int *)(param_3 + 0xf4);
  s[1] = *(int *)(param_3 + 0xf8);
  s[2] = *(int *)(param_3 + 0xfc);
  func_0012ECA0(s, 0x3fc00000);
  i = 0;
  if (D_002EE754 != 0) {
    e = D_002EDDEC;
    do {
      if (e[0] != 0 && e[1] != D_00307DF8 && e[1] != param_3) {
        func_00110060(e[0], m2);
        if (func_0011AFD0(e[0], m, s, m2))
          return false;
      }
      i++;
      e += 3;
    } while (i != D_002EE754);
  }
  return true;
}
#pragma optimize("", on)
void func_0003C960(int a, int *p) { extern int D_002EDDE8; extern float D_001D2B64; extern char D_002EB06C; extern char D_001D46D8; int func_0006D7A0(...),func_0009C590(...),func_00012D60(...),func_000A1F50(...); float func_000A1EE0(...); void func_0002E300(void); int v[88]={0}; v[0]=0x11; v[83]=(int)&D_002EDDE8; v[82]=(int)func_0002E300; ((float*)v)[4]=30.0f; func_0006D7A0(a,p+4,v); if(p[0xc4]!=1){ if(D_001D2B64<=func_000A1EE0(p[0xa9])){ D_002EB06C=0; func_00012D60(func_0009C590(&D_001D46D8),0x1d); p[0xc4]=1; } } if(!func_000A1F50(p[0xa9])) p[0]=2; }

void func_0003CC40(int a,int *p){extern int D_002EDDE8;int func_0006D7A0(int,void*,void*),func_000A1F50(int);extern int func_0002E300;int local[0x58]={0};local[0]=0x11;local[7]=0x41f00000;local[0x56]= (int)&func_0002E300;local[0x57]=(int)&D_002EDDE8;func_0006D7A0(a,p+4,local);if(!func_000A1F50(p[0xab]))*p=2;}
