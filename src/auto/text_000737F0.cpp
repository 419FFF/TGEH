/* 8 functions from 0x000737F0 to 0x00074754, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
#include "string.h"
extern unsigned int D_002FA56C, D_002FA524, D_0032B70C;
extern float D_002FA520, D_001D3E00, D_001D2C00, D_001D27B0, D_001D27EC;
extern unsigned char D_002FA5BB;
extern char D_001D4E88;

#pragma optimize("a", on)
void _func_000737F0(void *text, float x, float y, int selected)
{
 void _func_00120E00(int); void _func_00120EA0(int,int,int,int); void _func_00120ED0(int,int);
 void _func_00120F60(float); void _func_00120F70(float); void _func_00120F80(float,float);
 void _func_00120E50(float,float); void _func_00120E70(float,float,float,float);
 void _func_00121990(char *,char *); void _func_000688D0();
 char *p=(char *)text;
 void _func_00073600();
 D_002FA524=0; D_0032B70C=(unsigned int)&_func_00073600;
 _func_00120E00(D_002FA56C); _func_00120EA0(0,1,1,0); _func_00120ED0(4,5);
 _func_00120F60(1.0f); _func_00120F70(1.0f); _func_00120F80(2.0f,2.0f);
 _func_00120E50(x,y); _func_00120E70(.5f,.5f,.75f,.7f);
 if(*p=='^') {
 switch(p[1]) {
 case '0': _func_00120E70(1,1,1,.7f); break;
 case '1': _func_00120E70(0,0,0,.7f); break;
 case '2': _func_00120E70(1,.3f,.3f,.7f); break;
 case '3': _func_00120E70(.3f,1,.3f,.7f); break;
 case '4': _func_00120E70(.3f,.3f,1,.7f); break;
 case '5': _func_00120E70(.3f,.3f,1,.2f); break;
 default: _func_00120E70(.5f,.5f,.75f,.7f); break;
 }
 p+=2;
 } else if(selected) {
 _func_00120E70(1,(float)(((longdouble)*(volatile float *)&D_002FA520+D_001D27B0)*D_001D27EC),(float)((longdouble)*(volatile float *)&D_002FA520*D_001D3E00+D_001D2C00),.7f);
 D_002FA524=selected;
 }
 _func_00121990(&D_001D4E88,p); D_0032B70C=0; _func_000688D0(); D_002FA5BB=0;
}
#pragma optimize("", on)
void func_00073A20(void)
{
  int func_00136450(...);
  int func_000733C0(...);
  int func_0009D080(...);
  int func_000F7CE0(...);
  int func_00103400(...);
  extern undefined4 D_002FA548;
  extern undefined4 D_002FA59C;
  int func_000AFD00(...);
  extern undefined4 D_002FA554;
  int func_00110760(...);
  extern undefined4 D_002FA55C;
  int func_001160B0(...);
  extern undefined4 D_002FA5B0;
  extern undefined4 D_002FA58C;
  extern undefined4 D_002FA584;
  int func_0011B990(...);
  extern undefined4 D_002FA37C;
  extern undefined4 D_002FA590;
  extern undefined4 D_002FA578;
  extern undefined4 D_002FA54C;
  extern undefined4 D_002FA3D0;
  extern undefined4 D_002FA504;
  extern undefined4 D_002FA5A0;
  extern undefined4 D_00312D74;
  int func_00120DD0(...);
  extern undefined4 D_002FA56C;
  int func_001053A0(...);
  extern undefined4 D_00307D18;
  extern undefined4 D_003291E0;
  extern undefined4 D_002FA53C;
  int func_00104080(...);
  int func_001040C0(...);
  extern undefined D_002FA5B6;
  extern undefined D_002FA5B7;
  func_00136450();
  func_000733C0();
  func_0009D080();
  func_000F7CE0();
  func_00103400(D_002FA548);
  func_00103400(D_002FA59C);
  func_000AFD00(D_002FA554);
  func_00110760(D_002FA55C);
  func_001160B0(D_002FA5B0);
  func_001160B0(D_002FA58C);
  func_001160B0(D_002FA584);
  func_0011B990(D_002FA37C);
  func_0011B990(D_002FA590);
  func_0011B990(D_002FA578);
  func_0011B990(D_002FA54C);
  func_0011B990(D_002FA3D0);
  func_0011B990(D_002FA504);
  func_0011B990(D_002FA5A0);
  if (D_00312D74 != 0) {
    func_0011B990(D_00312D74);
  }
  D_00312D74 = 0;
  func_00120DD0(D_002FA56C);
  func_001053A0(D_00307D18);
  D_003291E0 = D_002FA53C;
  func_00104080();
  func_001040C0();
  D_002FA5B6 = 0;
  D_002FA5B7 = 0;
  return;
}

void func_00073DD0(void) {
 extern int D_002FA574,D_002FA544,D_002FA380[]; extern unsigned char D_002FA3D8[],D_002FA4F8[];
 extern float D_001D2E24,D_001D2A24,D_001D27B0,D_001E3EF8,D_001D6018,D_001D3E00;
 struct Entry { char *text; int unk; void (*callback)(int); }; int *out=(int*)D_002FA3D8; int i=0,offset=0; D_002FA574=0;
 do { struct Entry *entry=(struct Entry *)(*(int *)(D_002FA380+D_002FA544)+offset); if(entry->text&&entry->text[0]=='-') return;
 out[0]=0x436b0000;out[1]=0x44750000;out[6]=0;out[7]=0;out[8]=0;
 *(float*)(out+3)=(float)((longdouble)i*D_001D2E24+D_001D2A24);
 { longdouble t=(longdouble)D_001D27B0/(longdouble)D_001E3EF8*D_001D6018; *(float*)(out+4)=(float)t; *(float*)(out+5)=(float)(((longdouble)D_001D27B0-t*t)*D_001D3E00); }
 if(entry->callback)entry->callback(-1);++i;out+=9;offset+=0xc;
 } while ((unsigned char*)out<D_002FA4F8);
}

void func_00073EA0(int param_1)
{
  int func_000B0E30(...);
  extern undefined4 D_002FA544;
  extern undefined4 D_002FA550;
  int func_00073DD0(...);
  if (param_1 == -1) {
    func_000B0E30();
    D_002FA544 = 0;
    D_002FA550 = 0;
    func_00073DD0();
    return;
  }
  return;
}

void func_00073EC0(void) {
 extern char D_0031151A,D_0031151B,D_003104B8[256],D_00311516,D_00311515;
 extern short D_00311518,D_00313A78,D_00313A7A;
 extern char D_00311514;
 extern int D_002FA548,D_002FA59C;
 void func_00103430(int); void func_0009F010(void);
 char save[32]; int i=0;
 char a=D_0031151A,b=D_0031151B;
 do { save[i]=D_003104B8[i]; } while(save[i++] != 0);
 func_00103430(D_002FA548); func_00103430(D_002FA59C); func_0009F010();
 i=0; do { D_003104B8[i]=save[i]; } while(save[i++] != 0);
 D_0031151A=a; D_0031151B=b;
 D_00311518=D_00311518; D_00311514=3;
 D_00313A78=a; D_00313A7A=b;
}

void _func_00073F90(int param_1)
{
  extern char D_0031151A, D_0031151B, D_003104B8[256];
  extern char D_00311516, D_00311515, D_00311514, D_002FA5B4;
  extern short D_00311518;
  extern int D_002FA548, D_002FA59C, D_002FA5C0, D_00313A70;
  void _func_00103430(int); void _func_0009F010(void); int _func_00071140(void);
  if (param_1 == -1) {
    char save[32]; int i=0;
    char a=D_0031151A, b=D_0031151B;
    char d=D_00311516, e=D_00311515;
    short f=D_00311518;
    do { save[i]=D_003104B8[i]; } while(save[i++]!=0);
    D_002FA5C0=0;
    _func_00103430(D_002FA548);
    _func_00103430(D_002FA59C);
    _func_0009F010();
    i=0; do { D_003104B8[i]=save[i]; } while(save[i++]!=0);
    D_00311518=f; D_00311515=e; D_0031151A=a; D_0031151B=b; D_00311516=d;
    D_00311514=3; D_002FA5B4=1;
    return;
  }
  if(param_1==-3 && _func_00071140()==0xb) D_00313A70=3;
}

void *memcpy(void *, const void *, unsigned int);
#pragma intrinsic(memcpy)
                         void _func_00074080(int param_1)
                         {
                           extern unsigned int D_001D6080;
                           int _func_000B0E60(...);
                           extern unsigned int D_002FA5D8, D_002FA558;
          extern unsigned char D_002FA5D4[8];
                 extern volatile unsigned int D_002FA5D0, D_002FA5CC;
      extern unsigned int D_002FA5C8;
               extern unsigned int D_002FA5C4;
                           extern unsigned char D_002FA5DC, D_003104B8, D_002FA5D5, D_002FA5BB;
                           void _func_000B0E80(unsigned int, int);
   int _func_000B0FA0(...);
              unsigned char _func_000B50B0(...);
                           int _func_00073EC0(...), _func_00071140(...), _func_00073B40(...);
                           extern unsigned int D_002FA4FC, D_002FA550, D_00313A70, D_00313B6C;
                   extern float D_002FA3E0;
                           void _func_000737F0(void *, float, float, int);
                           extern unsigned int D_001D6074, D_001D606C, D_001D6044, D_001D6060, D_001D6050, D_001D6024, D_001D601C, D_001D6038, D_001D6030;
                           extern float D_001D2804, D_001D605C, D_001D4270;
                           unsigned char local[76];
                           unsigned char *p;
                           int i, state; unsigned int sel;
                           float y;
                           memcpy(local, &D_001D6080, 75);
                           if (param_1 == 0xffffffff) {
                             if (_func_000B0E60()!=0x259) {
                               *(unsigned int *)&D_002FA5D4[0]=0x5f5f5f5f;
                               D_002FA5D8=0x5f5f5f5f;
                               D_002FA5DC=0x5f;
                               D_002FA5D0=0;
                               D_002FA5CC=0;
                               D_002FA5C8=0;
                               D_002FA5DC=0;
                             }
                             D_002FA5C4=0; _func_000B0E80(D_002FA558,1); return;
                           }
                           if (param_1 == 0xfffffffe) {
                           switch(D_002FA5CC){case 0:D_002FA5BB=D_002FA5D0+'A';break;case 1:D_002FA5BB=D_002FA5D0+'J';break;case 2:D_002FA5BB=D_002FA5D0+'S';break;default:D_002FA5BB=0;}
                           _func_000737F0(local,D_002FA3E0,220.0f,0);
                           state=D_00313B6C;
                           sel=(D_002FA5D0==0&&D_002FA5CC==3);
                           switch(state){
                           case 0:
                             _func_000737F0(&D_001D6074,D_002FA3E0,295.0f,sel);
                             sel=(D_002FA5D0==1&&D_002FA5CC==3); y=D_002FA3E0+D_001D2804;
                             _func_000737F0(&D_001D606C,y,295.0f,sel); break;
                           case 1:
                             _func_000737F0(&D_001D6044,D_002FA3E0,295.0f,sel);
                             sel=(D_002FA5D0==1&&D_002FA5CC==3); y=D_002FA3E0+D_001D605C;
                             _func_000737F0(&D_001D601C,y,295.0f,sel); break;
                           case 2:
                             _func_000737F0(&D_001D6060,D_002FA3E0,295.0f,sel);
                             sel=(D_002FA5D0==1&&D_002FA5CC==3); y=D_002FA3E0+D_001D605C;
                             _func_000737F0(&D_001D6050,y,295.0f,sel); break;
                           case 3:
                             _func_000737F0(&D_001D6024,D_002FA3E0,295.0f,sel);
                             sel=(D_002FA5D0==1&&D_002FA5CC==3); y=D_002FA3E0+D_001D605C;
                             _func_000737F0(&D_001D601C,y,295.0f,sel); break;
                           case 4:
                             _func_000737F0(&D_001D6038,D_002FA3E0,295.0f,sel);
                             sel=(D_002FA5D0==1&&D_002FA5CC==3); y=D_002FA3E0+D_001D605C;
                             _func_000737F0(&D_001D6030,y,295.0f,sel); break;
                           }
                           _func_000737F0(&D_002FA5D4,D_002FA3E0+D_001D4270,345.0f,0);
                      } else {
                           if (param_1 == 0xfffffffd) {
                             if (D_002FA5C4==1) {
                               D_002FA5C4=2; p=(unsigned char *)&D_003104B8; p[0]=D_002FA5D4[0];
                               for(i=1; ((unsigned char *)&D_002FA5D5)[i-1] && ((unsigned char *)&D_002FA5D5)[i-1]!='_';i++) p[i]=((unsigned char *)&D_002FA5D5)[i-1];
                               p[i]=0;
                               if (_func_000B50B0(&D_003104B8,D_002FA558)) { _func_00073EC0(); D_002FA4FC=0x12; _func_000B0FA0(3); }
                               else { D_002FA4FC=0x12; _func_000B0FA0(9); } return;
                             }
                             if (D_002FA5C4!=2) return;
                             state=_func_00071140();
                             if(state==0xb) { D_00313A70=3; return; }
                             if(state!=3 && state!=4) return;
                             _func_00073B40(2); D_002FA4FC=0; D_002FA5C4=0; D_002FA550=0xe; return;
                           }
                           if(param_1&4) {
                             switch(D_002FA5CC) {
                             case 0:
                        if(D_002FA5C8>=8)return;
                        ((unsigned char *)&D_002FA5D4)[D_002FA5C8]=(unsigned char)(D_002FA5D0+'A');
                        D_002FA5C8++;
                        return;
                      case 1:
                        if(D_002FA5C8>=8)return;
                        ((unsigned char *)&D_002FA5D4)[D_002FA5C8]=(unsigned char)(D_002FA5D0+'J');
                        D_002FA5C8++;
                        return;
                             case 2:
                               if(D_002FA5C8<8)((unsigned char *)&D_002FA5D4)[D_002FA5C8++]=(unsigned char)(D_002FA5D0+'S');
                               goto clamp;
                             case 3:
                               if(D_002FA5D0==0){if(D_002FA5C8>0)--D_002FA5C8; ((unsigned char *)&D_002FA5D4)[D_002FA5C8]='_'; return;}
                               if(D_002FA5D0!=1 || ((unsigned char *)&D_002FA5D4)[0]=='_')return;
                               D_002FA5C4=D_002FA5D0; return;
                             }
                           } else if(param_1&2) { _func_00073B40(2); D_002FA550=0xe; }
                           else if((signed char)param_1<0) {
                             D_002FA5D0++;
                             if((D_002FA5CC==2 && D_002FA5D0==8) || (D_002FA5CC==3 && D_002FA5D0>1)) {D_002FA5D0=0;return;}
                             if(D_002FA5D0>8)D_002FA5D0=0;
                           } else if(param_1&0x40) {
                             D_002FA5D0--;
                             if((int)D_002FA5D0<0){D_002FA5D0=8;if(D_002FA5CC==2){D_002FA5D0=7;return;}if(D_002FA5CC==3){D_002FA5D0=1;return;}}
                           } else if(param_1&0x10) {
                             D_002FA5CC--;
                             if(D_002FA5CC==2){if(D_002FA5D0==1){D_002FA5D0=3;return;}goto clamp;}
                             if((int)D_002FA5CC<0)D_002FA5CC=3;
                             if(D_002FA5CC==3)D_002FA5D0=(D_002FA5D0>2);
                           } else if(param_1&0x20) {
                             D_002FA5CC++;
                             if(D_002FA5CC>3){D_002FA5CC=0;if(D_002FA5D0!=1)return;D_002FA5D0=3;return;}
                             if(D_002FA5CC==3)D_002FA5D0=(D_002FA5D0>2);
                           }
                         clamp:
                           if(D_002FA5CC==2 && D_002FA5D0>=8)D_002FA5D0=7;
                           return;
                         
                      }
                    }
