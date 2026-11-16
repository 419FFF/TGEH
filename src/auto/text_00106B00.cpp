/* 9 functions from 0x00106B00 to 0x00107718, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_00106B00(const char* s){volatile char local[0x384]; int i=0; do { local[i]=s[i]; } while(s[i++]); local[10]=0;}

void func_001073A0(void) {
    extern int D_003251FC;
    extern int D_003251D0;
    D_003251FC = 0;
    D_003251D0 = 0;
}

int _func_001073B0(void){extern int D_003251FC,D_003251D0;int _func_00116E50(...);D_003251D0=_func_00116E50(D_003251D0,(D_003251FC*3+3)*16,1,1);D_003251FC++;return D_003251D0+D_003251FC*0x30-0x30;}

void func_001073F0(char *param_1, undefined4 *param_2)
{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)*param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return;
}

void _func_00107410(int p,int *q){int _func_0011B4F0(...);int _func_0013E9DB(...);extern char D_001D8750,D_001D8748,D_001D8734,D_001D8720;int n=_func_0013E9DB(*q)-1;if(*(int*)(p+0x20)<=n)*(int*)(p+0x20)=n+1;int *out=(int*)(p+0x24+n*4);if(!_func_0011B4F0(q[1],&D_001D8750)){*out=0;return;}if(!_func_0011B4F0(q[1],&D_001D8748)){*out=1;return;}if(!_func_0011B4F0(q[1],&D_001D8734)){*out=2;return;}if(!_func_0011B4F0(q[1],&D_001D8720))*out=3;}

void func_00107690(void) {
    int func_00029B60(...);
    func_00029B60();
}

unsigned int _func_001076A0(int a,int value){extern int D_003251FC,D_003251D0;int _func_0011B4F0(...);unsigned int i=0;for(;i<(unsigned)D_003251FC;i++){if(!_func_0011B4F0(D_003251D0+i*0x30,a)){if(value)*(int*)(D_003251D0+i*0x30+0x2c)=value;return i;}}return 0;}

int _func_00107700(int a,int b){extern int D_003251D0;return *(int*)(D_003251D0+0x24+(b+a*12)*4);}

