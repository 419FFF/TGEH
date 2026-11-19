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
extern "C" __declspec(dllimport) long __stdcall NtAllocateVirtualMemory(char **base, unsigned long zeroBits, unsigned long *size, unsigned long type, unsigned long protect);
void __stdcall func_0010C726(void *p, unsigned int a, unsigned int b);

#pragma optimize("y", off)
#pragma optimize("s", on)
void __stdcall func_0010CBE9(Heap *heap, HeapFreeEntry *block, unsigned long freeSize)
{
    unsigned char segIndex;
    unsigned short prevSize;
    unsigned long size;
    unsigned char flags;
    HeapSegment *segment;
    HeapList *list;

    segIndex = block->SegmentIndex;
    prevSize = block->PreviousSize;
    segment = heap->Segments[segIndex];
    flags = block->Flags;
    heap->TotalFreeSize += freeSize;
    while (freeSize != 0) {
        if (freeSize > (unsigned long)&D_0000FF00) {
            size = (unsigned long)&D_0000FF00;
            if (freeSize == (unsigned long)&D_0000FF01)
                size -= 16;
            block->Flags = 0;
        } else {
            size = freeSize;
            block->Flags = flags;
        }
        block->Flags &= 0xf8;
        block->PreviousSize = prevSize;
        block->SegmentIndex = segIndex;
        block->Size = (unsigned short)size;
        if ((unsigned short)size < 0x80) {
            list = &heap->FreeLists[(unsigned short)size];
            if (list->Flink == list)
                heap->FreeListsInUseBytes[(unsigned short)size >> 3] |= (unsigned char)(1 << ((unsigned short)size & 7));
        } else {
            HeapList *head = &heap->FreeLists[0];
            list = head->Flink;
            while (head != list) {
                if ((unsigned short)size <= ((HeapFreeEntry *)((char *)list - 8))->Size)
                    break;
                list = list->Flink;
            }
        }
        {
            HeapList *blink = list->Blink;
            block->FreeList.Flink = list;
            block->FreeList.Blink = blink;
            blink->Flink = &block->FreeList;
            list->Blink = &block->FreeList;
        }
        prevSize = (unsigned short)size;
        freeSize -= (unsigned short)size;
        block = block + (unsigned short)size;
        if (block >= segment->LastValidEntry)
            return;
    }
    if (!(flags & 0x10))
        block->PreviousSize = prevSize;
}
#pragma optimize("", on)
unsigned short *__stdcall func_0010CCE3(unsigned short *p) { if(*((unsigned char *)p+5)&8) return (unsigned short *)((char *)p-24); return (unsigned short *)((char *)p+(*p*16)-16); }
#pragma optimize("y", on)
int __stdcall func_0010D0FD(int a,int b,int c) { unsigned char f=*(unsigned char *)(c-11); int result; if(!(f&1)){ result=-1; goto done; } if(f&8){ result=*(int *)(c-24)-*(unsigned short *)(c-16); goto done; } result=(*(unsigned short *)(c-16)<<4)-*(unsigned char *)(c-10); done: return result; }
