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
extern "C" __declspec(dllimport) long __stdcall NtFreeVirtualMemory(char **base, unsigned long *size, unsigned long type);
void * __stdcall func_0010C7B9(Heap *heap, HeapSegment *seg, unsigned long *size, int flags);
void * __stdcall func_0010C944(Heap *heap, void *block, unsigned long *size, char flags);
extern "C" __declspec(dllimport) unsigned long __stdcall RtlCompareMemoryUlong(void *, unsigned long, unsigned long);
static __forceinline void RemoveHeapFreeEntry(Heap *heap, HeapFreeEntry *entry)
{
 HeapList *next=entry->FreeList.Flink;
 HeapList *prev=entry->FreeList.Blink;
 prev->Flink=next;
 next->Blink=prev;
 if(next==prev && entry->Size<0x80){
  unsigned long size=entry->Size;
  heap->FreeListsInUseBytes[size>>3]^=(unsigned char)(1<<(size&7));
 }
 if(entry->Flags&4){
  unsigned long bytes=(entry->Size<<4)-0x18;
  if((entry->Flags&2) && bytes>4)bytes-=4;
  RtlCompareMemoryUlong((char*)entry+0x18,bytes,0xfeeefeee);
 }
}

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

#pragma optimize("y", off)
#pragma optimize("s", on)
unsigned char __stdcall func_0010D12C(Heap *heap, char *segment, unsigned char index, unsigned long flags, char *base, char *commit, char *reserveEnd)
{
    unsigned short prevSize;
    int pages;
    volatile int headerUnits;
    register int pageSize = 0x1000;
    char *seg;
    char *first;
    register char *cmt;
    int uncommitted;

    pages = ((int)reserveEnd - (int)base) / pageSize;
    seg = segment;
    first = (char *)(((unsigned int)seg + 0x57) & 0xfffffff0);
    if ((char *)heap == base)
        prevSize = *(unsigned short *)heap;
    else
        prevSize = 0;
    headerUnits = ((int)first - (int)seg) >> 4;
    cmt = commit;
    if (first + 0x10 >= cmt) {
        if (first + 0x10 >= reserveEnd)
            return 0;
        segment = (char *)((first - cmt) + 0x10);
        if (NtAllocateVirtualMemory(&commit, 0, (unsigned long *)&segment, pageSize, 4) < 0)
            return 0;
        cmt = commit + (int)segment;
    }
    uncommitted = ((int)reserveEnd - (int)cmt) / pageSize;
    *(unsigned short *)(seg + 2) = prevSize;
    *(unsigned short *)seg = (unsigned short)headerUnits;
    *(unsigned long *)(seg + 0x14) = flags;
    *(Heap **)(seg + 0x18) = heap;
    *(char **)(seg + 0x20) = base;
    *(unsigned char *)(seg + 5) = 1;
    *(char **)(seg + 0x2c) = base + (pages << 12);
    *(unsigned char *)(seg + 4) = index;
    *(unsigned long *)(seg + 0x10) = 0xffeeffee;
    *(char **)(seg + 0x28) = first;
    *(int *)(seg + 0x24) = pages;
    *(int *)(seg + 0x30) = uncommitted;
    if (uncommitted != 0)
        func_0010C726(seg, (unsigned int)cmt, (unsigned int)(uncommitted << 12));
    heap->Segments[index] = (HeapSegment *)seg;
    *(unsigned char *)(first + 5) = 0x10;
    *(char **)(seg + 0x40) = first;
    *(unsigned short *)(first + 2) = *(unsigned short *)seg;
    *(unsigned char *)(first + 4) = index;
    func_0010CBE9(heap, (HeapFreeEntry *)first, (unsigned long)((cmt - first) >> 4));
    return 1;
}

#pragma optimize("y", off)
#pragma optimize("s", on)
void * __stdcall func_0010D24A(Heap *heap, unsigned long size)
{
    unsigned long pages = (size + 0xfff) >> 12;
    unsigned long bytes = pages << 12;
    unsigned long found;
    unsigned char i;
    char *seg;
    unsigned long req;
    unsigned long commit;
    long status;
    unsigned long lim;
    *(unsigned char *)&found = 0x40;
    i = 0;
    do {
        seg = (char *)heap->Segments[i];
        if (seg != 0) {
            if (pages <= *(unsigned long *)(seg + 0x30) && bytes <= *(unsigned long *)(seg + 0x1c)) {
                void *blk = func_0010C7B9(heap, (HeapSegment *)seg, &bytes, 0);
                if (blk) {
                    void *r;
                    bytes >>= 4;
                    r = func_0010C944(heap, blk, &bytes, 0);
                    func_0010CBE9(heap, (HeapFreeEntry *)r, bytes);
                    return r;
                }
            }
        } else {
            if (*(unsigned char *)&found == 0x40)
                *(unsigned char *)&found = i;
        }
        i++;
    } while (i < 0x40);
    if (*(unsigned char *)&found != 0x40 && (*(unsigned char *)((char *)heap + 0x14) & 2)) {
        lim = *(unsigned long *)((char *)heap + 0x20);
        seg = 0;
        size = (req = size + 0x1000);
        if (size <= lim)
            req = lim;
        status = NtAllocateVirtualMemory(&seg, 0, &req, 0x2000, 4);
        while (status < 0) {
            if (req == size) break;
            req >>= 1;
            if (req < size) req = size;
            status = NtAllocateVirtualMemory(&seg, 0, &req, 0x2000, 4);
        }
        if (status < 0) return 0;
        *(unsigned long *)((char *)heap + 0x20) += req;
        commit = size;
        if (size <= *(unsigned long *)((char *)heap + 0x24))
            commit = *(unsigned long *)((char *)heap + 0x24);
        status = NtAllocateVirtualMemory(&seg, 0, &commit, 0x1000, 4);
        if (status >= 0) {
            if (!func_0010D12C(heap, seg, *(unsigned char *)&found, 0, seg, seg + commit, seg + req))
                status = 0xc0000017;
            if (status >= 0)
                return *(void **)(seg + 0x28);
        }
        NtFreeVirtualMemory(&seg, &req, 0x8000);
    }
    return 0;
}
#pragma optimize("", on)

#pragma optimize("", on)

