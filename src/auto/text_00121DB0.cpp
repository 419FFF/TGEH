/* 27 functions from 0x00121DB0 to 0x00122D6E, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

struct V3_ { float x; int y, z; };

unsigned short func_00121DB0(short*out,float bias,float scale,int *v){extern float D_001E7D70,D_001E7D74,D_001E7D78,D_001DF668,D_001DF664;extern int func_001313C0(...);float x=*(float*)((char*)v+0x30),y=*(float*)((char*)v+0x34),z=*(float*)((char*)v+0x38);unsigned i=0;do{long double q=(long double)x**(float*)((char*)&D_001E7D78+i)+(long double)y**(float*)((char*)&D_001E7D74+i)+(long double)z**(float*)((char*)&D_001E7D70+i);q=(q-bias)*scale;if(q>D_001DF668)return 0;if(q<D_001DF664)q=-32767.0;out[i/12]=(short)func_001313C0((float)q);i+=12;}while(i<0x138);return 1;}

unsigned short func_00121E60(short*out,float*a,float*b,float scale){extern float D_001E7D70,D_001E7D74,D_001E7D78,D_001DF668,D_001DF664;extern int func_001313C0(...);for(unsigned i=0;i<0x138;i+=12){long double x=(long double)*(float*)((char*)&D_001E7D70+i)*a[0]+(long double)*(float*)((char*)&D_001E7D74+i)*a[1]+(long double)*(float*)((char*)&D_001E7D78+i)*a[2];long double y=(long double)*(float*)((char*)&D_001E7D70+i)*b[0]+(long double)*(float*)((char*)&D_001E7D74+i)*b[1]+(long double)*(float*)((char*)&D_001E7D78+i)*b[2];if(x<y)y=x;y*=scale;if(y>D_001DF668)return 0;if(y<D_001DF664)y=-32767.0;out[i/12]=(short)func_001313C0((float)y);}return 1;}

void func_00121F20(int p,int *list){extern int D_0032B710[],D_0032F750;int n=0;D_0032B710[0]=(int)list;int count=1;for(int j=0;j<count;j++){int d=D_0032B710[j];int k=0;for(;k<0x1a;k+=2){short a=*(short*)(p+k),b=*(short*)(d+k);if(a>b)break;if(*(short*)(p+k+2)>*(short*)(d+k+2)){k++;break;}}if(k==0x1a){if(*(char*)(d+0x34))D_0032B710[n++]=d;else {D_0032B710[count++]=*(int*)(d+0x38);D_0032B710[count++]=*(int*)(d+0x38)+0x40;}}}D_0032F750=n;}

unsigned char _func_00121FC0(int param_1, int param_2, int *param_3, V3_ *param_4, int param_5, int *param_6, int param_7)
{
    int _func_0012F810(...); extern unsigned int D_0032F750; char _func_00121E60(...); int _func_00121F20(...);
    extern int D_0032B710[]; int _func_0012B1F0(...); extern char D_0032F720, D_0032F730; char _func_00110A80(...); int _func_00121AD0(...);
    extern int D_0032F74C;
    unsigned char local_185;
    unsigned int local_178, local_170;
    int local_17c, iVar12, iVar13;
    unsigned int bVar8;
    unsigned short *puVar17, uVar9, uVar10, uVar11;
    char cVar15;
    struct { V3_ b; float pb_[1]; unsigned char m[16]; V3_ v; float pv_[1]; unsigned char a134[52]; unsigned short a100[128]; } L;
    unsigned char *pb;

    local_185 = 0;
    _func_0012F810(L.m, param_1, param_7);
    _func_0012F810(&L.b, param_2, param_7);
    D_0032F750 = 0;
    cVar15 = _func_00121E60(L.a134, L.m, &L.b, param_3[4]);
    if (cVar15 != 0) {
        _func_00121F20(L.a134, param_3[1]);
    }
    if (D_0032F750 != 0) {
        iVar12 = param_3[3];
        *param_4 = L.b;
        for (local_178 = 0; local_178 < D_0032F750; local_178++) {
            iVar13 = D_0032B710[local_178];
            pb = *(unsigned char **)(iVar13 + 0x38);
            bVar8 = pb[0];
            if (pb[1] != 0) {
                _func_0012B1F0(pb, L.a100);
                puVar17 = L.a100;
            } else {
                puVar17 = (unsigned short *)(pb + 2);
            }
            local_17c = 0;
            for (local_170 = 0; local_170 < bVar8; local_170++) {
                uVar9 = *puVar17++;
                uVar10 = *puVar17++;
                uVar11 = *puVar17++;
                unsigned short uVarF = *puVar17++;
                if (D_0032F720 != 0) {
                    if (D_0032F730 != 0) return 1;
                    int a = iVar12 + uVar11 * 0xc;
                    int b = iVar12 + uVar10 * 0xc;
                    int c = iVar12 + uVar9 * 0xc;
                    if (_func_00110A80(L.m, &L.b, c, b, a, 0, 0)) {
                        _func_00121AD0(c, b, a, uVarF);
                        local_185 = 1;
                    }
                } else {
                    L.v = *param_4;
                    int *a = (int *)(iVar12 + uVar11 * 0xc);
                    int *b = (int *)(iVar12 + uVar10 * 0xc);
                    int *c = (int *)(iVar12 + uVar9 * 0xc);
                    if (_func_00110A80(L.m, &L.v, c, b, a, param_4, param_5)) {
                        if (param_6) {
                            param_6[0] = c[0]; param_6[1] = c[1]; param_6[2] = c[2]; param_6[3] = 0x3f800000;
                            param_6[4] = b[0]; param_6[5] = b[1]; param_6[6] = b[2]; param_6[7] = 0x3f800000;
                            param_6[8] = a[0]; param_6[9] = a[1]; param_6[10] = a[2]; param_6[11] = 0x3f800000;
                            param_6[15] = uVarF;
                        }
                        if (*(int *)(iVar13 + 0x3c) != 0) D_0032F74C = *(int *)(iVar13 + 0x3c) + local_17c;
                        else D_0032F74C = 0;
                        local_185 = 1;
                    }
                }
                local_17c += 0x20;
            }
        }
    }
    return local_185;
}

unsigned char _func_001222C0(int param_1, int param_2, int param_3, int param_4)
{
    int _func_0012F4C0(...); extern unsigned int D_0032F750; char _func_00121DB0(...); int _func_00121F20(...);
    extern int D_0032B710[]; int _func_0012B1F0(...); extern char D_0032F730; char _func_00110E00(...); int _func_00121AD0(...);
    int iVar1, iVar2, iVar3, iVar6;
    unsigned int bVar4;
    unsigned short uVar5, s0, s1, s2;
    char cVar8;
    unsigned short *puVar9;
    unsigned char local_1a9;
    unsigned int local_1a4;
    unsigned int local_19c;
    struct { __declspec(align(16)) unsigned char m[48]; unsigned char a160[28]; unsigned char a144[52]; unsigned short a110[128]; } L;

    local_1a9 = 0;
    _func_0012F4C0(L.m, param_1, param_4);
    D_0032F750 = 0;
    cVar8 = _func_00121DB0(L.a144, param_3, L.m, *(int *)(param_2 + 0x10));
    if (cVar8 != 0) {
        _func_00121F20(L.a144, *(int *)(param_2 + 4));
    }
    if (D_0032F750 != 0) {
        iVar6 = *(int *)(param_2 + 0xc);
        for (local_1a4 = 0; local_1a4 < D_0032F750; local_1a4++) {
            puVar9 = *(unsigned short **)(D_0032B710[local_1a4] + 0x38);
            bVar4 = *(unsigned char *)puVar9;
            if (((unsigned char *)puVar9)[1] != 0) {
                _func_0012B1F0(puVar9, L.a110);
                puVar9 = L.a110;
            } else {
                puVar9 = puVar9 + 1;
            }
            for (local_19c = 0; local_19c < bVar4; local_19c++) {
                if (D_0032F730 != 0) {
                    return 1;
                }
                s0 = *puVar9++;
                s1 = *puVar9++;
                s2 = *puVar9++;
                uVar5 = *puVar9++;
                iVar1 = iVar6 + s2 * 0xc;
                iVar2 = iVar6 + s1 * 0xc;
                iVar3 = iVar6 + s0 * 0xc;
                cVar8 = _func_00110E00(L.a160, param_3, iVar3, iVar2, iVar1);
                if (cVar8 != 0) {
                    _func_00121AD0(iVar3, iVar2, iVar1, uVar5);
                    local_1a9 = 1;
                }
            }
        }
    }
    return local_1a9;
}

void _func_00122470(void) { extern void _func_0012EB70(void*,void*); extern void _func_0012EE00(void*,void*); }

unsigned char func_001224D0(int p0,int p1,int p2,int p3) {
 void __fastcall func_00068D10(int,void *); void __fastcall func_00122470(int,void *);
 void func_0012F4C0(void *,void *,void *); char func_00121B50(...); void func_00121F20(int,int*);
 void func_0012B1F0(void *,void *); char func_001118C0(...); void __fastcall func_00121AD0(int,int,int,int,unsigned short);
 extern unsigned int D_0032F750;extern int D_0032B710[];extern char D_0032F730;
 unsigned char hit=0;unsigned int i,j,count;unsigned short s0,s1,s2,flag;unsigned short *indices;int base,a,b,c;
 struct {__declspec(align(16)) char m[48];char pad[28];char plane[52];char b[64];char shape[96];char a[64];unsigned short decode[128];} L;
 func_00068D10(p1,L.shape);
 func_00122470(p3,L.b);func_00122470(p0,L.a);
 func_0012F4C0(L.m,L.a,L.b);
 D_0032F750=0;
 if(func_00121B50(L.plane,L.shape,L.m,*(int *)(p2+16)))func_00121F20((int)L.plane,*(int **)(p2+4));
 if(D_0032F750) {
 base=*(int *)(p2+12);
 for(i=0;i<D_0032F750;i++){
 unsigned char *data=*(unsigned char **)(D_0032B710[i]+56);
 count=*data;
 if(data[1]){func_0012B1F0(data,L.decode);indices=L.decode;}else indices=(unsigned short *)(data+2);
 for(j=0;j<count;j++){
 if(D_0032F730)return 1;
 s0=*indices++;s1=*indices++;s2=*indices++;flag=*indices++;
 c=base+s2*12;b=base+s1*12;a=base+s0*12;
 if(func_001118C0(L.m,p1,L.shape,a,b,c)){
 func_00121AD0(p3,a,b,c,flag);hit=1;
 }
 }
 }
 }
 return hit;
}

void func_001226B0(char a0) {
    extern char D_0032F754;
    D_0032F754 = a0;
}

char func_001226C0(void) {
    extern char D_0032F754;
    return D_0032F754;
}

int _func_001226D0(void) { extern int _D_0032F75C; extern char _D_001DF66C; int func_00116A90(int,int,int); int func_0011C3B0(...); int i,p; char c; i=func_00116A90(0x60,1,1); func_0011C3B0(&_D_0032F75C,i,i); p=(int)&_D_001DF66C; do { c=*(char*)p; *(char*)(i+0xc+(p-(int)&_D_001DF66C))=c; ++p; } while(c); *(int*)(i+0x4c)=0; return i; }

void _func_00122710(int key) { extern unsigned int D_0032F900; extern int D_0032F770[],D_0032F774[]; extern void _func_0013EB10(int*,int*,unsigned); extern void _func_0011C3E0(int); extern void _func_00116FB0(int); unsigned i; for(i=0;i<D_0032F900;i++)if(D_0032F770[i]==key){_func_0013EB10(&D_0032F770[i],&D_0032F774[i],D_0032F900-i);i--;D_0032F900--;} _func_0011C3E0(key);_func_00116FB0(key);}

void _func_00122780(void* p) { extern unsigned int D_0032F904,D_0032F768,D_0032F900; extern int D_0032F76C[],D_0032F770[]; extern int _func_0013B380(unsigned); unsigned n; if(p&&D_0032F904&&D_0032F768<=0){n=_func_0013B380(D_0032F904);if(D_0032F900>0)*(int*)((char*)D_0032F76C[D_0032F900]+0x4c)+=n;D_0032F770[D_0032F900]=(int)p;D_0032F900++;*(int*)((char*)p+0x4c)-=n;}}

void func_001227E0(unsigned int param_1) {
extern unsigned int D_0032F904, D_0032F768, D_0032F900;
extern int *D_0032F770[], *D_0032F76C[];
int func_0013B380(unsigned int);
int eax;
if (!param_1 || !D_0032F904 || D_0032F768 > 0) return;
eax=func_0013B380(D_0032F904);
D_0032F900--;
*(int*)((char*)D_0032F770[D_0032F900]+0x4c) += eax;
if (D_0032F900 > 0) *(int*)((char*)D_0032F76C[D_0032F900]+0x4c) -= eax;
}

int *func_00122830(void)
{
    extern int D_0032F904, D_0032F768, D_0032F900;
    extern int *D_0032F76C[];
    extern int *D_0032F75C;
    extern float D_001D27B8, D_001D290C, D_001DF108, D_001D27B0, D_001D55B4, D_001D29E0;
    int func_0013B380(...);
    int *p;
    int t;
    float sum, f, g;
    if (D_0032F904 == 0) return 0;
    t = func_0013B380(D_0032F904);
    D_0032F768 = D_0032F768 + 1;
    if (D_0032F768 == 1 && D_0032F900 != 0) {
        D_0032F76C[D_0032F900][0x4c / 4] += t;
    }
    sum = D_001D27B8;
    for (p = D_0032F75C; p != 0; p = (int *)*p) {
        int o = p[2];
        int c = *(int *)(o + 0x4c);
        f = (float)c;
        f = f * D_001DF108;
        *(unsigned int *)(o + 0x4c) = (unsigned int)(c * 3) >> 2;
        *(float *)(o + 0x50) = f;
        sum = sum + *(float *)(o + 0x50);
    }
    if (D_0032F75C != 0) {
        g = D_001D27B0 / sum;
        for (p = D_0032F75C; p != 0; p = (int *)*p) {
            int o = p[2];
            f = g * *(float *)(o + 0x50);
            *(float *)(o + 0x54) = f;
            *(float *)(o + 0x5c) = (*(float *)(o + 0x5c) * D_001D55B4 + f) * D_001D29E0;
            if (*(float *)(o + 0x58) < f) *(float *)(o + 0x58) = f;
        }
    }
    if (D_0032F904 != 0) {
        t = func_0013B380(D_0032F904);
        D_0032F768 = D_0032F768 - 1;
        if (D_0032F768 == 0 && D_0032F900 != 0) {
            D_0032F76C[D_0032F900][0x4c / 4] -= t;
        }
    }
    return D_0032F75C;
}

void _func_00122940(void) { extern int _D_0032F904,_D_0032F900,_D_0032F768,_D_0032F75C,_D_0032F760,_D_0032F758; extern char _D_001DF66C; int func_0013B320(int); int func_00116A90(int,int,int); int func_0011C3B0(...); void func_00122780(int); int i; char*s; char c; _D_0032F904=func_0013B320(0x47c35000); _D_0032F900=0; _D_0032F768=0; _D_0032F75C=0; _D_0032F760=0; i=func_00116A90(0x60,1,1); func_0011C3B0(&_D_0032F75C,i,i); s=&_D_001DF66C; do {c=*s; *(char*)((char*)i+0xc+(s-&_D_001DF66C))=c; ++s;}while(c); *(int*)(i+0x4c)=0; _D_0032F758=i; func_00122780(i);}

void _func_001229B0(int a) { extern int _D_0032F908,_D_003291CC,_D_003291D0; extern float _D_001D290C,_D_001D8FB0; int func_0010F750(int,int,int,int); int *p=(int*)func_0010F750(a,_D_0032F908,0x110,0); p[0x39]=0x3f99999a; *(float*)((char*)p+0xe8)=((float)_D_003291CC*_D_001D8FB0)/(float)_D_003291D0; p[0x3b]=0x41200000;p[0x3c]=0x49742400;p[0x3f]=0;p[0x3d]=0;p[0x40]=0;p[0x3e]=0;p[0x42]=0;p[0x43]=0; }

void func_00122A50(int p,float x,int y){*(float*)(p+0xe4)=(float)(long double)x;*(int*)(p+0xe8)=y;}

void func_00122A70(void){ extern int D_0032F90C,D_0032F908; int func_00110370(...); int local[7]; if(D_0032F90C==0){local[4]=0;local[3]=0;local[1]=0;local[2]=0;D_0032F908=func_00110370(local);} ++D_0032F90C;}

void func_00122AB0(void)
{
  extern undefined4 D_0032F90C;
  int func_001103C0(...);
  extern undefined4 D_0032F908;
  D_0032F90C = D_0032F90C + -1;
  if (D_0032F90C == 0) {
    func_001103C0(D_0032F908);
  }
  return;
}

void func_00122AD0(void)
{
  extern undefined4 D_00331110;
  int func_0013CC50(...);
  if (D_00331110 == 0) {
    func_0013CC50();
  }
  D_00331110 = D_00331110 + 1;
  return;
}

long double _func_00122AF0(float a,float b) { extern float _D_001D27B8,_D_001D27B0,_D_001D2D4C; float x; if(a==_D_001D27B8)return _D_001D27B8; if(a>_D_001D27B8)x=(a-b)/(_D_001D27B0-b);else x=(a+b)/(_D_001D27B0-b);if(x==_D_001D27B8)return _D_001D27B8;if(x<_D_001D2D4C)return _D_001D2D4C;if(x>_D_001D27B0)return _D_001D27B0;return x;}

int func_00122B80(undefined4 param_1, undefined4 param_2)
{
  int func_00116A90(...);
  int func_0013CC70(...);
  int iVar1;
  
  iVar1 = func_00116A90(0x2c,1,1);
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  func_0013CC70(iVar1);
  return iVar1;
}

void func_00122BB0(int p,unsigned int i,int a,float b){extern float D_0032923C;int func_0013D030(...);if(i<*(unsigned int*)(p+20)){func_0013D030(p,i,a);int o=i*20;*(float*)(*(int*)(p+24)+o+8)=*(float*)&a;*(float*)(*(int*)(p+24)+o+12)=b;*(char*)(*(int*)(p+24)+o+4)=0;*(float*)(*(int*)(p+24)+o+16)=D_0032923C;}}

void func_00122C10(int param_1,float param_2,float param_3){ extern float D_0032923C; int func_0013D030(...); unsigned int i; int off; for(i=0,off=0;i<*(unsigned int *)(param_1+0x14);++i,off+=0x14){func_0013D030(param_1,i,*(int *)&param_2);*(float *)(*(int *)(param_1+0x18)+off+8)=param_2;*(float *)(*(int *)(param_1+0x18)+off+0xc)=param_3;*(char *)(*(int *)(param_1+0x18)+off+4)=0;*(float *)(*(int *)(param_1+0x18)+off+0x10)=D_0032923C;}}

void func_00122C80(int p,unsigned int i,char flag){extern float D_0032923C;int func_0013D070(...);int func_0013D030(...);if(i<*(unsigned int*)(p+20)){if(flag){func_0013D070(p,i);int o=i*20;*(char*)(*(int*)(p+24)+o+4)=1;*(float*)(*(int*)(p+24)+o+16)=*(float*)(*(int*)(p+24)+o+16)-D_0032923C;}else{int o=i*20;func_0013D030(p,i,*(int*)(*(int*)(p+24)+o+8));*(char*)(*(int*)(p+24)+o+4)=0;*(float*)(*(int*)(p+24)+o+16)=D_0032923C+*(float*)(*(int*)(p+24)+o+16);}}}

void _func_00122D00(void* p, unsigned int arg) { extern void _func_00122C80(void*,unsigned int,unsigned int); unsigned int i; for(i=0;i<(unsigned int)((int*)p)[5];i++) _func_00122C80(p,i,arg); }

void func_0013D070(int, int);
void func_00122D30(int *param_1)
{
    unsigned int i;
    if (param_1 != 0) {
        for (i = 0; i < (unsigned int)param_1[5]; ++i) {
            func_0013D070((int)param_1, (int)i);
            *(int *)((char *)param_1[6] + i * 0x14 + 8) = 0;
        }
    }
}
extern float D_0032923C;
extern int D_0032F90C, D_0032F908;
