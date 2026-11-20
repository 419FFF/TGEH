/* 12 functions from 0x0005FAD0 to 0x00060ACC, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Ent60980 { char pad[0x13]; unsigned char k13; unsigned char k14; char pad2[0x17]; void *p2c; };
struct Node60980 { struct Node60980 *next; int pad; struct Ent60980 *ent; };
struct Item60980 { char pad[0x28e]; char flag; char pad2[5]; struct Node60980 *l0; char pad3[0x20]; struct Node60980 *l1; };
struct World60980 { char pad[0xe4]; unsigned int count; struct { struct Item60980 *item; unsigned int type; } e[1]; };
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

#pragma optimize("y", on)
void _func_00060980(void) {
    float func_0012E7B0(float *, float *);
    void func_0012E5F0(float *, float *, float *);
    void func_0012ECA0(float *, float);
    void func_00060880(void *, float *, float);
    void func_00060780(void *, float *, float);
    extern int D_002EEE94;
    extern struct World60980 *D_002EED18;
    extern int D_00313B54;
    extern int D_00313454;
    float vec[4];
    float dist;
    unsigned int i;

    dist = func_0012E7B0((float *)&D_002EEE94, (float *)&D_002EEF08);
    func_0012E5F0(vec, (float *)&D_002EEE94, (float *)&D_002EEF08);
    func_0012ECA0(vec, 0.5f);
    for (i = 0; i < D_002EED18->count; i++) {
        unsigned int type = D_002EED18->e[i].type;
        struct Item60980 *item;
        unsigned int b;
        if (type > 2)
            return;
        item = D_002EED18->e[i].item;
        if (type != 2 || item->flag != 0) {
            func_00060880(item, vec, dist);
            for (b = 0; b < 2; b++) {
                struct Node60980 *node = b == 0 ? item->l0 : item->l1;
                while (node != 0) {
                    struct Ent60980 *ent = node->ent;
                    if (ent->k14 == 1 && ent->k13 != 12 && (int)ent != D_002EED64 &&
                        (D_00313B54 != 6 || (int)ent != D_00313454)) {
                        func_00060780(ent->p2c, vec, dist);
                    }
                    node = node->next;
                }
            }
        }
    }
}
#pragma optimize("y", off)

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
