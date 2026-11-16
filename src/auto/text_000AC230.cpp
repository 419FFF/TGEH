/* 7 functions from 0x000AC230 to 0x000AD0DE, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

  void func_000AC230(void){
  extern int D_003138FC,D_00308158,D_003138C8,D_003138CC,D_00313804,D_00313808,D_0031380C,D_00313810,D_003138EC,D_003138F0,D_003138F4,D_003138F8,D_003138B8,D_003138BC,D_003138C0,D_003138C4,D_003138D0,D_003138D4,D_003138D8,D_003138DC,D_003138E4,D_003138E5,D_003138E6,D_003138E7,D_003138E8,D_00313900,D_00313904,D_00313908,D_00313800,D_003138B4,D_00313818,D_00313880;
  extern float D_003138AC,D_003138B0,D_001D27B8;
  extern char D_001D85B0,D_001D85A8,D_001D8018,D_001D7AB8,D_001D8594,D_001D7AAC,D_001D8588,D_001D857C,D_001D8570,D_001D8564,D_001D8558,D_001D854C,D_001D8540,D_001D8524,D_001D8514,D_001D8504,D_001D84F4,D_001D84EC,D_001D84D8,D_001D836C,D_001D8358,D_001D8348,D_001D8338,D_001D8328,D_001D8318,D_001D8308,D_001D82F4,D_001D84CC,D_001D84D4,D_001D84C4,D_001D84B8,D_001D84B0,D_001D84A8,D_001D84A0,D_001D8498,D_001D8490,D_001D8484,D_001D8478,D_001D8468,D_001D8470,D_001D8460,D_001D8458,D_001D8448,D_001D8450,D_001D8440,D_001D8438,D_001D8430,D_001D8428,D_001D84EC,D_001D8420,D_001D8410,D_001D8418,D_001D8404,D_001D83FC,D_001D83F4,D_001D83E8,D_001D83DC,D_001D83D0,D_001D83C4,D_001D83B8,D_001D83A8,D_001D8398,D_001D838C,D_001D837C;
  int func_00100540(...);int func_00110300(...);int func_00110330(...);float func_00131760(...);int func_0009C590(...);int func_0009D3E0(...);int func_0009C7A0(...);int func_0009F820(...);int func_000F9280(...);int func_000F93A0(...);int func_000F91D0(...);int func_000F7EF0(...);int func_00103210(...);int func_000CA850(...);int func_0006FD50(...);int func_00066200(...);
  int zero8=0; D_003138FC=func_00100540(&D_001D85B0);D_003138C8=func_00110300(*(int*)(D_00308158+0x2c),&D_001D85A8,0x18);D_003138CC=zero8;D_003138AC=func_00131760();D_003138B0=func_00131760();
  int x=func_0009C590(&D_001D8018);if(x){func_0009D3E0(x);float *f=(float*)func_0009C7A0(D_00308158,&D_001D7AB8,zero8);double compare=*f;if(compare==(double)D_001D27B8)func_0009D3E0(func_0009C590(&D_001D8594));else func_0009D3E0(func_0009C590(&D_001D7AAC));if(func_0009F820()&8)func_0009D3E0(func_0009C590(&D_001D8594));}
  D_00313804=func_000F9280(&D_001D8588);D_00313808=func_000F9280(&D_001D857C);D_0031380C=func_000F9280(&D_001D8570);D_00313810=func_000F9280(&D_001D8564);
  D_003138EC=0;D_003138F0=0;D_003138F4=0;D_003138F8=0;
  D_003138B8=func_000F9280(&D_001D8558);D_003138BC=func_000F9280(&D_001D854C);D_003138C0=func_000F9280(&D_001D8540);D_003138C4=func_000F9280(&D_001D8524);D_003138D0=func_000F9280(&D_001D8514);D_003138D4=func_000F9280(&D_001D8504);D_003138D8=func_000F9280(&D_001D84F4);D_003138DC=func_000F9280(&D_001D84F4);
  func_00110330(*(int*)D_003138B8,1);func_00110330(*(int*)D_003138BC,1);func_00110330(*(int*)D_003138C0,1);func_00110330(*(int*)D_003138C4,1);func_00110330(*(int*)D_003138D0,0);func_00110330(*(int*)D_003138D4,0);func_00110330(*(int*)D_003138D8,0);func_00110330(*(int*)D_003138DC,0);
  D_003138E4=0;D_003138E5=0;D_003138E6=0;D_003138E7=0;D_003138E8=func_000F91D0(&D_001D84EC);D_00313900=func_00110300(*(int*)(D_00308158+0x2c),&D_001D84D8,zero8);
  func_000F93A0(&D_001D84CC,&D_001D84D4);
  func_000F93A0(&D_001D84C4,&D_001D84D4);
  func_000F93A0(&D_001D84B8,&D_001D84C4);
  func_000F93A0(&D_001D84C4,&D_001D84B8);
  func_000F93A0(&D_001D84B0,&D_001D84D4);
  func_000F93A0(&D_001D84A8,&D_001D84D4);
  func_000F93A0(&D_001D84A0,&D_001D84D4);
  func_000F93A0(&D_001D84CC,&D_001D84D4);
  func_000F93A0(&D_001D8498,&D_001D84D4);
  func_000F93A0(&D_001D84D4,&D_001D8498);
  func_000F93A0(&D_001D84C4,&D_001D84D4);
  func_000F93A0(&D_001D8490,&D_001D84D4);
  func_000F93A0(&D_001D84A8,&D_001D84D4);
  func_000F93A0(&D_001D84A0,&D_001D84D4);
  func_000F93A0(&D_001D84CC,&D_001D84D4);
  func_000F93A0(&D_001D8484,&D_001D84D4);
  func_000F93A0(&D_001D84B8,&D_001D84D4);
  func_000F93A0(&D_001D8478,&D_001D84D4);
  func_000F93A0(&D_001D8484,&D_001D84D4);
  func_000F93A0(&D_001D84B8,&D_001D84D4);
  func_000F93A0(&D_001D8478,&D_001D84D4);
  func_000F93A0(&D_001D8468,&D_001D8470);
  func_000F93A0(&D_001D8468,&D_001D8460);
  func_000F93A0(&D_001D8468,&D_001D8458);
  func_000F93A0(&D_001D8448,&D_001D8450);
  func_000F93A0(&D_001D8448,&D_001D8440);
  func_000F93A0(&D_001D8448,&D_001D8438);
  func_000F93A0(&D_001D8450,&D_001D8430);
  func_000F93A0(&D_001D8450,&D_001D8440);
  func_000F93A0(&D_001D8430,&D_001D8440);
  func_000F93A0(&D_001D8430,&D_001D8438);
  func_000F93A0(&D_001D8430,&D_001D8428);
  func_000F93A0(&D_001D8430,&D_001D8450);
  func_000F93A0(&D_001D84EC,&D_001D8428);
  func_000F93A0(&D_001D84EC,&D_001D8420);
  func_000F93A0(&D_001D8438,&D_001D8440);
  func_000F93A0(&D_001D8438,&D_001D8430);
  func_000F93A0(&D_001D8428,&D_001D84EC);
  func_000F93A0(&D_001D8428,&D_001D8430);
  func_000F93A0(&D_001D8410,&D_001D8418);
  func_000F93A0(&D_001D8468,&D_001D8404);
  func_000F7EF0(func_000F91D0(&D_001D8458,func_000F91D0(&D_001D8410)));
  func_000F7EF0(func_000F91D0(&D_001D8458,func_000F91D0(&D_001D83FC)));
  func_000F7EF0(func_000F91D0(&D_001D8458,func_000F91D0(&D_001D84CC)));
  func_000F7EF0(func_000F91D0(&D_001D8418,func_000F91D0(&D_001D84C4)));
  func_000F7EF0(func_000F91D0(&D_001D83FC,func_000F91D0(&D_001D84C4)));
  func_000F7EF0(func_000F91D0(&D_001D83F4,func_000F91D0(&D_001D84CC)));
  func_000F7EF0(func_000F91D0(&D_001D83F4,func_000F91D0(&D_001D84C4)));
  func_000F7EF0(func_000F91D0(&D_001D8410,func_000F91D0(&D_001D84C4)));
  func_000F7EF0(func_000F91D0(&D_001D84C4,func_000F91D0(&D_001D83FC)));
  func_000F7EF0(func_000F91D0(&D_001D83DC,func_000F91D0(&D_001D83E8)));
  func_000F7EF0(func_000F91D0(&D_001D83C4,func_000F91D0(&D_001D83D0)));
  func_000F7EF0(func_000F91D0(&D_001D83A8,func_000F91D0(&D_001D83B8)));
  func_000F7EF0(func_000F91D0(&D_001D8398,func_000F91D0(&D_001D83D0)));
  func_000F7EF0(func_000F91D0(&D_001D8398,func_000F91D0(&D_001D838C)));
  func_000F7EF0(func_000F91D0(&D_001D83A8,func_000F91D0(&D_001D837C)));
  D_00313904=func_00103210(&D_001D836C);D_00313908=func_00103210(&D_001D8358);
  D_00313800=func_00110300(*(int*)(D_00308158+0x2c),&D_001D8348,zero8);D_003138B4=func_00110300(*(int*)(D_00308158+0x2c),&D_001D8338,zero8);D_00313818=zero8;D_00313880=0x78;
  func_00110330(D_00313800,1);func_00110330(D_003138B4,zero8);func_000CA850();
  func_0006FD50(&D_001D8328);func_0006FD50(&D_001D8318);func_0006FD50(&D_001D8308);func_0006FD50(&D_001D82F4);
  func_00066200();}

void func_000AC9B0(void) {
    extern int D_003138FC;
    int func_00100730(...);
    func_00100730(D_003138FC);
}

void func_000ACE50(void *arg) {
    extern float D_001D27B8, D_001D85C0;
    extern float D_003138EC[4];
    extern unsigned int D_00313804[4];
    extern int D_00313904, D_00307DF8, D_003138E0, D_00313814;
    extern float __cdecl func_0012E870(void*,void*);
    extern void __cdecl func_00103960(int,int,int);
    unsigned int i;
    unsigned int local[3];
    for(i=0;i<4;i++) {
        if((long double)D_001D27B8==(long double)D_003138EC[i]) {
            unsigned int *p=(unsigned int*)D_00313804[i];
            local[0]=p[2];
            ((float*)local)[1]=*(float*)(p+3)-*(float*)(*(unsigned int**)p+5);
            local[2]=p[4];
            if(func_0012E870(arg,local)<D_001D85C0) {
                if(D_00313904) {
                    func_00103960(D_00313904,D_00307DF8,0);
                    D_003138E0=0; D_00313814=0;
                }
                *(unsigned char*)(*(unsigned int**)D_00313804[i]+0xd0)|=4;
                D_003138EC[i]=0x3a83126f;
            }
        }
    }
}

void func_000ACF20(void) {
 int func_001006C0(...); int func_000AC9C0(void); int func_00110330(...);
 extern int D_003138FC,D_00313880,D_00313818,D_00313800,D_003138B4,D_003138E8,D_00324AFC;
 extern unsigned char *D_00313900;
 func_001006C0(D_003138FC); func_000AC9C0();
 if (--D_00313880 == 0) { D_00313818 = (D_00313818 == 0); D_00313880=0x78;
   if (D_00313818) { func_00110330(D_00313800,1); func_00110330(D_003138B4,0); }
   else { func_00110330(D_00313800,D_00313818); func_00110330(D_003138B4,1); }
 }
 if (D_00324AFC == D_003138E8) { D_00313900[0x20] |= 1; return; }
 D_00313900[0x20] &= 0xfe;
}

void func_000ACFB0(int param_1, int param_2)
{
  extern undefined4 D_00313918;
  extern undefined4 D_00313910;
  int func_00070D50(...);
  int func_0009A0D0(...);
  D_00313918 = 2;
  if (param_1 != 0xb) {
    D_00313918 = param_1;
  }
  D_00313910 = (param_2 != 0) - 1 & 2;
  if (param_1 == 0xb) {
    func_00070D50(3);
    D_00313910 = 3;
  }
  func_0009A0D0(5);
  return;
}

extern void _func_000B6600(int);
extern int _func_0009C590(const void *);
extern void _func_00044C90(int, void *);
extern void _func_000B5800(void);
extern void _func_0009A160(void);
extern void _func_0005F310(int);
extern void _func_0005CCC0(int);
extern void _func_0005C800(void);
extern char _D_001D86A0, _D_001D8684, _D_001D8668, _D_001D864C, _D_001D8634, _D_001D8618, _D_001D85FC, _D_001D85E0, _D_001D85C4;
void _func_000AD000(int param_1)
{
    int local[3];
    int result;
    _func_000B6600(param_1);
    local[0] = 0;
    local[1] = 0x43480000;
    local[2] = 0;
    if (param_1 == 1) result = _func_0009C590(&_D_001D86A0);
    else if (param_1 == 2) result = _func_0009C590(&_D_001D8684);
    else if (param_1 == 3) result = _func_0009C590(&_D_001D8668);
    else if (param_1 == 4) result = _func_0009C590(&_D_001D864C);
    else if (param_1 == 5) result = _func_0009C590(&_D_001D8634);
    else if (param_1 == 6) result = _func_0009C590(&_D_001D8618);
    else if (param_1 == 10) result = _func_0009C590(&_D_001D85FC);
    else if (param_1 == 13) result = _func_0009C590(&_D_001D85E0);
    else if (param_1 == 16) result = _func_0009C590(&_D_001D85C4);
    else result = 0;
    if (result)
        _func_00044C90(result, local);
    _func_000B5800();
    _func_0009A160();
    _func_0009A160();
    _func_0005F310(0);
    _func_0005CCC0(1);
    _func_0005C800();
    _func_0005F310(0);
}

