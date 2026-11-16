/* 5 functions from 0x0001A000 to 0x0001AF3E, found by Ghidra. */
#include "common.h"

void _func_0001AC90(int p){void _func_00065E70(...);void _func_0011B990(int);_func_00065E70(*(int*)(p+0x110));int a=*(int*)(p+0x114);--*(short*)(a+0x2a);_func_0011B990(*(volatile int*)(p+0x114));}

void _func_0001AED0(int p){int _func_00110420(...);int _func_00110330(...);int _func_00099EB0(...);int i;int base=*(int*)(p+0x114);if(*(int*)(p+0x118)!=0xff){i=*(int*)(p+0x118)*64+base;_func_00110420(*(int*)(i+48),**(int**)(*(int*)(i+48)+44));_func_00110330(*(int*)(i+48),1);*(int*)(i+108)=0;*(int*)(p+0x118)=255;*(int*)(p+44)=*(int*)(p+0x124);*(short*)(p+0x110)=3;_func_00099EB0(p+0x120);}}
