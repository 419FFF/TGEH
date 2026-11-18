/* 8 functions from 0x0010C944 to 0x0010D67B, found by Ghidra. */
#include "common.h"

struct HeapList { HeapList *Flink; HeapList *Blink; };
struct HeapFreeEntry {
    unsigned short Size;
    unsigned short PreviousSize;
    unsigned char SegmentIndex;
    unsigned char Flags;
    unsigned char unk6[2];
    HeapList FreeList;
};
struct HeapSegment { unsigned char unk0[0x2c]; HeapFreeEntry *LastValidEntry; };
struct Heap {
    unsigned char unk0[0x30];
    unsigned long TotalFreeSize;
    unsigned char unk34[0x2c];
    HeapSegment *Segments[64];
    unsigned char FreeListsInUseBytes[32];
    HeapList FreeLists[128];
};
extern unsigned char D_0000FF00;
extern unsigned char D_0000FF01;

#pragma optimize("y", on)
unsigned short *__stdcall func_0010CCE3(unsigned short *p) { if(*((unsigned char *)p+5)&8) return (unsigned short *)((char *)p-24); return (unsigned short *)((char *)p+(*p*16)-16); }
#pragma optimize("y", on)
int __stdcall func_0010D0FD(int a,int b,int c) { unsigned char f=*(unsigned char *)(c-11); int result; if(!(f&1)){ result=-1; goto done; } if(f&8){ result=*(int *)(c-24)-*(unsigned short *)(c-16); goto done; } result=(*(unsigned short *)(c-16)<<4)-*(unsigned char *)(c-10); done: return result; }
