/* 5 functions from 0x000C65F0 to 0x000C6D65, found by Ghidra. */
#include "common.h"
extern int D_003159A0;
extern unsigned char D_0031519C[];
extern float D_00314F60;
extern float D_00314F64;
extern float D_00314F68;
extern float D_001D2B98;
extern float D_001D4EB0;
extern unsigned char D_0031545C[];
int func_00110330(int, int);
void func_000C40A0(void);

void func_000C67C0(float *p,float limit,float step) {
 if(*p>limit) { *p-=step; if(*p<limit) *p=limit; }
 else if(*p<limit) { *p+=step; if(*p>limit) *p=limit; }
}
