/* 17 functions from 0x00060AD0 to 0x00061804, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct Entry61 { int a, b, t0, d, c0, c1, t1, z0, s0, s1, t2, z1, one; };

unsigned char func_00060AD0(int p,int a,int b){int func_001100A0(...),func_0012F810(...);char func_0011B020(...);int func_0012F730(...);char x[16],y[16],z[16];int saved=p;int result;if((*(unsigned char *)(p+0xd0)&2)!=0)return 0;func_001100A0(p,&p);func_0012F810(y,a,p);func_0012F810(x,b,p);result=func_0011B020(saved,y,x,z,0,0);if(result){func_0012F730(b,z,p);return 1;}return 0;}

unsigned char func_00060B60(int p1,int *p2,int *p3){extern int D_002EEF74,D_002EEF78,D_00307C08;int func_00060AD0(...);int v0=p2[0],v1=p2[1],v2=p2[2],v3=p2[3];unsigned char result=0;unsigned int i=0;int list=D_002EEF74;if(D_002EEF78){while(i<(unsigned int)D_002EEF78){int obj=((int *)list)[i];int *q=*(int **)(obj+0x2c);if(list!=D_00307C08||!q||!(*(unsigned char *)(*q+0x20)&1)){if(func_00060AD0(obj,p1,&v0)){if(p3==0)return 1;result=1;}}i++;}}if(p3){p3[0]=v0;p3[1]=v1;p3[2]=v2;p3[3]=v3;}return result;}

void func_00060E70(void) { extern int D_00326110,D_002EEF80,D_002EEFF0,D_002EEFD8,D_002EEFDC,D_002EEFE0,D_002EEFE4; extern char D_001D5424; int func_0010F750(...); D_002EEF80=1-1; D_002EEFF0=func_0010F750(&D_001D5424,D_00326110,0xe0); D_002EEFD8=0; D_002EEFDC=0; D_002EEFE0=0; D_002EEFE4=0x3f800000; }

void func_00060EC0(void) {
    extern int D_002EEFF0;
    int func_00110760(...);
    func_00110760(D_002EEFF0);
}

void func_00060ED0(void){extern int D_00313B60,D_002EF008,D_00307DB4,D_002EF010,D_002EF000;extern char D_002EEFED;int func_00110420(...);int func_0009DAC0(...);int func_00110480(...);int func_00110060(...);int func_001105E0(...);int func_00110000(...);__declspec(align(16)) char t[64];int p=*(int*)(D_00313B60+0x2c);if(*(int*)p)func_00110420(*(int*)p,D_00313B60);int q=func_0009DAC0(D_002EF008);func_00110480(q,D_00313B60,0);func_00110060(*(int*)(D_002EF008+0x2c),t);func_001105E0(D_00313B60,t,0);func_00110000(D_00313B60);D_002EF010=D_00307DB4;D_002EF000=*(volatile int*)&D_00307DB4;D_002EEFED=1;}

void func_00060F60(void)
{
  int func_00101360(...);
  int func_000A7B80(...);
  int func_00060ED0(...);
  func_00101360();
  func_000A7B80();
  func_00060ED0();
  return;
}

void func_00061500(void){int func_0011FED0(...);extern int D_002EEFF0;extern volatile float D_001D5434,D_001D5430;extern volatile float D_002EEC50,D_002EECA8;volatile float a[16];func_0011FED0(D_002EEFF0,(float*)a);D_002EEC50=a[2]*D_001D5434;D_002EECA8=a[0]*D_001D5430;}

void func_00061540(int a0, int a1) {
    extern int D_002EF00C;
    extern int D_00307DB4;
    extern int D_002EF008;
    extern int D_002EF010;
    extern int D_002EF014;
    D_002EF008 = D_002EF00C;
    D_002EF00C = a0;
    D_002EF010 = D_00307DB4;
    D_002EF014 = a1;
}

void func_00061570(int a, volatile int b,int c){extern int D_00307DB4,D_002EF01C,D_002EEF80,D_002EF018,D_002EF020,D_002EF024;extern int D_002EF050;D_002EF01C=b;D_002EF018=a;D_002EF020=D_00307DB4;D_002EF024=c;if((unsigned)D_002EEF80>1){int*p=&D_002EF050;int i=D_002EEF80-1;do{p[-1]=b;p[0]=b;p+=13;i--;}while(i);}}

void func_000615C0(void) { extern int D_00307DF8,D_002EEF80,D_002EEC50,D_002EECA8; extern unsigned char D_002EEFEC,D_002EEFD0; void func_0002DF20(...); void func_000A7BE0(...); func_0002DF20(D_00307DF8); D_002EEF80=0; D_002EEC50=0x4019999a; D_002EECA8=0x404ccccd; D_002EEFEC=0; D_002EEFD0=0; func_000A7BE0(); }

void func_00061600(void) {
    extern int D_002EEF80;
    D_002EEF80 = 0;
}

unsigned char func_00061610(void){extern int D_002EEC00,D_002EECA0,D_002EEF80;extern float D_002EF004,D_002EF000,D_00307DB4;if(D_002EEC00==6)return 0;if(D_002EECA0!=6)return 0;if((unsigned)D_002EEF80<=1 && D_002EF004+D_002EF000 < D_00307DB4)return 1;return 0;}

void _func_00061650(int a, int b, int c, int d)
{
    extern int D_002EEC00, D_002EECA0, D_002EEFE8, D_00307DF8;
    extern unsigned int D_002EEF80;
    extern float D_002EF004, D_002EF000, D_00307DB4;
    extern char D_002EEF90, D_001D2968;
    extern int D_002EEFF8[];
    extern void func_0002D7B0(int, int);
    extern void func_00110060(int, void *);
    extern int *func_0009C7A0(int, void *, int);
    extern void func_000A22B0(int, int, int, int, int, int);
    extern void func_0005CCC0(int);
    extern void func_00060ED0(void);
    unsigned int n;
    int *e;

    if ((D_002EEC00 != 6 && D_002EECA0 != 6) ||
        ((n = D_002EEF80, D_002EEF80 <= 1) && !(D_002EF000 + D_002EF004 >= D_00307DB4))) {
        int *p;
        D_002EEFE8 = **(int **)(D_00307DF8 + 0x110);
        D_002EEF80 = 0;
        func_0002D7B0(D_00307DF8, 0);
        func_00110060(*(int *)(D_00307DF8 + 0x2c), &D_002EEF90);
        p = func_0009C7A0(D_00307DF8, &D_001D2968, 0);
        func_000A22B0(D_00307DF8 + 100, 2, p[0], p[1], p[2], 0);
        n = D_002EEF80;
    }
    e = (int *)((char *)D_002EEFF8 + n * 0x34);
    e[0] = a;
    e[1] = b;
    e[2] = *(int *)&D_00307DB4;
    e[3] = d;
    e[4] = c;
    e[5] = c;
    e[6] = *(int *)&D_00307DB4;
    e[8] = 0x3f800000;
    e[9] = 0x3f800000;
    D_002EEF80 = n + 1;
    e[7] = 0;
    e[10] = *(int *)&D_00307DB4;
    e[11] = 0;
    e[12] = 1;
    if (1 < n + 1) {
        int *q = (int *)((char *)D_002EEFF8 + (n - 1) * 0x34);
        e[8] = q[9];
        e[9] = q[9];
        func_0005CCC0(6);
        return;
    }
    func_00060ED0();
    func_0005CCC0(6);
}

void func_000617A0(void) {
 extern int D_00313B60,D_002EF410,D_002EF414,D_002EF418;
 extern float D_002EF40C,D_002EF408;
 int func_00110060(...); float func_00131610(float,float); float func_00131240(float);
 __declspec(align(16)) float v[13];
 func_00110060(D_00313B60,v);
 D_002EF410=*(int *)&v[12]; D_002EF414=*(int *)&v[13]; D_002EF418=*(int *)&v[14];
 D_002EF40C=func_00131610(v[8],v[10]);
 D_002EF408=-func_00131240(v[9]);
}

