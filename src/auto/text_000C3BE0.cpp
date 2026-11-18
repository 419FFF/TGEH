/* 13 functions from 0x000C3BE0 to 0x000C4AB2, found by Ghidra. */
#include "common.h"
struct P_000C48B0 { float w; char on; char pad[3]; float x, y, z; };

void func_000C3E40(void) {
 extern unsigned char D_00315718;extern float D_00314F60,D_001D2B98,D_00314F64,D_00314F68,D_001D4EB0,D_0031601C;extern int D_00315CC8,D_00315998,D_00315F88;float fabsf(float);int func_00103990(...),func_00110330(...);float *p=(float *)&D_00315718;
 do{if(*((char *)p-4)&&!*((char *)p-3)&&fabsf(p[0]-D_00314F60)<D_001D2B98&&fabsf(p[1]-D_00314F64)<D_001D2B98&&fabsf(p[2]-D_00314F68)<D_001D4EB0){func_00103990(D_00315CC8,0);*((char *)p-4)=0;++D_00315998;D_0031601C=(float)D_00315998/(float)D_00315F88;func_00110330(*(int *)(*(int *)((char *)p-8)+0x2c),0);}p+=16;}while(p<(float *)&D_00315998);
}

void func_000C4020(void) {
 extern int D_00315F9C,D_003159A4,D_00313A88,D_00307D08,D_00315CA4;extern unsigned char D_00315C90;extern float D_001D27B8;int func_00103990(...);
 register int count=D_00315F9C;if(count){--count;D_00315F9C=count;}if(!D_00315C90)return;
 int state=D_003159A4;if(state!=-1&&state!=4)return;
 int *table=*(int **)(D_00307D08+0x10);int i=D_00313A88;float *entry=(float *)((char *)table+i*24);
 if(*(short *)((char *)entry+0x10)!=0)return;
 if(D_001D27B8==*entry||count!=0)return;
 func_00103990(D_00315CA4,(int)0);D_003159A4=0;D_00315F9C=10;
}

void func_000C40A0(void) {
 extern int D_003159A0,D_00315CA8,D_00314F60,D_00314FB4,D_00314FB8,D_00314FC4,D_00314FC8,D_00315CAC,D_00314F00,D_00314F04;extern unsigned char D_0031151C,D_00315C90;extern float D_001E4908[8],D_00315FA4;
 int func_00103990(...),func_0007F4C0(...),func_00131310(...),func_000A4010(...);
 if(D_003159A0||!D_0031151C)return;func_00103990(D_00315CA8,0);func_0007F4C0(0x43fa0000,&D_00314F60);D_00315C90=0;
 unsigned int v=func_00131310();D_00315FA4=D_001E4908[v&7];func_000A4010(D_0031151C-1);
 if((unsigned char)D_0031151C>0){D_003159A0=0x4b;D_00314FC4=D_00314FB4;D_00314FC8=D_00314FB8;return;}
 func_00103990(D_00315CAC,0);D_00314F00=11;D_00314F04=0;D_00315C90=0;
}

void func_000C48B0(void)
{
  extern P_000C48B0 D_00315CE8[34];
  extern char *D_002FBA90;
  extern float D_001D27B0, D_001D5050, D_00315C80, D_001D2A1C, D_00315C84, D_001D9CD8, D_00315C88, D_001D341C, D_001D27F8, D_001D2C00;
  float func_00131760(void);
  int i;
  for (i = 0; i < 32; i++) {
    P_000C48B0 *p = &D_00315CE8[i + 1];
    char *q;
    p->x = (func_00131760() * 2 - D_001D27B0) * D_001D5050 + D_00315C80;
    p->y = (func_00131760() * 2 - D_001D27B0) * D_001D2A1C + D_00315C84;
    p->z = func_00131760() * D_001D9CD8 + D_00315C88;
    *(float *)(D_002FBA90 + i * 0x30) = p->x;
    *(float *)(D_002FBA90 + i * 0x30 + 8) = p->z;
    *(float *)(D_002FBA90 + i * 0x30 + 4) = p->y;
    p[1].on = 1;
    p[1].w = func_00131760() * D_001D341C + D_001D2A1C;
    *(float *)(D_002FBA90 + i * 0x30 + 0x20) = (func_00131760() + D_001D27B0) * D_001D27F8;
    q = D_002FBA90 + i * 0x30;
    *(float *)(q + 0x24) = *(float *)(q + 0x20) * ((func_00131760() + D_001D27B0) * D_001D2C00);
  }
}

