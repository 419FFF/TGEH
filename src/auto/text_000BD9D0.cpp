/* 7 functions from 0x000BD9D0 to 0x000BE258, found by Ghidra. */
#include "common.h"

extern int D_00314C74;
extern int D_00308158;
extern int D_001D9578;
extern int D_003080AC;
extern unsigned char D_00314C78;
extern int D_003250F8;
extern int D_001D9678;
extern int D_001D967C;
extern float D_001D27B8;
int func_0009C7A0(...);
int func_0005F310(...);
int func_0005CCC0(...);
int func_000B54A0(...);
int func_000B54B0(...);
int func_000A3150(...);
int func_000A2500(...);
int func_001054C0(...);
int func_001054B0(...);
int func_00105990(...);
int func_00120E50(...);
int func_000AFD10(...);
int func_00121990(...);
int func_0013E3F4(...);
void func_000BDCA0(void) {
 float f=(float)D_00314C74;
 int *p=(int *)func_0009C7A0(D_00308158,&D_001D9578,0);
 *p=*(int *)&f;
 func_0005F310(0); func_0005CCC0(1); func_000B54A0(0); func_000B54B0(0);
}

void func_000BDCF0(void) {
 int a[4];
 if (D_003080AC==2) return;
 func_000A3150(1,D_00314C74); func_000A2500(0x40400000);
 if (!D_00314C78) return;
 D_003250F8=1;
 a[0]=0x43988000;a[1]=0x42e00000;a[2]=0x43a78000;a[3]=0x430a0000;
 func_001054C0(0,a,0x61,-1); func_001054B0(0); func_00105990();
 func_00120E50(0x43a00000,0x42a00000);
 func_00121990(func_000AFD10(&D_001D9678));
}

void func_000BDD90(void) {
 func_000A3150(0,0);
 float *p=(float *)func_0009C7A0(D_00308158,&D_001D967C,0);
 if (*p == D_001D27B8) return;
 int *q=(int *)func_0009C7A0(D_00308158,&D_001D9578,0);
 if (*q == 0x40400000) return;
 float *v=(float *)func_0009C7A0(D_00308158,&D_001D9578,0);
 int x=func_0013E3F4(*v);
 if (x) func_000A3150(1,x);
}

void func_000BDE10(void) {
 extern int D_00314E58; extern int D_00314DB8; extern int *D_00314E54;
 extern float D_001D9788, D_001D286C, D_001D27EC, D_001D4524, D_001D2BF4, D_001D2868, D_001D5700;
 int func_00116A90(...); float func_00131230(float); float func_00131250(float); int func_0012F120(...);
 if (D_00314E58 == 0) {
  D_00314DB8 = 0;
  D_00314E58 = func_00116A90(0xb4,1,1);
  D_00314E54 = (int *)func_00116A90(0xde0,1,1);
  *D_00314E54 = 0;
  int i = 1;
  int k = 0xf0;
  do {
   float a = (float)i * D_001D9788;
   a = a * D_001D286C;
   a = a * D_001D27EC;
   float s = func_00131230(a);
   float c = func_00131250(a) * D_001D4524;
   int j = 0;
   do {
    float b = (float)j * D_001D2BF4;
    b = b * D_001D2868;
    *(float *)((char *)D_00314E54 + k - 0x78) = func_00131230(b) * s * D_001D4524;
    *(float *)((char *)D_00314E54 + k - 0x74) = func_00131250(b) * c * D_001D5700;
    *(float *)((char *)D_00314E54 + k - 0x70) = c;
    j++; k += 0xc;
   } while (j < 0x14);
   i++;
  } while (k < 0xd20);
  func_0012F120(D_00314E54 + 0x368);
 }
}

void _func_000BDF50(int *p1, float *p2)
{
  extern int D_00314DB8, D_00314E58, D_00307DF8;
  extern float D_001D978C, D_001D2804;
  extern char D_001D70C4;
  float func_00131760(void);
  int func_00090180(...);
  int func_00091F00(...);
  int func_00091510(...);
  float v[3];
  int m[16];
  __declspec(align(16)) float t[4];
  t[0] = 0; t[1] = 1.0f; t[2] = 0; t[3] = 1.0f;
  if (D_00314DB8 < 5) {
    int *e = (int *)(D_00314E58 + D_00314DB8 * 0x24);
    e[0] = p1[0]; e[1] = p1[1]; e[2] = p1[2];
    e[3] = ((int *)p2)[0]; e[4] = ((int *)p2)[1]; e[5] = ((int *)p2)[2];
    e[6] = 0; e[7] = 0;
    float r = func_00131760() * D_001D978C + D_001D2804;
    int n = D_00314DB8;
    *(float *)(D_00314E58 + n * 0x24 + 0x20) = r;
    v[0] = p2[0];
    v[2] = p2[2];
    v[1] = p2[1] + 10.0f;
    if (n == 0) {
      func_00090180(t, v, 0x43200000, 0x3ecccccd, 0xff7be2ee, 3);
      func_00090180(t, v, 0x42f00000, 0x3ecccccd, 0xff7be2ee, 3);
      func_00090180(t, v, 0x42a00000, 0x3ecccccd, 0xffffffff, 3);
      func_00091F00(m);
      m[12] = *(int *)&v[0]; m[13] = *(int *)&v[1]; m[14] = *(int *)&v[2];
      func_00091510(&D_001D70C4, D_00307DF8, m, 0, 0);
      n = D_00314DB8;
    }
    D_00314DB8 = n + 1;
  }
}

