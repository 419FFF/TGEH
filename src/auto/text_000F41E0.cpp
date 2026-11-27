/* 10 functions from 0x000F41E0 to 0x000F4C88, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
static __forceinline void DetachF49Frame(int frame)
{
 int func_00110420(...);
 if(*(volatile int*)(frame+0x2c))
  func_00110420(**(int**)(frame+0x2c),frame);
}
struct F4760Params {
 int kind; float color[3]; int flags[2]; float scale; int tail[2];
 F4760Params() { volatile F4760Params *p=this; p->kind=0; p->color[0]=0; p->color[1]=0; p->color[2]=0; p->flags[0]=0; p->flags[1]=0; p->scale=0; p->tail[0]=0; p->tail[1]=0; }
};

struct F4Owner { char pad0[0x22]; unsigned char id; char pad1[0x101]; unsigned char flags; };
struct F4Link { char pad[0x28e]; char active; };
struct F4Obj { char pad0[0x10]; unsigned char flags; char pad1[2]; char type; char pad2[0x18]; F4Owner *owner; char pad3[0xe0]; F4Link *link; int busy; };
struct F4Out { float x, y, z; char pad0[3]; char shade; char pad1[0x10]; float s0; float s1; };
struct F4Ent { F4Obj *obj; float x, y, z; int state; float t; float limit; float phase; F4Out *out; };
struct F4St { int state; float t; float limit; float phase; F4Out *out; int pad[4]; };

int func_000F42D0(void)
{
 extern int D_00324830; extern int D_00324828; extern float D_001D27B8;
 int i; float *p;
 i=0;if(0<D_00324830){p=(float *)(D_00324828+0x20);do{if(*p==D_001D27B8)return i*0x30+D_00324828;i++;p+=0xc;}while(i<D_00324830);}return 0;
}

void func_000F4320(void)
{
  extern undefined4 D_00324828;
  int func_00116FB0(...);
  extern undefined4 D_00324834;
  extern undefined4 D_0032483C;
  int func_0013C020(...);
  int func_000688D0(...);
  extern undefined4 D_0032482C;
  int func_0011B990(...);
  int iVar1;
  
  if (D_00324828 != 0) {
    func_00116FB0(D_00324828);
    D_00324828 = 0;
  }
  if (D_00324834 != 0) {
    func_00116FB0(D_00324834);
    D_00324834 = 0;
  }
  if (D_0032483C != 0) {
    func_0013C020(D_0032483C);
    D_0032483C = 0;
  }
  func_000688D0();
  iVar1 = D_0032482C;
  *(short *)(D_0032482C + 0x2a) = *(short *)(D_0032482C + 0x2a) + -1;
  func_0011B990(iVar1);
  func_000688D0();
  return;
}

void func_000F4390(undefined4 param_1, undefined4 *param_2, undefined4 param_3, float param_4){extern int D_00324838;extern int D_00324824;extern float D_001D27B0;extern int D_00324834;extern float D_001D2B64;int func_00131760(...);int n=D_00324838;undefined4*p;if(D_00324824!=n){param_4=D_001D27B0/param_4;p=(undefined4 *)(D_00324834+n*0x24);p[0]=param_1;p[1]=param_2[0];p[2]=param_2[1];p[3]=param_2[2];*(float *)(p+6)=param_4*D_001D2B64;func_00131760();*(float *)(p+5)=*(float *)(p+6);p[4]=0;p[8]=0;D_00324838=n+1;}}

void func_000F4400(int param_1){extern int D_00324838;extern int D_00324834;int i=0;int *base=(int *)D_00324834;int *p=base;if(D_00324838>0){while(*p!=param_1){i++;p+=9;if(i>=D_00324838)return;}D_00324838--;if(p[8])*(int *)(p[8]+0x20)=0;for(i=0;i<9;i++)base[i*9+i]=base[i*9+i];}}

void func_000F4460(void)
{
  extern int D_00324838;
  extern F4St *D_00324834;
  extern int D_003268B0;
  extern float D_001D314C, D_001D2BB4, D_001D27B0, D_00329310, D_001D31C8, D_00329314, D_00329318;
  extern float D_001D6164, D_001D28E0, D_001D28E4, D_001D66D8, D_001D2B60;
  extern float D_001E5DE8[];
  F4St *s;
  F4Obj *o;
  F4Out *p;
  float *m;
  float *f;
  int func_001100A0(...);
  int __ftol2(...);
  char cl;
  int i;

  for (i = 0, s = (F4St *)((char *)D_00324834 + 0x10); i < D_00324838; i++, s++) {
    f = (float *)s;
    o = ((F4Obj **)s)[-4];
    if (o->type == 4 || o->type == 0x34) {
      cl = 0;
      if (o->owner->id == D_003268B0 && (o->owner->flags & 1)) {
        cl = 1;
      }
      if (o->link == 0 || o->link->active == 0 || o->busy != 0 || (o->flags & 2) != 0 || cl != 0) {
        goto cleanup;
      }
    }
    else if (o->flags & 2) {
cleanup:
      if (s->out != 0) {
        *(int *)((char *)s->out + 0x20) = 0;
        s->out = 0;
      }
      continue;
    }
    if (s->state == 0) {
      s->t = (double)s->t + D_001D314C;
      if (s->t > s->limit) {
        s->phase = 0;
        s->state = 1;
        s->out = (F4Out *)func_000F42D0();
      }
    }
    else {
      s->phase = (float)((long double)s->phase + (long double)D_001D2BB4);
      if (s->phase >= D_001D27B0) {
        s->t = 0;
        s->state = 0;
        s->phase = 0;
        if (s->out != 0) {
          *(int *)((char *)s->out + 0x20) = 0;
          s->out = 0;
        }
      }
    }
    if (s->state != 0 && (p = s->out) != 0) {
      func_001100A0(o->owner, &m);
      p->x = (double)m[8] * f[-1] + m[4] * f[-2] + m[0] * f[-3] + m[12];
      p->y = (double)m[9] * f[-1] + m[5] * f[-2] + f[-3] * m[1] + m[13];
      p->z = (double)m[10] * f[-1] + m[6] * f[-2] + f[-3] * m[2] + m[14];
      p->x = (float)((long double)p->x - (long double)D_00329310 * D_001D31C8);
      p->y = (float)((long double)p->y - (long double)D_00329314 * D_001D31C8);
      p->z = (float)((long double)p->z - (long double)D_00329318 * D_001D31C8);
      p->shade = (char)(int)(((double)D_001E5DE8[-(int)((long double)s->phase * D_001D6164)] * D_001D28E0 + D_001D28E4) * D_001D66D8);
      p->s0 = (double)D_001E5DE8[-(int)((long double)s->phase * D_001D6164)] * D_001D2B60;
      p->s1 = (double)D_001E5DE8[-(int)((long double)s->phase * D_001D6164)] * D_001D2B60;
    }
  }
}

void func_000F46A0(void){int func_000B5650(...);int func_0012F120(...);int func_001364D0(...);int func_00133F30(...);int func_0013C980(...);extern int D_00324820;extern int D_00324824;extern int D_00324828;extern int D_0032483C;char a[0x50];char b[0x50];int t[21]={0};if(!func_000B5650(5)){func_0012F120(a);func_001364D0(b);t[0]=2;t[1]=2;t[3]=D_00324820;t[7]=3;t[11]=4;t[12]=5;func_00133F30(t);if(D_00324824)func_0013C980(D_0032483C,D_00324828,0);}}

void func_000F4760(void)
{
  int func_001229B0(...);
  extern undefined D_001D5580;
  int func_00063F30(...);
  int func_0011F890(...);
  extern undefined D_001D68E4;
  int func_0012FE20(...);
  int func_001105E0(...);
  int func_0010FB70(...);
  extern undefined4 D_00324884;
  int func_0009C590(...);
  extern undefined D_001DCE38;
  extern undefined4 D_0032485C;
  extern undefined D_001DCE2C;
  extern undefined4 D_00324888;
  extern undefined D_001DCE24;
  int func_00110300(...);
  extern undefined D_001DCE18;
  void func_00110330(int, int);
  int func_00110420(...);
  extern undefined4 D_00324848;
  extern undefined4 D_00324850;
  extern undefined4 D_003248A0;
  extern int D_00324844,D_0032487C,D_00324880;
  int func_0012F120(...),func_00131990(...);
  extern char D_001D29C7;
  int iVar1;
  undefined4 uVar2;
  __declspec(align(16)) char local_50[64];
  
  D_00324844 = func_001229B0(((undefined *)&D_001D5580));
  func_00063F30(D_00324844,0x3f99999a,0x3fcccccd);
  {
  F4760Params a;
  a.kind = 1;
  a.flags[1] = 0;
  a.scale = 1.0f;
  a.tail[0] = 0;
  a.tail[1] = 0;
  a.color[0] = 1.0f;
  a.color[1] = 1.0f;
  a.color[2] = 1.0f;
  D_0032487C = func_0011F890(((undefined *)&D_001D68E4),&a);
  }
  func_0012F120(local_50);
  func_0012FE20(local_50,0xc02fedd6,0x4016cbdc,0);
  func_001105E0(D_0032487C,local_50,0);
  {
  F4760Params a;
  a.kind = 0;
  a.scale = 1.0f;
  a.color[0] = 0.3f;
  a.color[1] = 0.3f;
  a.color[2] = 0.4f;
  D_00324880 = func_0011F890(((undefined *)&D_001D68E4),&a);
  }
  func_0010FB70(D_00324844,D_0032487C,3);
  func_0010FB70(D_00324844,D_00324880,3);
  func_00131990(((undefined *)&D_001D29C7));
  D_00324884 = func_0009C590(((undefined *)&D_001DCE38));
  D_0032485C = func_0009C590(((undefined *)&D_001DCE2C));
  D_00324888 = func_0009C590(((undefined *)&D_001DCE24));
  if (D_0032485C != 0) {
    func_00110330(func_00110300(*(undefined4 *)(D_0032485C + 0x2c),((undefined *)&D_001DCE18),0x18),0);
  }
  if ((D_00324884 != 0) && (iVar1 = *(int *)(D_00324884 + 0x2c), *(volatile int *)(iVar1 + 0x2c) != 0)) {
    func_00110420(**(undefined4 **)(iVar1 + 0x2c),iVar1);
  }
  if ((D_0032485C != 0) && (iVar1 = *(int *)(D_0032485C + 0x2c), *(volatile int *)(iVar1 + 0x2c) != 0)) {
    func_00110420(**(undefined4 **)(iVar1 + 0x2c),iVar1);
  }
  if ((D_00324888 != 0) && (iVar1 = *(int *)(D_00324888 + 0x2c), *(volatile int *)(iVar1 + 0x2c) != 0)) {
    func_00110420(**(undefined4 **)(iVar1 + 0x2c),iVar1);
  }
  D_00324848 = 0;
  D_00324850 = 0;
  D_003248A0 = 0;
  return;
}

void func_000F49A0(void)
{
  int func_00110760(...);
  extern undefined4 D_0032487C;
  extern undefined4 D_00324880;
  extern undefined4 D_00324844;
  func_00110760(D_0032487C);
  func_00110760(D_00324880);
  func_00110760(D_00324844);
  return;
}

void func_000F49D0(int name, char activate)
{
 extern int D_00307DF8,D_003080B0,D_00307D00,D_00307CFC,D_002EED64;
 extern unsigned int D_00325160,D_003251C8,D_00325214,D_00325220,D_00325200,D_003251C4,D_00325150,D_003251AC;
 extern int D_00325218;
 extern char D_001D46D8,D_001D734C,D_001D42F0,D_001DCE44;
 int func_0009C590(...),func_00012D60(...),func_000F8FA0(...),func_0009D640(...),func_00110060(...),func_0009D3E0(...),func_00110420(...),func_0011B4F0(...),func_0009D280(...),func_0009D780(...),func_001105E0(...),func_00110000(...),func_00110480(...),func_0011BED0(...),func_0009BF40(...),func_0002FD50(...),func_000F9C00(...),func_000FA750(...);
 __declspec(align(16)) char matrix[64];
 int root;
 if(D_00307DF8){
  if(D_00307DF8==D_003080B0){
   int o=func_0009C590(&D_001D46D8);
   if(*(char*)(o+0x15)==0x1d)func_00012D60(o,0);
  }
  func_00012D60(D_00307DF8,0);
  func_000F8FA0(D_00307DF8);
  func_0009D640(D_00307DF8);
  func_00110060(*(int*)(D_00307DF8+0x2c),matrix);
  root=**(int**)(*(int*)(D_00307DF8+0x2c)+0x2c);
 }else{
  int f=*(int*)(D_003080B0+0x2c);
  root=**(int**)(f+0x2c);
  func_00110060(f,matrix);
 }
 func_0009D3E0(D_003080B0);
 func_0009D3E0(D_00307D00);
 func_0009D3E0(D_00307CFC);
 int f=*(int*)(D_003080B0+0x2c);
 if(*(volatile int*)(f+0x2c))func_00110420(**(int**)(f+0x2c),f);
 f=*(int*)(D_00307D00+0x2c);
 if(*(volatile int*)(f+0x2c))func_00110420(**(int**)(f+0x2c),f);
 f=*(int*)(D_00307CFC+0x2c);
 if(*(volatile int*)(f+0x2c))func_00110420(**(int**)(f+0x2c),f);
 int chosen;
 if(!func_0011B4F0(name,&D_001D734C))chosen=D_003080B0;
 else if(!func_0011B4F0(name,&D_001D42F0))chosen=D_00307D00;
 else chosen=D_00307CFC;
 D_00307DF8=chosen;
 if(activate)func_0009D280(chosen);
 func_0009D780(D_00307DF8);
 func_001105E0(*(int*)(D_00307DF8+0x2c),matrix,0);
 func_00110000(*(int*)(D_00307DF8+0x2c));
 func_00110480(root,*(int*)(D_00307DF8+0x2c),8);
 if(activate){
  func_0011BED0();func_0009BF40(D_00307DF8);func_00012D60(D_00307DF8,0x15);func_0011BED0();func_0002FD50(D_00307DF8);
 }else func_00012D60(D_00307DF8,0x15);
 func_000F8FA0(D_00307DF8);
 func_000FA750(func_000F9C00(D_00307DF8,&D_001DCE44));
 D_002EED64=D_00307DF8;
 unsigned int i=0;
 if(i<D_00325160)do{
  int e=*(int*)(D_00325218+i*4);
  unsigned int type=*(unsigned short*)(e+2);
  if(type==D_003251C8 || type==D_00325214 || type==D_00325220 || type==D_00325200 || type==D_003251C4 || type==D_00325150 || type==D_003251AC){
   int o=*(int*)(e+4);
   if(o==D_003080B0 || o==D_00307D00 || o==D_00307CFC)*(int*)(e+4)=D_00307DF8;
  }
  i++;
 }while(i<D_00325160);
}

// Global data definitions (inferred from usage)
extern int D_00324828;
extern int D_00324834;
extern int D_00324824;
extern int D_0032483C;
extern undefined1 D_001D29C7;
extern undefined1 D_001DCDF8;
extern int D_0032482C;
extern int D_00324820;
extern int D_00324830;
extern int D_00324838;

// Function prototypes (assuming void return unless assembly suggests otherwise)
void func_000688D0(void);
int func_00131990(undefined1 *arg1);
int func_0011BF40(undefined1 *arg1, int arg2);
int func_0011BDD0(int arg1, int arg2);
int func_00116A90(int arg1, int arg2, int arg3);
int func_0013C000(int arg1);
