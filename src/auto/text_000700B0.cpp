/* 18 functions from 0x000700B0 to 0x00070FC6, found by Ghidra. */
#include "common.h"

int func_00133F30(...);
int func_001378E0(...);
int func_0011E4A0(...);
void func_000688D0(void);
int func_00103440(...);
int func_00103400(...);
int func_00136450(...);
int func_00100E50(...);
int func_001317D0(...);
int func_001167C0(...);

void func_00070180(int a0) {
    extern int D_002FA2F0;
    D_002FA2F0 = a0;
}

void func_00070190(void) { int a[22]={0}; a[11]=4;a[12]=5;a[20]=6;a[21]=2; func_00133F30(a);func_001378E0(8,3); }

void func_00070370(void) {
    int func_00137AB0(...);
    func_00137AB0();
}

void func_00070380(int x,int *p) { int a[22]={0}; float b[4]={0,0,1,1}; a[11]=4;a[12]=5;a[20]=6;a[21]=2;func_00133F30(a);func_0011E4A0(p[0],p[1],p[2],p[3],a,b+2,x,1.0f);func_000688D0(); }

int func_000705A0(void) { extern int D_002FA2EC; int x=D_002FA2EC-1; if(x==0) return 2; else return 1; }

void func_000708B0(void) {
    extern int D_002FA310;
    int func_00122C10(...);
    func_00122C10(D_002FA310, 1148846080, 1050253722);
}

void func_00070D50(int a0) {
    extern int D_002FA2EC;
    D_002FA2EC = a0;
}

int func_00070D60(void) {
    extern int D_002FA2EC;
    return D_002FA2EC;
}

