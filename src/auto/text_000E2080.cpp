/* 11 functions from 0x000E2080 to 0x000E2F48, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct ExitLinks { signed char number, mode, count; };

void func_0005CCC0(int);
void func_000B56D0(void*,void*,void*,float);
void func_0005C800(void);
void func_00110420(int,int);
int func_0009C590(void*);
void func_00110480(int,int,int);
extern int D_00313B60;
extern char D_002EED20,D_001DBD3C,D_001DBD4C,D_001DBD28;
extern "C" char* __cdecl strcat(char*,const char*);
void func_000E25A0(void) {
 extern char *D_00322478; extern int D_00308158; extern char D_001DBC18;
 int func_0013E469(...);int func_00110060(...);float* func_0009C7A0(...);int func_000E1F20(...);
 extern char D_001DBC84,D_001D5814,D_001DBC78,D_001DBC50,D_001DBC30,D_001DBBF4,D_001DBBF0;
 extern int D_001E5600[];
 extern float D_001D27B8;
 int func_0009CBE0(...);int func_00110300(...);
 __declspec(align(16)) unsigned temp[16];
 char buf[256],suffix[256];
 char *game=D_00322478;
 game[0x20b8]=0;
 signed char n=0;
 do {
 int index=n;
 func_0013E469(buf,&D_001DBC84,index+1);
 int obj=func_0009CBE0(buf);
 if(!obj)break;
 ++game[0x20b8];
 func_00110060(func_00110300(*(int*)(obj+0x2c),&D_001D5814,24),temp);
 unsigned *out=(unsigned*)(game+(index*3+0x7f2)*4);
 out[0]=temp[12];out[1]=temp[13];out[2]=temp[14];
 ++n;
 }while(n<20);
 signed char number=0;
 int row=0; volatile int table=0;
 char *entry=game+0x135;
 do{
 ++number;
 char *record=entry-0x125;
 entry[2]=0;*entry=number;
 signed char slot=0;volatile int index=0;
 do {
 func_0013E469(buf,&D_001DBC78,index+1);
 float *value=func_0009C7A0(*(int*)record,buf,0);
 if(slot<3){
 volatile float v=(float)D_001E5600[table+index];*value=v;
 if(v>=D_001D27B8){
 signed char link=(signed char)(int)v;
 signed char own=*entry;
 const char *format;
 if(own==link)format=&D_001DBC30;
 else{
 record[(signed char)entry[2]+0x120]=link;++entry[2];
 signed char dest=(signed char)(int)*value;
 if(dest!=30 && (int)dest<=(signed char)game[0x20b8]+30)goto next_slot;
 own=*entry;format=&D_001DBC50;
 }
 func_0013E469(buf,format,(int)own);
 }
 }else *value=-1.0f;
 next_slot:
 ++slot;++index;
 }while(slot<5);
 func_0013E469(buf,&D_001DBC18,row);
 int times=(int)*func_0009C7A0(D_00308158,buf,0);
 for(int repeat=times;repeat>0;--repeat)func_000E1F20(record);
 record[0x126]=(char)times;
 func_0013E469(buf,&D_001DBBF4,row+1,(int)(signed char)entry[2]);
 slot=0;
 while(slot<(signed char)entry[2]){
 func_0013E469(suffix,&D_001DBBF0,(int)(signed char)entry[slot-5]);
 strcat(buf,suffix);++slot;
 }
 ++row;table+=3;entry+=0x130;
 }while(number<26);
}

void func_000E2BD0(void){func_0005CCC0(0x13);func_000B56D0(&D_002EED20,&D_001DBD3C,&D_001DBD4C,85.0f);func_0005C800();int *p=*(int**)(D_00313B60+0x2c);if(*p)func_00110420(*p,D_00313B60);int a=func_0009C590(&D_001DBD28);int *c=*(int**)(a+0x2c);int *d=*(int**)(c+0x2c);int v=*d;func_00110480(v,D_00313B60,8);}

void func_000E2C40(void)
{
  int func_0005F310(...);
  int func_0005CCC0(...);
  func_0005F310(0);
  func_0005CCC0(1);
  return;
}

void _func_000E2C60(void){
 int func_0013E469(...); int func_0009C7A0(...); extern int D_00308158;
 int func_00131310(...); int func_00116A90(...); int func_000E2870(...); int func_000688D0(...); int func_0011BF40(...);
 extern undefined D_001DBC18; extern undefined D_001DBD60;
 extern unsigned char D_00322488; extern void *D_00322478; extern int D_0031FEF0,D_0032247C,D_00322480;
 float *pf; int v; unsigned char *p; int i; unsigned char local[0x100];
 i=0; do {
  func_0013E469(local,&D_001DBC18,i);
  pf=(float *)func_0009C7A0(D_00308158,local,0);
  if(*pf==-1.0f){v=(func_00131310()&0x7fff);*pf=(float)(v%3);}
  i++;
 }while(i<0x1a);
 D_00322488=0; p=(unsigned char *)func_00116A90(0x20d0,1,1); D_00322478=p;
 func_000E2870();p[1]=0;p[0]=0;func_000688D0();
 D_0031FEF0=func_0011BF40(&D_001DBD60,0);
 D_0032247C=0;D_00322480=0;
 {volatile int keep=func_000688D0(); (void)keep;}
}

void func_000E2D30(void)
{
  int func_0011B990(...);
  extern undefined4 D_0031FEF0;
  int func_00116FB0(...);
  extern undefined4 D_00322478;
  func_0011B990(D_0031FEF0);
  func_00116FB0(D_00322478);
  return;
}

void func_000E2D50(void) {
    extern char D_00322488;
    D_00322488 = 1;
}

void func_000E2D60(void) {
    extern char D_00322488;
    D_00322488 = 0;
}

extern float D_0032247C,D_001D333C,D_00322480;
extern char *D_00322478;
void func_000E2080(void*,int);
void func_000E2D70(void){char *p=D_00322478;D_0032247C+=D_001D333C;D_00322480+=D_001D333C;func_000E2080(p+0x1ef0,1);func_000E2080(p+0x1f38,1);func_000E2080(p+0x1f80,1);func_000E2080(p+0x1ef0,0);func_000E2080(p+0x1f38,0);func_000E2080(p+0x1f80,0);if(p[0x1f11]&&p[0x1f59]&&p[0x1fa1])*p=1;}

extern int D_00307D08, D_00313AA8, D_00307DF8, D_00308158;
extern float D_001D27FC;
extern char D_001DBC18;
int func_00110060(...);
int func_0012F610(...);
char func_000E1EA0(int);
int func_0012E6D0(...);
float func_0012EA60(...);
int func_000E1F20(...);
int func_0013E469(...);
float *func_0009C7A0(...);
void func_000E2E10(void)
{
  char *p = D_00322478;
  char *best;
  int bi;
  float bd = 10000.0f;
  char name[0x100];
  __declspec(align(16)) float mat[16];
  float tmp[3];
  float v[3];
  if (*(short *)(*(int *)(D_00307D08 + 0x10) + 0x10 + D_00313AA8 * 0x18) != 0) {
    int i;
    func_00110060(*(int *)(D_00307DF8 + 0x2c), mat);
    v[0] = 0; v[1] = 0; v[2] = 1.0f;
    func_0012F610(v, mat);
    best = (char *)bi;
    for (i = 0, p += 0x10; i < 0x1a; i++, p += 0x130) {
      if (func_000E1EA0(i)) {
        float d;
        func_0012E6D0(tmp, p + 0x40, mat + 12);
        tmp[1] = 0;
        d = func_0012EA60(tmp);
        if (d < bd) { bd = d; best = p; bi = i; }
      }
    }
    if (bd <= D_001D27FC) {
      float *pf;
      func_0013E469(name, &D_001DBC18, bi);
      pf = func_0009C7A0(D_00308158, name, 0);
      func_000E1F20(best);
      *pf = (float)*(signed char *)(best + 0x126);
    }
  }
}

