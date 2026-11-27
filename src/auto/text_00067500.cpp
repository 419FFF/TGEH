/* 7 functions from 0x00066C20 to 0x00067B3B, found by Ghidra. */
#include "common.h"

extern float D_001D27B0, D_00329234, D_002F7790, D_002F7788, D_001D4210, D_002F77A4, D_002F7780, D_001D5724, D_001D29E0, D_001D27B8;

extern "C" void* __cdecl memset(void*,int,unsigned int);
#pragma optimize("p", on)

void func_00067500(void) {
 extern float D_001D27B0,D_00329234,D_002F77A4,D_002F7780,D_001D27B8;
 void func_00066C20();
 extern char *D_002F77AC;
 extern int D_002F77A8,D_00313A74,D_002F77A0;
 extern char *D_002F779C;
 extern char D_001D572C,D_002F778C;
 extern float D_001D2B64,D_001D5728,D_002F7794;
 void func_001383B0(); int func_0011BDD0(...); void func_00133F30(...); void func_0011E4A0(...); void func_000688D0();
 void func_00120E00(...); void func_00120EA0(...); void func_00120ED0(...); void func_00120F60(...); void func_00120F70(...); void func_00120F80(...);
 float func_00121A30(...); void func_00120E70(...); void func_00120E50(...); void func_00121990(...);
 int state[21]; int uv[2],pos[2]; float color[4];
 if(D_002F77AC) {
 func_001383B0();
  memset(state,0,sizeof(state));
 state[0]=1;state[1]=1;state[2]=func_0011BDD0(D_002F77AC,0);
 state[6]=3;state[10]=2;state[11]=0;state[12]=0;state[17]=0;state[18]=6;state[19]=2;
 func_00133F30(state);
 *(int*)&color[0]=0;*(int*)&color[1]=0;*(int*)&color[2]=0;*(int*)&color[3]=0x3f800000;
 pos[0]=0;pos[1]=0;uv[0]=0x3f800000;uv[1]=0x3f800000;
 func_0011E4A0(0,0,0x44200000,0x43f00000,pos,uv,color,0x3f800000);
 --*(short*)(D_002F77AC+0x2a);func_000688D0();
 if(D_002F77A8==6 || D_002F77A8==5) func_00066C20();
 else {
 func_00120E00(D_00313A74);func_00120EA0(1,1,1,0);func_00120ED0(4,5);
 func_00120F60(0x3f800000);func_00120F70(0x3f800000);func_00120F80(0x40000000,0x40000000);
 float step=func_00121A30(&D_001D572C)+D_001D2B64;
 float base=((double)D_001D27B0-D_00329234)*D_002F77A4+(double)D_00329234*D_002F7780;
 for(int i=0;i<D_002F77A0;i++){
 float y=(double)i*step+base;
 if((double)y>D_001D27B8){
 if(D_002F779C[i*8+4]){
 func_00120E70(0x3f800000,0x3ecccccd,0x3ecccccd,0x3f800000);func_00120F60(0x3f800000);func_00120F70(0x3f800000);
 }else{
 func_00120E70(0x3f800000,0x3f800000,0x3f800000,0x3f800000);func_00120F60(0x3f4ccccd);func_00120F70(0x3f4ccccd);
 }
 func_00120E50(0x43a00000,y);func_00121990(*(int*)(D_002F779C+i*8));
 }
 if((double)y>D_001D5728)break;
 }
 if((double)D_002F77A0*step+base<D_001D27B8)D_002F778C=1;
 }
 if((double)D_002F7794<D_001D27B0){
 state[0]=0;state[1]=0;state[2]=0;state[6]=0;state[10]=4;state[11]=5;
 func_00133F30(state);color[3]=(double)D_001D27B0-D_002F7794;
 func_0011E4A0(0,0,0x44200000,0x43f00000,pos,uv,color,0x3f800000);
 }
 }
}
#pragma optimize("", on)
void __cdecl _func_00067800(void)
{
    extern int _D_002F77A8, _D_00313ABC, _D_00313B40;
    extern float _D_002F7794, _D_002F7780, _D_002F7788, _D_002F7790, _D_002F77A4;
    extern float _D_001D2BF4, _D_001D27B0, _D_001D27F4, _D_001D2E24, _D_001D29E0, _D_001D27B8;
    extern char _D_002F778C;
    extern char *_D_00307D08;
    extern void __cdecl _func_000667E0(void);
    extern void __cdecl _func_000669E0(void);
    extern void __cdecl _func_000ACFB0(int, int);
    switch (_D_002F77A8) {
    case 1:
        _func_000667E0();
        _D_002F77A8 = 2;
        return;
    case 2:
        _D_002F7794 = _D_002F7794 + _D_001D2BF4;
        if (_D_002F7794 > _D_001D27B0)
            _D_002F7794 = 1.0f;
        _D_002F77A4 = _D_002F7780;
        _D_002F7780 = _D_002F7780 - _D_001D27F4;
        if (_D_002F778C) {
            _D_002F77A4 = 0.0f;
            _D_002F7780 = 0.0f;
            _D_002F7788 = 0.0f;
            _D_002F7790 = 0.0f;
            _D_002F77A8 = 6;
            _D_002F778C = 0;
        }
        break;
    case 3:
        _func_000669E0();
        _D_002F77A8 = 4;
        _func_000ACFB0(0xb, 0);
        break;
    case 5:
        _D_002F7794 = _D_002F7794 - _D_001D29E0;
        if (_D_002F7794 < _D_001D27B8) {
            _D_002F77A8 = 3;
            _D_002F7794 = 0.0f;
        }
        break;
    case 6:
        _D_002F77A4 = _D_002F7780;
        _D_002F7780 = _D_002F7780 + _D_001D27F4;
        if (_D_002F7780 > _D_001D2E24) {
            _D_002F7790 = _D_002F7788;
            _D_002F7788 = _D_002F7788 + _D_001D27F4;
        }
        if (_D_002F778C) {
            char *p = _D_00307D08;
            if (!p || *(short *)(*(char **)(p + 0x10) + _D_00313ABC * 0x18 + 0x10) != 0
                || *(short *)(*(char **)(p + 0x10) + _D_00313B40 * 0x18 + 0x10) != 0)
                _D_002F77A8 = 5;
        }
        break;
    }
}

void func_000679B0(int a0) {
    extern int D_002F77A8;
    D_002F77A8 = a0;
}

int func_000679C0(void) {
    extern int D_002F77A8;
    return D_002F77A8;
}

void func_0012E700(void*, void*, void*);
void func_0012F810(void*, void*, void*);
float func_00131210(float);
float func_0012E910(void*);
unsigned char func_000679D0(char* a, void* b)
{
    float v[3];
    char tmp[16];
    func_0012E700(tmp, b, a + 0x48);
    func_0012F810(v, tmp, a);
    switch (*(int*)(a + 0x44)) {
    case 1:
        return func_00131210(v[0]) < *(float*)(a + 0x54) && func_00131210(v[2]) < *(float*)(a + 0x58);
    case 2: {
        float r = *(float*)(a + 0x54);
        return func_0012E910(v) < r * r;
    }
    case 3:
        return func_00131210(v[0]) < *(float*)(a + 0x54) && func_00131210(v[1]) < *(float*)(a + 0x58) && func_00131210(v[2]) < *(float*)(a + 0x5c);
    case 4:
        return v[0] * v[0] + v[2] * v[2] < *(float*)(a + 0x54) * *(float*)(a + 0x54) && func_00131210(v[1]) < *(float*)(a + 0x58);
    }
    return 0;
}

int _func_00067B00(const char *param_1) { int _func_000F91D0(const char *); char local[128]; char *dst=local; while(*param_1 && *param_1!='_'){ *dst++=*param_1++; } *dst=0; return *(int *)(_func_000F91D0(local)+0xe0); }

