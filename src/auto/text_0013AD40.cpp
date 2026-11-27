/* 33 functions from 0x0013AD40 to 0x0013BB8D, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_0013AD40(void *p,void *arg) {
void _func_0011C3E0(void*);void _func_0011C3B0(void*,void*,void*);void _func_0013A120(float);extern volatile int _D_001E8878;
if(*(int*)((char*)p+0x78)){_func_0011C3E0((char*)p+0x7c);*(int*)((char*)p+0x78)=0;}*(void**)((char*)p+0x78)=arg;if(arg)_func_0011C3B0(arg,(char*)p+0x7c,p);
if(!*((char*)p+0x1c)){register int flags=*(int*)((char*)p+0x10);register int mode=_D_001E8878;flags|=0x40;*(int*)((char*)p+0x10)=flags;if(mode==8){void*q=*(void**)((char*)p+0x78);if(q){float v=*(float*)((char*)q+0x18);v*=*(float*)((char*)p+0x6c);_func_0013A120(v);}else _func_0013A120(*(float*)((char*)p+0x6c));}}
}

longdouble func_0013ADC0(int param_1)
{
  return (longdouble)*(float *)(param_1 + 0x18);
}

void func_0013ADD0(int param_1)
{
  extern undefined4 D_001E8878;
  if (param_1 == 0) {
    param_1 = 1;
  }
  D_001E8878 = param_1;
  return;
}

void _func_0013ADF0(void *p) {
void _func_0013AB30(void*);void _func_0011C3E0(void*);void _func_00116FB0(void*);
if(*(int*)((char*)p+0x14))_func_0013AB30(p);
_func_0011C3E0(p);if(*(int*)((char*)p+0x78))_func_0011C3E0((char*)p+0x7c);_func_00116FB0(p);
}

void _func_0013AE30(void) {
extern int _D_00332B00,_D_00334C98,_D_00332B84;void _func_001AFA38(void);void _func_0013AF50(int);void _func_0013AF70(int);void _func_0013A960(void*);void _func_0013AB30(int);void __stdcall _func_001AF9D9(int,int);int __stdcall _func_001B0FA1(int);
_func_001AFA38();int *list=(int*)_D_00332B00;if(list){int *node=list;do{int *next=(int*)node[0];int *it=(int*)node[2];if(it[0x1d/4]==0||it[0x14/4]==1){_func_0013A960(it);}else{_func_0013AF50(_D_00334C98);_func_001AF9D9(it[0x88/4],0);_func_0013AF70(_D_00334C98);if((*(unsigned char*)((char*)list+0x10)&1)==0)_func_0013AB30(it[0x24/4]);else _func_0013A960(it);}node=next;}while(node);} _func_001B0FA1(_D_00332B84);
}

void _func_0013AEC0(void) {
int _func_0010BA93(void); extern int _D_00334DC0,_D_00334E10,_D_00334CAC,_D_00334D38,_D_00334D3C,_D_00334E14; extern unsigned char _D_00334CB8; extern void *__imp__RtlInitializeCriticalSection;
_D_00334DC0=0; _D_00334E10=1; _D_00334CAC=_func_0010BA93(); _D_00334CB8=0; _D_00334D38=0; _D_00334D3C=-1; ((void (__stdcall *)(void*))__imp__RtlInitializeCriticalSection)(&_D_00334E14);
}

void _func_0013AF00(void) {
extern unsigned char _D_00334E31; extern void* __imp__RtlInitializeCriticalSection; void* _func_00116A90(int,int,int);
_D_00334E31=1; void*p=_func_00116A90(0x1c,1,1); ((void (__stdcall *)(void*))__imp__RtlInitializeCriticalSection)(p); _D_00334E31=0;
}

void _func_0013AF30(void *p) { extern unsigned char _D_00334E31; void _func_00116FB0(void*); _D_00334E31=1; if(p)_func_00116FB0(p); _D_00334E31=0; }

void func_0013AF50(void *param_1)
{
  extern unsigned char D_00334E31;
  extern void *__imp__RtlEnterCriticalSection;
  if (D_00334E31 == 0 && param_1 != 0)
    ((void (__stdcall *)(void *))__imp__RtlEnterCriticalSection)(param_1);
}

void func_0013AF70(void *param_1)
{
  extern unsigned char D_00334E31;
  extern void *__imp__RtlLeaveCriticalSection;
  if (D_00334E31 == 0 && param_1 != 0)
    ((void (__stdcall *)(void *))__imp__RtlLeaveCriticalSection)(param_1);
}

int __stdcall func_0013AF90(int *a0) { ((void (__cdecl *)(int))a0[2])(a0[3]); return 0; }

void _func_0013AFB0(int rate) {
extern int _D_00334E14; extern void *__imp__RtlEnterCriticalSection,*__imp__RtlLeaveCriticalSection; extern void* _func_00116A90(int,int,int); extern int __stdcall _func_0010BA25(int,int,int,int,int,int); extern int __stdcall _func_0013AF90(int*);
if(rate<0x8000) rate=0x8000;
((void (__stdcall *)(void*))__imp__RtlEnterCriticalSection)(&_D_00334E14);
void*p=_func_00116A90(0x118,1,1);
((void (__stdcall *)(void*))__imp__RtlLeaveCriticalSection)(&_D_00334E14);
_func_0010BA25((int)p, rate,0,0,0,0);
_func_0013AF90((int*)p);
}

int _func_0013B050(void)
{
    extern int _D_00334E14, _D_00334E10;
    extern int _D_00334DC0[];
    extern void (__stdcall *__imp__RtlEnterCriticalSection)(void *);
    extern void (__stdcall *__imp__RtlLeaveCriticalSection)(void *);
    int _func_0010BA93(void);
    int i, result=0, key;
    (*__imp__RtlEnterCriticalSection)(&_D_00334E14);
    key=_func_0010BA93();
    for(i=0;i<_D_00334E10;i++) {
        int p=_D_00334DC0[i];
        if(*(int *)(p+4)==key) { result=p; break; }
    }
    (*__imp__RtlLeaveCriticalSection)(&_D_00334E14);
    return result;
}

void _func_0013B0B0(int *param_1, int param_2)
{
    int __stdcall _func_0010B84E(int, int);
    if(param_2<=-3) { _func_0010B84E(param_1[0],15); return; }
    if(param_2==-2) { _func_0010B84E(param_1[0],2); return; }
    if(param_2==-1) { _func_0010B84E(param_1[0],1); return; }
    if(param_2==0) { _func_0010B84E(param_1[0],0); return; }
    if(param_2==1) { _func_0010B84E(param_1[0],-1); return; }
    if(param_2==2) { _func_0010B84E(param_1[0],-2); return; }
    _func_0010B84E(param_1[0],-15);
}

void _func_0013B140(void *param_1)
{
    extern int _D_00334E14, _D_00334E10;
    extern int _D_00334DC0[], _D_00334DBC[];
    extern void (__stdcall *__imp__RtlEnterCriticalSection)(void *);
    extern void (__stdcall *__imp__RtlLeaveCriticalSection)(void *);
    void __stdcall _func_0010B7F8(int);
    void _func_00116FB0(int);
    int i, n;
    (*__imp__RtlEnterCriticalSection)(&_D_00334E14);
    _func_0010B7F8(*(int *)param_1);
    _func_00116FB0((int)param_1);
    n=_D_00334E10;
    for(i=0;i<n;i++) if((void *)_D_00334DC0[i]==param_1) break;
    if(i<n) {
        for(;i<n-1;i++) _D_00334DBC[i]=_D_00334DC0[i+1];
        _D_00334E10=n-1;
    }
    (*__imp__RtlLeaveCriticalSection)(&_D_00334E14);
}

int _func_0013B1E0(void) {
 extern unsigned char D_00334E31;extern int D_00334E14,D_00334E10,D_00334DC0[];
 extern void *__imp__RtlEnterCriticalSection;extern void *__imp__RtlLeaveCriticalSection;
 int _func_0010BA93(void);
 int result=0;
 if(!D_00334E31)((void (__stdcall *)(void*))__imp__RtlEnterCriticalSection)(&D_00334E14);
 int key=_func_0010BA93();
 for(unsigned int i=0;i<(unsigned int)D_00334E10;i++){int *entry=(int*)D_00334DC0[i];if(entry[1]==key){result=(int)(entry+4);break;}}
 if(!D_00334E31)((void (__stdcall *)(void*))__imp__RtlLeaveCriticalSection)(&D_00334E14);
 return result;
}

void* __stdcall _func_00109BBE(unsigned int,unsigned int,unsigned int,unsigned int);
int _func_00116A90(int,int,int);
int __stdcall _func_00109BBE(int,int,int,int);
void* _func_0013B250(void) { int* p=(int*)_func_00116A90(4,1,1); *p=_func_00109BBE(0,0,0,0); return p; }

void func_0013B280(undefined4 *param_1, char param_2)
{
  int __stdcall func_00109C1F(int);
  int __stdcall func_00109C3F(int);
  if (param_2 != '\0') {
    func_00109C1F((int)(*param_1));
    return;
  }
  func_00109C3F((int)(*param_1));
  return;
}

int _func_0013B2B0(int *param_1,float param_2) {
 extern float D_001D27B8,D_001D27F8;
 int __stdcall func_00109CF3(int,int);int func_001313C0(...);
 if(param_2<D_001D27B8){func_00109CF3(*param_1,-1);return 0;}
 float v=param_2*D_001D27F8;
 int n=func_001313C0(v);
 return func_00109CF3(*param_1,n)==0x102;
}

void func_0013B300(undefined4 *param_1)
{
  int __stdcall func_0010B7F8(int);
  int func_00116FB0(...);
  func_0010B7F8((int)(*param_1));
  func_00116FB0(param_1);
  return;
}

extern "C" void *__imp__RtlEnterCriticalSection;
extern "C" void *__imp__RtlLeaveCriticalSection;
int _func_0013B320(void){void *_func_00116A90(...);int __stdcall _func_00147220(int*);int __stdcall _func_00147231(int*);long long __ftol2(...);int *p=(int*)_func_00116A90(0x28,1,1);int a[2];int b[2];_func_00147220(a);_func_00147231(b);p[6]=0;p[7]=0;p[4]=a[0];p[5]=b[0];long long result=__ftol2();*(long long*)(p+2)=result;return (int)p;}

void _func_0013B380(int *p) {
 int __stdcall _func_00147220(int*);void __stdcall _func_0013F4D0(int,int,int,int);
 int a[2];
 if(!*((char*)p+0x20)){
  _func_00147220(a);
  unsigned int oldlo=*(unsigned int*)((char*)p+0x18);
  unsigned int oldhi=*(unsigned int*)((char*)p+0x1c);
  unsigned int newlo=(unsigned int)a[0],newhi=(unsigned int)a[1];
  unsigned int elapsedlo=newlo-*(unsigned int*)((char*)p+0x10);
  unsigned int borrow=(newlo<*(unsigned int*)((char*)p+0x10));
  unsigned int elapsedhi=newhi-*(unsigned int*)((char*)p+0x14)-borrow;
  unsigned int sum=oldlo+elapsedlo;
  unsigned int carry=(sum<oldlo);
  *(unsigned int*)((char*)p+0x18)=sum;
  *(unsigned int*)((char*)p+0x1c)=oldhi+elapsedhi+carry;
  *(unsigned int*)((char*)p+0x10)=newlo;*(unsigned int*)((char*)p+0x14)=newhi;
 }
 _func_0013F4D0(p[3],p[2],p[7],p[6]);
}

void _func_0013B3F0(int *self, int param_2)
{
    void __stdcall _func_00147220(int *);
    void __stdcall _func_00147231(int *);
    longlong __stdcall _func_0013EEB0(int, int, int, int);
    int first;
    int second[3];
    _func_00147220(&first);
    _func_00147231(&second[1]);
    self[4]=first;
    self[5]=second[0];
    *(longlong *)(self+6)=_func_0013EEB0(self[2],self[3],param_2,0);
}

void _func_0013B440(int index, int arg2, int arg3) {
    extern int _D_00334E34;
    extern int _D_001E8900;
    extern int _D_001E88FC;
    extern int _D_001E88F8;
    int _func_0017E7A8(int, int, int);
    int _func_0017E591(int, int, int);
    int _func_001AFA11(int, int);
    int _func_001B04BC(int, int);
    _func_0017E7A8(0, arg2, arg3);
    if (_D_00334E34) {
        _func_0017E591(0, 0, arg3);
        _D_001E88FC = (int)&_D_001E8900 + index * 16;
        _func_001AFA11(0, _D_00334E34);
        _func_001B04BC(0, _D_001E88F8);
        (*(void (**)(void))(*(int *)_D_001E88F8 + 4))();
    }
}

void _func_0013B4B0(unsigned int index) {
    extern int _D_001E8938, _D_001E8930, _D_00334E34, _D_001E894C;
    int _func_0017E575(int, int), _func_0017E7A8(int, int, int), _func_0017E591(int, int, int), _func_001AFA11(int, int), _func_001B04BC(int, int);
    char out[16];
    _func_0017E575((int)out, 0);
    if (*(int *)(out + 8)) {
        if (*(int *)(out + 8) < index) index = 0;
        _func_0017E7A8((int)out, index, 0);
        if (*(int *)out) {
            int v = 0;
            if (!0) _func_0017E591((int)out, index, 0);
            if (v == 1) { _D_001E8938=2; _D_001E8930=1; }
            else { _D_001E8938=0; _D_001E8930=2; }
            _D_001E894C=0;
            _func_001AFA11(*(int *)out, _D_00334E34);
            _func_001B04BC((int)&_D_001E8930, *(int *)out);
            (*(void (**)(void))(*(int *)_D_001E8930+4))();
        }
    }
}

void _func_0013BA90(void){extern double _D_0014001C(void);extern float _D_001D27B8,_D_001DF7D8;extern int _D_00334E34;int _func_001313C0(float);float v=(float)-_D_0014001C();if(v<=_D_001D27B8){if(v<_D_001DF7D8)v=-10000.0f;}else v=0.0f;_D_00334E34=_func_001313C0(v);if(_D_00334E34>0){_D_00334E34=0;return;}if(_D_00334E34< -10000)_D_00334E34=-10000;}

void func_0013BB20(void) {
    extern char D_00334F50;
    D_00334F50 = 0;
}

void func_0013BB30(undefined4 param_1)
{
  int func_00116A90(...);
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)func_00116A90(0x50,1,1);
  *(undefined4 *)(puVar1 + 4) = param_1;
  *puVar1 = 1;
  return;
}

void func_0013BB50(undefined1 *param_1, undefined4 param_2)
{
  int func_00011CB0(...);
  func_00011CB0(param_1 + 0x10,param_2);
  *param_1 = 0;
  return;
}

undefined4 func_0013BB70(int param_1)
{
  extern undefined D_00334E40;
  return *(undefined4 *)(((undefined *)&D_00334E40) + param_1 * 4);
}

undefined * func_0013BB80(int param_1)
{
  extern undefined D_00334E50;
  return ((undefined *)&D_00334E50) + param_1 * 0x40;
}

