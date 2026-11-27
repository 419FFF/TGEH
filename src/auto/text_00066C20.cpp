/* 7 functions from 0x00066C20 to 0x00067B3B, found by Ghidra. */
#include "common.h"

extern float D_001D27B0, D_00329234, D_002F7790, D_002F7788, D_001D4210, D_002F77A4, D_002F7780, D_001D5724, D_001D29E0, D_001D27B8;
void func_00066C20(void) {
    volatile char frame[257];
    volatile double mix = (D_002F7788 * D_00329234 + D_002F7790 * (D_001D27B0 - D_00329234)) * D_001D4210;
    double f = (D_002F7780 * D_00329234 + D_002F77A4 * (D_001D27B0 - D_00329234)) * D_001D5724;
    volatile float out[6];
    double v=f;
#define CLAMP(vv) if ((vv)>D_001D27B0) (vv)=D_001D27B0; else if ((vv)<D_001D27B8) (vv)=D_001D27B8
    CLAMP(v); out[0]=(float)(D_001D27B0-(D_001D27B0-v)*(D_001D27B0-v));
    v=f-D_001D29E0; CLAMP(v); out[1]=(float)(D_001D27B0-(D_001D27B0-v)*(D_001D27B0-v));
    v=f-D_001D29E0-D_001D29E0; CLAMP(v); out[2]=(float)(D_001D27B0-(D_001D27B0-v)*(D_001D27B0-v));
    v=f-D_001D29E0-D_001D29E0-D_001D29E0; CLAMP(v); out[3]=(float)(D_001D27B0-(D_001D27B0-v)*(D_001D27B0-v));
    v=f-D_001D29E0-D_001D29E0-D_001D29E0-D_001D29E0; CLAMP(v); out[4]=(float)(D_001D27B0-(D_001D27B0-v)*(D_001D27B0-v));
    v=f-D_001D29E0-D_001D29E0-D_001D29E0-D_001D29E0-D_001D29E0; CLAMP(v); out[5]=(float)(D_001D27B0-(D_001D27B0-v)*(D_001D27B0-v));
    frame[0]=(char)mix;
}

extern "C" void* __cdecl memset(void*,int,unsigned int);
#pragma optimize("p", on)
