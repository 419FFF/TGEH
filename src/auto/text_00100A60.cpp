/* 41 functions from 0x00100A60 to 0x00101A0D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_00100A60(int a0) {
    extern int D_001E5ED0;
    D_001E5ED0 = a0;
}

int func_00100A70(void) {
    extern int D_001E5ED0;
    return D_001E5ED0;
}

extern "C" char * __cdecl strcat(char *, const char *);
char *__cdecl _func_00100A80(char *s)
{
  extern char D_00324C00[];
  extern int D_001E5ED0;
  char *d = D_00324C00;
  int off = d - s;
  char c;
  do { c = *s; s[off] = c; s++; } while (c);
  if (D_001E5ED0 == 1) strcat(D_00324C00, "abcd");
  else if (D_001E5ED0 == 2) strcat(D_00324C00, "efgh");
  else if (D_001E5ED0 == 3) strcat(D_00324C00, "ijkl");
  else if (D_001E5ED0 == 4) strcat(D_00324C00, "mnop");
  else if (D_001E5ED0 == 5) strcat(D_00324C00, "qrst");
  return D_00324C00;
}
#pragma intrinsic(strcat)
void _func_00100B90(void) { extern unsigned char D_001E5EC8; int _func_0013ACC0(...); int _func_000688D0(...); int _func_00128830(...); if(D_001E5EC8){ _func_0013ACC0(0x3c23d70a); _func_000688D0(3,0x3e4ccccd,0x40,0x40); _func_00128830(0x19); } }

void _func_00100BC0(float v) { extern unsigned char D_001E5EC8; extern volatile float D_001D3330,D_00324D04; if(D_001E5EC8) D_00324D04=v*D_001D3330; }

void _func_00100BE0(float v) { extern unsigned char D_001E5EC8; extern volatile float D_001D3330,D_00324D10; extern unsigned int D_00324D0C; if(D_001E5EC8){ D_00324D0C=*(unsigned int*)&v; D_00324D10=v*D_001D3330; } }

void func_00100C10(unsigned int param_1) {
    extern unsigned char D_001E5EC8;
    extern unsigned int D_00324D08;
    if (D_001E5EC8 != 0) {
        D_00324D08 = param_1;
    }
}

void _func_00100C30(float value) { extern unsigned char D_001E5EC8; extern volatile float D_001D27B8,D_001D27B0,D_00324D14; if(D_001E5EC8){ if(value<D_001D27B8){D_00324D14=D_001D27B8;return;} if(D_001D27B0<value)D_00324D14=D_001D27B0; } }

float _func_00100C80(void) {
    extern unsigned char D_001E5EC8;
    extern volatile float D_001D27B8;
    extern volatile float D_00324D14;
    if (D_001E5EC8 == 0) goto other;
    return D_001D27B8;
other:
    return D_00324D14;
}

float _func_00100CF0(void) {
    extern unsigned char D_001E5EC8;
    extern volatile float D_001D27B8;
    extern volatile float D_00324D18;
    if (D_001E5EC8 == 0) goto other;
    return D_001D27B8;
other:
    return D_00324D18;
}

float _func_00100D60(void) {
    extern unsigned char D_001E5EC8;
    extern volatile float D_001D27B8;
    extern volatile float D_00324D20;
    if (D_001E5EC8 == 0) goto other;
    return D_001D27B8;
other:
    return D_00324D20;
}

char func_00100D80(void) {
    extern char D_001E5EC8;
    return D_001E5EC8;
}

char func_00100D90(void) {
    extern char D_001E5EC9;
    return D_001E5EC9;
}

void _func_00100DA0(void) { extern int D_00324BD4,D_001DE340,D_001DE330,D_001DE31C; int _func_000688D0(...); int _func_00128C90(...); int _func_0013AE30(...); if(D_00324BD4){_func_000688D0(0xe,&D_001DE340);_func_00128C90(D_00324BD4);_func_000688D0(0xe);} _func_000688D0(0xb,&D_001DE330); _func_0013AE30(); _func_000688D0(0xb); _func_000688D0(0xc,&D_001DE31C); _func_000688D0(); _func_000688D0(0xc); }

void _func_00100E00(unsigned int v) { extern unsigned char D_001E5EC8,D_00324D45; extern int D_00324BE8; int _func_00102E40(...); int _func_00105280(...); int _func_001052A0(...); void _func_00100DA0(...); if(D_001E5EC8){ D_00324D45=(unsigned char)v; _func_00102E40(v); if(D_00324BE8){ if((unsigned char)v)_func_00105280();else _func_001052A0(); } _func_00100DA0(); } }

void func_00100E50(void)
{
  int func_00068450(...);
  int func_00104B30(...);
  int func_00100880(...);
  int func_001395C0(...);
  func_00068450();
  func_00104B30();
  func_00100880();
  func_001395C0();
  return;
}

void func_00100E70(void) {
    extern char D_00324D64;
    D_00324D64 = 1;
}

void _func_00101080(void) { extern int D_003080AC; void _func_001007D0(int); void _func_00102470(void); _func_001007D0(D_003080AC != 0); _func_00102470(); }

void func_001010A0(void) {
    int func_00104B70(...);
    func_00104B70();
}

void _func_001010B0(void) { extern int D_00324D60,D_00307D04; extern int D_00324D48[]; int _func_00116800(...); int _func_00103990(...); int _func_00116820(...); if(D_00324D48[D_00324D60]) { _func_00116800(D_00307D04); _func_00103990(D_00324D48[D_00324D60],0); _func_00116820(); register int ecx=D_00324D60; ecx++; ecx &= 0x80000003; if(ecx<0)ecx=(ecx-1|0xfffffffc)+1; D_00324D60=ecx; } }

void _func_00101110(int mode)
{
  extern char _D_001DE478[], _D_001DE46C[], _D_001DE460[], _D_001DE458[], _D_001DE450[], _D_001DE448[], _D_001DE43C[], _D_001DE42C[], _D_001DE41C[], _D_001DE410[], _D_001DE404[], _D_001DE3F8[], _D_001DE3EC[], _D_001DE3E4[], _D_001DE3DC[], _D_001DE3D4[], _D_001DE3CC[], _D_001DE3C0[], _D_001DE3B4[];
  char _func_00100D80(void);
  void _func_001052F0(char *);
  void _func_00105340(char *, int);
  if (_func_00100D80()) {
    switch (mode) {
    case 3:
    case 9:
      _func_001052F0(_D_001DE478);
      return;
    case 4:
      _func_001052F0(_D_001DE46C);
      return;
    case 5:
      _func_001052F0(_D_001DE460);
      _func_00105340(_D_001DE458, 1);
      _func_00105340(_D_001DE450, 1);
      _func_00105340(_D_001DE448, 1);
      _func_00105340(_D_001DE43C, 1);
      _func_00105340(_D_001DE42C, 1);
      _func_00105340(_D_001DE41C, 1);
      _func_00105340(_D_001DE410, 1);
      _func_00105340(_D_001DE404, 1);
      _func_00105340(_D_001DE3F8, 1);
      break;
    case 6:
      _func_001052F0(_D_001DE3EC);
      _func_00105340(_D_001DE3E4, 1);
      _func_00105340(_D_001DE3DC, 1);
      _func_00105340(_D_001DE3D4, 1);
      _func_00105340(_D_001DE3CC, 1);
      return;
    case 7:
      _func_001052F0(_D_001DE3C0);
      return;
    case 8:
      _func_001052F0(_D_001DE3B4);
      return;
    }
  }
}

void func_00101240(void) {
    int func_00105D10(...);
    func_00105D10();
}

void func_00101250(void) {
    extern int D_00307DB4;
    int func_00105D40(...);
    func_00105D40(D_00307DB4, 0);
}

void _func_00101360(void) { extern int D_00307CFC,D_00324D78,D_00324D74,D_00324D7C; extern char D_001DE4E4,D_001DE4D8,D_001DE4CC,D_001DE4C0,D_001DE4B4,D_001DE4A8,D_001DE49C; int _func_001031C0(int,const char*); void _func_00102E80(int); D_00324D78=0; D_00324D74=0; if(D_00307CFC){ _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4E4)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4D8)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4CC)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4C0)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4B4)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE4A8)); _func_00102E80(_func_001031C0(D_00307CFC,&D_001DE49C)); } D_00324D7C=0; }

void func_001015F0(undefined4 param_1)
{
  int func_00100E00(...);
  int func_001049F0(...);
  int func_000688B0(...);
  func_00100E00(param_1);
  func_001049F0(param_1);
  func_000688B0(param_1);
  return;
}

void func_00101610(void)
{
  int func_00103210(...);
  extern undefined D_001DE51C;
  int func_00102E80(...);
  extern undefined D_001DE504;
  extern undefined D_001DE4F0;
  undefined4 uVar1;
  
  uVar1 = func_00103210(((undefined *)&D_001DE51C));
  func_00102E80(uVar1);
  uVar1 = func_00103210(((undefined *)&D_001DE504));
  func_00102E80(uVar1);
  uVar1 = func_00103210(((undefined *)&D_001DE4F0));
  func_00102E80(uVar1);
  return;
}

void _func_00101650(int value) { extern int D_00324D84; int _func_000B57F0(void); void _func_001031A0(int,int); if(D_00324D84 && _func_000B57F0()) { value=0; _func_001031A0(D_00324D84,value); } }

void func_00101680(int a0) {
    extern int D_001E5ED8;
    D_001E5ED8 = a0;
}

void func_00101690(int a0) {
    extern int D_00324D6C;
    D_00324D6C = a0;
}

void _func_001016A0(void)
{
  extern unsigned int _D_00313B54, _D_00313B6C;
  extern int _D_00324D6C, _D_001E46C0, _D_00307DF8, _D_002EED18, _D_00313B60, _D_003080AC;
  extern short _D_00313A78, _D_00313A7A, _D_00313A7C;
  extern float _D_001D29E0;
  void _func_00102090(unsigned char);
  void _func_001019C0(int);
  void _func_001007F0(void);
  void _func_00100BC0(float);
  void _func_00100BE0(float);
  void _func_00100C10(float);
  void _func_00068340(unsigned char);
  void _func_00100770(int);
  void _func_00100750(int);
  void _func_00100790(int);
  void _func_001007D0(unsigned char);
  void _func_00100A60(int);
  void _func_00101360(void);
  void _func_00104AB0(void);
  unsigned char m;
  _D_00324D6C = 0;
  m = 0xff;
  if (_D_00313B54 >= 3 && _D_00313B54 <= 8)
    m = (unsigned char)(1 << (_D_00313B54 - 3));
  _func_00102090(m);
  _func_001019C0(_D_001E46C0);
  _func_001007F0();
  _func_00100BC0((float)((longdouble)_D_00313A78 * _D_001D29E0));
  _func_00100BE0((float)((longdouble)_D_00313A7A * _D_001D29E0));
  _func_00100C10((float)((longdouble)_D_00313A7C * _D_001D29E0));
  _func_00068340(_D_00313B54 == 4 || _D_00313B54 == 6 || _D_00313B54 == 7 || _D_00313B54 == 3);
  _func_00100770(_D_00307DF8);
  _func_00100750(_D_002EED18);
  _func_00100790(_D_00313B60);
  _func_001007D0(_D_003080AC != 0);
  if (_D_00313B6C == 0) _func_00100A60(1);
  if (_D_00313B6C == 1) _func_00100A60(2);
  if (_D_00313B6C == 2) _func_00100A60(4);
  if (_D_00313B6C == 3) _func_00100A60(1);
  if (_D_00313B6C == 4) _func_00100A60(1);
  _func_00101360();
  _func_00104AB0();
}

void _func_00101810(void) { extern int D_00324D48,D_00324D4C,D_00324D50,D_00324D54,D_00324D58,D_00324D84; extern char D_001DE5B0,D_001DE5A4,D_001DE590,D_001DE57C,D_001DE568,D_001DE554,D_001DE544,D_001DE534; int _func_0009C590(const char*); int _func_00100A20(int); int _func_00100A40(int); int _func_00103210(const char*); int _func_001031A0(int,int); int _func_00103990(int,int); _func_00100A20(_func_0009C590(&D_001DE5B0)); _func_00100A40(_func_0009C590(&D_001DE5A4)); D_00324D48=_func_00103210(&D_001DE590); D_00324D4C=_func_00103210(&D_001DE57C); D_00324D50=_func_00103210(&D_001DE568); D_00324D54=_func_00103210(&D_001DE554); D_00324D58=_func_00103210(&D_001DE544); D_00324D84=_func_00103210(&D_001DE534); if(D_00324D84){_func_001031A0(D_00324D84,0);_func_00103990(D_00324D84,1);} }

void _func_001018B0(void) { extern int D_00307D04,D_003080AC,D_00313910,D_00307DF8,D_002EED18,D_00313B60,D_00324D6C; extern float D_0031391C,D_001D2BF8; extern unsigned char D_002F7318; unsigned char _func_00100D80(void); int _func_00116800(int); int _func_00100BC0(int),_func_00100BE0(int),_func_00100C10(int); int _func_00100770(int),_func_00100750(int),_func_00100790(int); void _func_001007D0(unsigned char); int _func_001009C0(int),_func_001009B0(int); int _func_00100E80(void),_func_00101430(void),_func_00068740(void),_func_00116820(void); if(_func_00100D80()){_func_00116800(D_00307D04); if(D_003080AC==5 && D_00313910==4 && D_0031391C>D_001D2BF8){_func_00100BC0(0);_func_00100BE0(0);_func_00100C10(0);} _func_00100770(D_00307DF8);_func_00100750(D_002EED18);_func_00100790(D_00313B60);_func_001007D0(D_003080AC!=0);_func_001009C0(D_002F7318);_func_001009B0(D_00324D6C);_func_00100E80();_func_00101430();_func_00068740();_func_00116820();} }

void func_00101970(int param_1)
{
  extern undefined4 D_00324D78;
  int func_00101360(...);
  D_00324D78 = param_1;
  if (param_1 == 0) {
    func_00101360();
    return;
  }
  return;
}

void func_00101990(int param_1, ushort param_2, char param_3)
{
  if (param_3 != '\0') {
    *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) | param_2;
    return;
  }
  *(ushort *)(param_1 + 0xb6) = *(ushort *)(param_1 + 0xb6) & ~param_2;
  return;
}

void func_001019C0(int a0) {
    extern int D_00324EAC;
    D_00324EAC = a0;
}

void func_001019D0(int param_1)
{
  int func_001100A0(...);
  extern undefined4 D_00324BD4;
  int func_0012E6D0(...);
  int func_0012E940(...);
  int local_14;
  undefined1 local_10 [16];
  
  func_001100A0(D_00324BD4,&local_14);
  func_0012E6D0(local_10,param_1 + 0xe4,local_14 + 0x30);
  func_0012E940(local_10);
  return;
}
void _func_00101430(void)
{
    extern int D_003080AC, D_00324D7C;
    void _func_00101360(void);
    if (D_003080AC == 2) {
        if (0 < D_00324D7C) {
            _func_00101360();
            return;
        }
    }
}
