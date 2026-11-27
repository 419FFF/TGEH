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
