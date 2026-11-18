/* 12 functions from 0x0005FAD0 to 0x00060ACC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

extern int D_002EED64;
extern float D_001D5420;
extern int D_002EEF08;
extern unsigned char D_002EEEA4;
int func_00110060(int,void *);
unsigned char func_000604D0(void *,void *);
void func_0005F310(int);
#pragma optimize("y", on)
char func_0005FAD0(float *p, float *q, float *r) {
    float func_0012E8A0(float*, float*);
    extern float D_001D27B8; extern float D_001D27B0;
    float a = func_0012E8A0(p, r) - func_0012E8A0(q, r);
    float b = func_0012E8A0(p + 2, r) - func_0012E8A0(q, r);
    if (a <= D_001D27B8) {
        if (b > D_001D27B8) {
            double t = a / (a - b);
            double u = D_001D27B0 - t;
            p[2] = t * p[2] + u * p[0];
            p[3] = t * p[3] + u * p[1];
        }
        return 1;
    }
    if (b <= D_001D27B8) {
        double t = a / (a - b);
        double u = D_001D27B0 - t;
        p[0] = t * p[0] + u * p[2];
        p[1] = t * p[1] + u * p[3];
        return 1;
    }
    return 0;
}
#pragma optimize("y", off)
void func_000606C0(unsigned int *param_1)
{
    unsigned char local_50[48];
    unsigned int local_20;
    float local_1c;
    unsigned int local_18;
    func_00110060(*(unsigned int *)(D_002EED64+0x2c),local_50);
    *param_1=local_20;
    local_1c=local_1c+D_001D5420;
    param_1[2]=local_18;
    param_1[1]=*(unsigned int *)&local_1c;
}

unsigned int func_00060700(void)
{
    unsigned int local_60;
    float local_5c;
    unsigned int local_58;
    unsigned char local_50[48];
    unsigned int local_20;
    float local_1c;
    unsigned int local_18;
    func_00110060(*(unsigned int *)(D_002EED64+0x2c),local_50);
    local_5c=local_1c+D_001D5420;
    local_60=local_20;
    local_58=local_18;
    if (!func_000604D0(&D_002EEF08,&local_60)) {
        if (!D_002EEEA4) {
            D_002EEEA4=1;
            func_0005F310(0);
            D_002EEEA4=0;
        }
        return 0;
    }
    return 1;
}
#pragma optimize("", on)

void func_00060AA0(void)
{
  int func_0005CFA0(...);
  extern undefined4 D_002EEF74;
  int func_00116FB0(...);
  extern undefined4 D_002EEF78;
  func_0005CFA0();
  if (D_002EEF74 != 0) {
    func_00116FB0(D_002EEF74);
    D_002EEF74 = 0;
  }
  D_002EEF78 = 0;
  return;
}
extern unsigned int D_003268B0;
extern unsigned int D_002EEF78;
extern unsigned int D_002EEF74;
