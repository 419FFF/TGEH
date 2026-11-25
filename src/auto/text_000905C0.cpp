/* 21 functions from 0x000905C0 to 0x0009150A, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
static int D_0030414C;

void func_00090850(int param_1, float param_2[3]) { float func_00131760(void); extern float D_001D27EC,D_001D2C00,D_001D2B64; int func_0011CFC0(...); int root=*(int*)(*(int*)(param_1+0x50)+0x2c); float x=param_2[0],y=param_2[2]; int i=0; do {float v=func_00131760();*(float*)(*(int*)(root+0xc)+i)=((v-D_001D27EC)*D_001D2C00+x)*D_001D2B64;v=func_00131760();*(float*)(*(int*)(root+0xc)+i+4)=v+v;v=func_00131760();i+=0xc;*(float*)(*(int*)(root+0xc)+i-4)=((v-D_001D27EC)*D_001D2C00+y)*D_001D2B64;}while(i<0x3c);func_0011CFC0(param_1+0x54,0x42700000); }

void func_000908F0(void)
{
  extern int D_001D6FB0;
  int func_0011D000(...); int func_0011D270(...); int func_0011D290(...); int func_0011D2B0(...); int func_0011D2D0(...);
  int func_000903F0(...); int func_00078730(...); int func_00085E20(...); int func_000905C0(...); int func_00090850(...);
  func_0011D000(&D_001D6FB0,func_000903F0);
  func_0011D270(&D_001D6FB0,func_00078730);
  func_0011D290(&D_001D6FB0,func_00085E20);
  func_0011D2B0(&D_001D6FB0,func_000905C0);
  func_0011D2D0(&D_001D6FB0,func_00090850);
}

void func_00090940(void) {
    extern int D_001D6FB0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6FB0);
}

extern "C" void *memset(void *, int, unsigned int);
void func_00090950(void)
{
    extern int D_001D6FCC, D_001D6FD0, D_001D6FD4, D_001D6FD8, D_001D6FDC;
    extern int D_001D6FBC, D_001D6FB0;
    extern int D_00304150, D_0030809C;
    int func_0011E840(...);
    int func_0011DD60(...);
    int func_0011E830(...);
    int func_0011DEF0(...);
    int func_00110480(...);
    __declspec(align(8)) int s[0x3d];
    memset(s, 0, sizeof(s));
    s[0x24] = 2;
    s[0x25] = 2;
    s[0x36] = 0;
    s[0x37] = 0;
    s[0] = D_001D6FCC;
    s[1] = D_001D6FD0;
    s[2] = D_001D6FD4;
    s[0x2e] = 4;
    s[0x2f] = 5;
    s[0x2a] = 3;
    s[0x3c] = 10;
    s[0x39] = 0x14;
    s[3] = D_001D6FD8;
    s[4] = D_001D6FDC;
    s[0x3b] = 0x58;
    D_0030414C = func_0011E840(&D_001D6FBC, s);
    D_00304150 = func_0011DD60(&D_001D6FB0, 0x14, D_0030414C, *(int *)(D_0030414C + 0x14c));
    func_0011E830(D_0030414C, D_00304150);
    func_0011DEF0(D_00304150);
    func_00110480(D_0030809C, D_0030414C, 8);
}

void func_00090A70(void)
{
  int func_001160B0(...);
  extern undefined4 D_00304150;
  int func_00110760(...);
  extern int D_0030414C;
  func_001160B0(D_00304150);
  func_00110760(D_0030414C);
}

void func_00090A90(int param_1,int param_2) { extern int D_0030414C,D_00304150,D_00304154; int func_0012F120(...),func_00110420(...),func_001105E0(...),func_00110000(...),func_000F8F40(...),func_00110480(...),func_0011E3A0(...),func_0011DED0(...); __declspec(align(16)) char local[0x4c]; func_0012F120(local+0xc); int root=D_0030414C; int q=*(int*)(root+0x2c); if(q)func_00110420(root,*(int*)q);func_001105E0(root,local+0xc,0);func_00110000(root); int r=func_000F8F40(*(int*)(param_1+0x2c));func_00110480(*(int*)(r+0xe0),D_0030414C,8);D_00304154=param_1;func_0011E3A0(D_00304150,param_2);func_0011DED0(D_00304150);}

void func_00090B30(int *param_1, int param_2)
{
 int func_0011CD40(...); float func_00131760(void);
 extern float D_001D27EC,D_001D2808,D_001D27B0,D_001D27D4,D_001D2A2C;
 extern int D_003041BC,D_003041C0,D_003041C4,D_003041C8,D_003041CC,D_003041D0,D_003041D4,D_003041D8;
 int func_0011CDF0(...);int func_0011CE20(...);int func_0011CE10(...);int func_0011CE30(...);int func_0011CE50(...);int func_0011CF30(...);int func_0011CFC0(...);
 int obj=func_0011CD40(1,15,1,5,1);
 *param_1=obj;
 **(int**)(obj+4)=0;
 *(int*)(*(int*)(*param_1+4)+4)=0x42200000;
 *(int*)(*(int*)(*param_1+4)+8)=0;
 unsigned int i;
 for(i=0;i<0xb4;i+=12){
 *(float*)(*(int*)(*param_1+12)+i)=(func_00131760()-D_001D27EC)*D_001D2808;
 *(float*)(*(int*)(*param_1+12)+i+4)=(func_00131760()+D_001D27B0)*2.0f;
 *(float*)(*(int*)(*param_1+12)+i+8)=(func_00131760()-D_001D27EC)*D_001D2808;
 }
 **(int**)(*param_1+20)=0x3f800000;
 *(int*)(*(int*)(*param_1+20)+4)=0x3f800000;
 *(int*)(*(int*)(*param_1+20)+8)=0x3f800000;
 *(int*)(*(int*)(*param_1+20)+12)=0x3f800000;
 i=0;do{
 *(float*)(*(int*)(*param_1+28)+i+4)=func_00131760()*D_001D27D4+D_001D2A2C;
 *(int*)(*(int*)(*param_1+28)+i)=*(int*)(*(int*)(*param_1+28)+i+4);
 i+=8;
 }while(i<40);
 **(int**)(*param_1+36)=0;
 *(int*)(*(int*)(*param_1+36)+4)=0;
 *(int*)(*(int*)(*param_1+36)+8)=0x3f800000;
 *(int*)(*(int*)(*param_1+36)+12)=0x3f800000;
 D_003041BC=0;D_003041C0=5;D_003041C4=10;D_003041C8=15;D_003041CC=20;D_003041D0=25;D_003041D4=30;D_003041D8=35;
 func_0011CDF0(param_2);
 func_0011CE20(param_2,0);
 func_0011CE10(param_2,0x40000000);
 func_0011CE30(param_2,0x42200000,0x42200000);
 func_0011CE50(param_2,0,0,0,0xbf800000);
 func_0011CF30(param_2,0x41f00000,0x41f00000);
 func_0011CFC0(param_2,0x3f800000);
}

void _func_00090ED0(void)
{
  extern int D_001D6FE0;
  int _func_0011D000(...);
  int _func_0011D270(...);
  int _func_0011D290(...);
  int _func_0011D2B0(...);
  int _func_00090B30(...);
  int _func_00078730(...);
  int _func_00085E20(...);
  int _func_00090D00(...);
  _func_0011D000(&D_001D6FE0, _func_00090B30);
  _func_0011D270(&D_001D6FE0, _func_00078730);
  _func_0011D290(&D_001D6FE0, _func_00085E20);
  _func_0011D2B0(&D_001D6FE0, _func_00090D00);
}

void func_00090F10(void) {
    extern int D_001D6FE0;
    int func_0011D0E0(...);
    func_0011D0E0((int)&D_001D6FE0);
}

void func_00090F20(void)
{
  extern int D_001D6FF8, D_001D6FFC, D_001D7000, D_001D7004, D_0030809C, D_003041DC, D_003041E0;
  extern char D_001D7008, D_001D6FEC, D_001D6FE0;
  extern int D_00304158[];
  extern int D_003041BC;
  int func_0011E840(...); int func_0011DD60(...); int func_0011E830(...); int func_0011DEF0(...); int func_00110480(...);
  int a[61];
  int r;
  int *p = a;
  int *q;
  for (r = 0x3d; r != 0; r--)
    *p++ = 0;
  a[36] = 2;
  a[37] = 2;
  a[0] = D_001D6FF8;
  a[1] = D_001D6FFC;
  a[46] = 4;
  a[47] = 5;
  a[42] = 3;
  a[54] = 0;
  a[55] = 0;
  a[60] = 10;
  a[57] = 8;
  a[2] = D_001D7000;
  a[3] = D_001D7004;
  *(char *)&a[4] = D_001D7008;
  a[59] = 0x58;
  r = 0;
  q = D_00304158;
  do {
    r = func_0011E840(&D_001D6FEC, a);
    q[0] = r;
    r = func_0011DD60(&D_001D6FE0, 8, r, *(int *)(r + 0x14c));
    q[1] = r;
    func_0011E830(q[0], r);
    func_0011DEF0(q[1]);
    func_00110480(D_0030809C, q[0], 8);
    q[3] = 0;
    q[4] = 0;
    q += 5;
  } while ((int)q < (int)&D_003041BC);
  D_003041E0 = 0;
  D_003041DC = 0;
}

void func_00091050(void) { extern int D_00304158,D_003041BC; int func_001160B0(...),func_00110760(...); int *p=&D_00304158; do {func_001160B0(p[1]);func_00110760(p[0]);p+=5;}while((int)p<(int)&D_003041BC); }

void func_00091080(void) { extern int D_003041E0,D_003041E4; extern int D_003041BC; extern float D_001D4210,D_001D27AC,D_001D2B64,D_001D27D4; int func_00131230(...),func_001313C0(...),func_0013E3F4(...); if(D_003041E0){for(int i=0;i<8;i++){float x=(float)*(int*)((char*)&D_003041BC+i*4)*D_001D4210*D_001D27AC;float y=(float)func_00131230(x)*D_001D2B64;func_001313C0(y);D_003041E4=(D_003041E4&~(0xff<<(i*8)))|(func_0013E3F4()<<(i*8));int *p=(int*)&D_003041BC;p[i]++;if(p[i]>0x28)p[i]=0;}}D_003041E0=0;}

void func_00091110(int param_1, undefined4 param_2, float param_3)
{
  extern int D_00304164;
  extern int D_00304178;
  extern undefined D_0030416C;
  extern int D_0030418C;
  extern undefined D_00304180;
  extern int D_003041A0;
  extern undefined D_00304194;
  extern int D_003041B4;
  extern undefined D_003041A8;
  int func_00115170(...);
  int func_00110060(...);
  int func_0012F250(...);
  int func_00110420(...), func_001105E0(...), func_00110000(...), func_000F8F40(...), func_00110480(...), func_0011CFC0(...), func_0011DED0(...);
  extern int D_003041DC;
  extern undefined D_00304158;
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_9c;
  __declspec(align(16)) undefined1 local_90 [64];
  __declspec(align(16)) undefined1 local_50 [124];
  
  piVar3 = 0;
  iVar2 = 999;
  if (D_00304164 < 999) {
    piVar3 = (int *)((undefined *)&D_00304158);
    iVar2 = D_00304164;
  }
  if (D_00304178 < iVar2) {
    piVar3 = (int *)((undefined *)&D_0030416C);
    iVar2 = D_00304178;
  }
  if (D_0030418C < iVar2) {
    piVar3 = (int *)((undefined *)&D_00304180);
    iVar2 = D_0030418C;
  }
  if (D_003041A0 < iVar2) {
    piVar3 = (int *)((undefined *)&D_00304194);
    iVar2 = D_003041A0;
  }
  if (D_003041B4 < iVar2) {
    piVar3 = (int *)((undefined *)&D_003041A8);
  }
  func_00115170(*(undefined4 *)(param_1 + 0x98),param_2,local_50);
  func_00110060(*(undefined4 *)(param_1 + 0x2c),local_90);
  func_0012F250(&local_d0,local_50,local_90);
  local_9c = local_9c + param_3;
  local_d0 = 0x3f800000;
  local_cc = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 0x3f800000;
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0x3f800000;
  puVar1 = *(undefined4 **)(*piVar3 + 0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    func_00110420(*piVar3,*puVar1);
  }
  func_001105E0(*piVar3,&local_d0,0);
  func_00110000(*piVar3);
  iVar2 = func_000F8F40(*(undefined4 *)(param_1 + 0x2c));
  func_00110480(*(undefined4 *)(iVar2 + 0xe0),*piVar3,8);
  iVar2 = D_003041DC;
  piVar3[2] = param_1;
  piVar3[3] = iVar2;
  piVar3[4] = 0;
  func_0011CFC0(piVar3[1] + 0x54,0x40800000);
  func_0011DED0(piVar3[1]);
  D_003041DC = D_003041DC + 1;
  if (5 < D_003041DC) {
    D_003041DC = 0;
  }
  return;
}

void func_000912B0(int param_1) { extern int D_00304168,D_003041CC; int func_0011CFC0(...); int *p=&D_00304168; do { if(p[-2]==param_1){*p=1;func_0011CFC0(p[-3]+0x54,0x3a83126f);}p+=5;}while((int)p<(int)&D_003041CC); }

void func_000912F0(void)
{
  extern undefined4 D_003041F0;
  int func_001103C0(...);
  extern undefined4 D_003041EC;
  D_003041F0 = D_003041F0 + -1;
  if (D_003041F0 == 0) {
    func_001103C0(D_003041EC);
  }
  return;
}

void func_00091310(int a0) {
    extern int D_003041EC;
    int func_0010F750(...);
    func_0010F750(a0, D_003041EC, 224);
}

void func_00091330(void){extern int D_003041F0,D_003041EC;int func_000FC730(...),func_000688D0(...),func_00110370(...);int local[7];if(!D_003041F0){func_000688D0();local[4]=0;local[3]=(int)func_000FC730;local[2]=(int)func_000688D0;local[1]=0;D_003041EC=func_00110370(local);}D_003041F0++;}

void func_00091380(undefined4 *param_1)
{
  int func_0011CD40(...);
  undefined4 uVar1;
  
  uVar1 = func_0011CD40(1,0x32,10,10,1);
  *param_1 = uVar1;
  return;
}

void _func_000913A0(int *p1, int *p2)
{
  extern char D_001D5814, D_001D712C;
  extern int D_00326110, D_0030809C;
  int func_0010F750(...); int func_0013E469(...); int func_0011E840(...); int func_0011DD60(...);
  int func_0011E830(...); int func_0011DEF0(...); int func_00110480(...); int func_0012F120(...);
  int func_001105E0(...); int func_00110000(...);
  int a[61];
  char buf[268];
  char mat[64];
  int *p = a;
  int r;
  char *src;
  int d;
  int v;
  p1[0x1c] = (int)p2;
  v = p2[8];
  for (r = 0x3d; r != 0; r--)
    *p++ = 0;
  a[46] = p2[6];
  a[47] = p2[7];
  a[37] = p2[9];
  a[57] = p2[2];
  src = (char *)p2[10];
  a[42] = 3;
  a[54] = 0;
  a[55] = 0;
  a[60] = 10;
  a[59] = 0x58;
  d = -(int)src;
  a[36] = v;
  do {
    char c = *src;
    src[(int)a + d] = c;
    src++;
    if (!c) break;
  } while (1);
  p1[3] = func_0010F750(&D_001D5814, D_00326110, 0xe0);
  p1[0] = p2[0];
  func_0013E469(buf, &D_001D712C, p2[0]);
  p1[2] = func_0011E840(buf, a);
  r = func_0011DD60(p1[0], p2[2], p1[2], *(int *)(p1[2] + 0x14c));
  p1[4] = r;
  p1[1] = r;
  func_0011E830(p1[2], r);
  func_0011DEF0(p1[4]);
  func_00110480(D_0030809C, p1[3], 8);
  func_00110480(p1[3], p1[2], 8);
  func_0012F120(mat);
  func_001105E0(p1[2], mat, 0);
  func_00110000(p1[2]);
  p1[6] = 0;
  *(char *)(p1 + 0x1b) = 0;
}

