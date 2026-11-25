/* 16 functions from 0x000F86E0 to 0x000F9696, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000F86E0(int param_1)
{
  int func_0007E570(...);
  int func_0009D640(...);
  int func_0001C990(...);
  int func_0001CB50(...);
  int func_00088940(...);
  int func_000F8680(...);
  int func_00110330(...);
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1;
  if (*(char *)(param_1 + 0x284) != '\0') {
    puVar4 = (undefined4 *)(param_1 + 0x294);
    param_1 = 6;
    do {
      for (puVar1 = (undefined4 *)*puVar4; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        iVar2 = puVar1[2];
        if ((*(byte *)(iVar2 + 0x11) & 0x20) != 0) {
          func_0007E570(*(undefined4 *)(iVar2 + 0x60));
        }
        if (((*(ushort *)(iVar2 + 0x10) & 0x40) == 0) && ((*(ushort *)(iVar2 + 0x10) & 1) != 0)) {
          func_0009D640(iVar2);
          if (*(char *)(iVar2 + 0x13) == '\x06') {
            func_0001C990(iVar2);
          }
          else if (*(char *)(iVar2 + 0x13) == '\x18') {
            func_0001CB50(iVar2);
          }
        }
      }
      puVar4 = puVar4 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    func_00088940(*(undefined4 *)(iVar3 + 0xe0),1);
    func_000F8680(*(undefined4 *)(iVar3 + 0xe0));
    func_00110330(*(undefined4 *)(iVar3 + 0xe0),0);
    *(undefined1 *)(iVar3 + 0x284) = 0;
    *(undefined1 *)(iVar3 + 0x285) = 0;
  }
  return;
}

void func_000F87B0(void)
{
  int func_000F86E0(...);
  int func_0009D640(...);
  extern unsigned int D_00324AF8;
  extern unsigned int D_00324968[];
  extern unsigned int D_00324884;
  extern unsigned int D_0032485C;
  extern unsigned int D_00324888;
  unsigned int i;
  unsigned int p;

  for (i = 0; i < D_00324AF8; i++) {
    func_000F86E0(D_00324968[i]);
  }
  p = D_00324884;
  if ((*(unsigned char *)(p + 0x10) & 8) == 0) {
    func_0009D640(p);
    func_0009D640(D_0032485C);
    func_0009D640(D_00324888);
  }
}

void func_000F8810(int param_1)
{
  extern unsigned int D_003268B0;
  extern int D_003080AC;
  int func_0011A5E0(...);
  int func_000F8810(...);
  unsigned int *node;

  if ((*(unsigned char *)(param_1 + 0xd0) & 1) == 0) {
    if (*(unsigned char *)(param_1 + 0x22) == D_003268B0) {
      if (D_003080AC != 0) {
        func_0011A5E0(param_1, 1);
      } else {
        func_0011A5E0(param_1, 0);
      }
    }
    for (node = *(unsigned int **)(param_1 + 0x28); node != 0; node = (unsigned int *)node[3]) {
      if ((*(unsigned char *)((char *)node + 6) & 8) == 0) {
        func_000F8810(*node);
      }
    }
  }
}

void _func_000F8870(int param_1)
{
    extern int D_00324AF8;
    extern char D_001DD0D0;
    extern int D_003080AC;
    int func_0013E469(...);
    int func_0011B990(...);
    int func_0011BF40(...);
    int func_0009D780(...);
    int func_0001CA30(...);
    int func_0001CB60(...);
    int func_00117100(...);
    char func_00012CF0(...);
    int func_00116E50(...);
    int func_00117130(...);
    int func_00013790(...);
    int func_00116FB0(...);
    int func_000F8810(...);
    int func_00110330(...);
    int **puVar1;
    int iVar2;
    int uVar4;
    unsigned int uVar5;
    int *puVar6;
    unsigned int uVar7;
    int iVar8;
    int local_84;
    char local_80[128];

    if (*(char *)(param_1 + 0x284) == 0) {
        if ((unsigned int)D_00324AF8 > 1) {
            func_0013E469(local_80, &D_001DD0D0, *(int *)(*(int *)(param_1 + 0xe0) + 0x38));
            if (*(int *)(param_1 + 0x278) != 0) {
                func_0011B990(*(int *)(param_1 + 0x278));
                *(int *)(param_1 + 0x278) = 0;
            }
            if (D_003080AC == 0) {
                uVar4 = func_0011BF40(local_80, 0);
            } else {
                uVar4 = func_0011BF40(local_80, 1);
            }
            *(int *)(param_1 + 0x278) = uVar4;
        }
        func_000F8810(*(int *)(param_1 + 0xe0));
        func_00110330(*(int *)(param_1 + 0xe0), 1);
        puVar6 = (int *)(param_1 + 0x294);
        local_84 = 6;
        do {
            for (puVar1 = *(int ***)puVar6; puVar1 != 0; puVar1 = (int **)*puVar1) {
                iVar8 = (int)puVar1[2];
                if ((*(unsigned short *)(iVar8 + 0x10) & 0x40) == 0 && (*(unsigned short *)(iVar8 + 0x10) & 1) != 0) {
                    func_0009D780(iVar8);
                    if (*(char *)(iVar8 + 0x13) == 6) {
                        func_0001CA30(iVar8);
                    } else if (*(char *)(iVar8 + 0x13) == 0x18) {
                        func_0001CB60(iVar8);
                    }
                }
            }
            puVar6 = puVar6 + 3;
            local_84--;
        } while (local_84 != 0);
        *(char *)(param_1 + 0x284) = 1;
        *(char *)(param_1 + 0x285) = 1;
        func_00117100();
        iVar8 = 0;
        uVar7 = 0;
        for (puVar6 = *(int **)(param_1 + 0x2d0); puVar6 != 0; puVar6 = (int *)*puVar6) {
            iVar2 = puVar6[2];
            if (*(char *)(iVar2 + 0x13) == 0x19 && func_00012CF0(iVar2) != 0) {
                iVar8 = func_00116E50(iVar8, uVar7 * 4 + 4, 1, 1);
                *(int *)(iVar8 + uVar7 * 4) = iVar2;
                uVar7 = uVar7 + 1;
            }
        }
        func_00117130();
        uVar5 = 0;
        if (uVar7 > 0) {
            do {
                func_00013790(*(int *)(iVar8 + uVar5 * 4));
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
        }
        if (iVar8 != 0) {
            func_00116FB0(iVar8);
        }
    }
}

void _func_000F8A10(int param_1)
{
  // The function signature is derived from the assembly and best attempt. 
  // Assuming all necessary prototypes/includes are handled by the build system for now.

  int func_000F8580(...); // Placeholder declaration for external calls
  int func_000F80F0(...);
  int func_00110170(...);
  int func_000688D0(...);
  int func_001100A0(...);
  int func_0012F730(...);

  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar3 = param_1;
  if (((*(char *)(param_1 + 0x284) != '\0') && (*(char *)(param_1 + 0x28c) == '\0')) &&
     (cVar4 = func_000F8580(*(undefined4 *)(param_1 + 0xe0)), cVar4 != '\0')) {
    func_000F80F0(1);
    func_00110170(*(undefined4 *)(iVar3 + 0xe0));
    func_000F80F0(0);
    func_000688D0(iVar3);
    uVar6 = 0;
    *(undefined1 *)(iVar3 + 0x28c) = 1;
    if (*(int *)(iVar3 + 0x27c) != 0) {
      iVar7 = 0;
      do {
        func_001100A0(*(undefined4 *)(iVar7 + *(int *)(iVar3 + 0x280)),&param_1);
        puVar1 = (undefined4 *)(iVar7 + *(int *)(iVar3 + 0x280));
        func_0012F730(puVar1 + 2,*puVar1,param_1);
        fVar2 = *(float *)(*(int *)(*(int *)(iVar3 + 0x280) + iVar7) + 0xd8);
        iVar5 = *(int *)(iVar3 + 0x280) + iVar7;
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + 0x18;
        *(float *)(iVar5 + 4) = fVar2 * fVar2;
      } while (uVar6 < *(uint *)(iVar3 + 0x27c));
    }
  }
  return;
}

void func_000F8AE0(int param_1)
{
  int func_0009D9E0(...);
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = param_1;
  if ((*(char *)(param_1 + 0x284) != '\0') && (*(char *)(param_1 + 0x28d) == '\0')) {
    *(undefined1 *)(param_1 + 0x28d) = 1;
    puVar4 = (undefined4 *)(param_1 + 0x294);
    param_1 = 6;
    do {
      for (puVar1 = (undefined4 *)*puVar4; puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        iVar2 = puVar1[2];
        if (((*(ushort *)(iVar2 + 0x10) & 0x200) == 0) && ((*(ushort *)(iVar2 + 0x10) & 1) != 0)) {
          func_0009D9E0(iVar2);
        }
        if ((*(byte *)(iVar2 + 0x11) & 2) == 0) {
          *(undefined1 *)(iVar3 + 0x28d) = 0;
        }
      }
      puVar4 = puVar4 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

unsigned int func_000F8F40(int *p) {
 extern unsigned int D_00324AF8;
 extern int *D_00324968[];
 unsigned int i;
 int *q;
 q = (int *)p[11];
 while (q && !(p[8] & 8)) { p=*(int **)q; q=(int *)p[11]; }
 for(i=0;i<D_00324AF8;i++) if(D_00324968[i][56]==(int)p) return (unsigned int)D_00324968[i];
 return 0;
}

undefined4 func_000F91D0(undefined4 param_1)
{
  extern undefined4 D_00324AF8;
  int func_0011B4F0(...);
  extern undefined D_00324968;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (D_00324AF8 != 0) {
    do {
      iVar1 = func_0011B4F0(*(undefined4 *)(*(int *)(((undefined *)&D_00324968) + uVar2 * 4) + 0x38),param_1);
      if (iVar1 == 0) {
        return *(undefined4 *)(((undefined *)&D_00324968) + uVar2 * 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < D_00324AF8);
  }
  return 0;
}

int func_000F9220(int param_1, undefined4 param_2)
{
  int func_0013F2E9(...);
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x27c) != 0) {
    iVar2 = 0;
    do {
      iVar1 = func_0013F2E9(*(undefined4 *)(*(int *)(iVar2 + *(int *)(param_1 + 0x280)) + 0x38),
                             param_2);
      if (iVar1 == 0) {
        return *(int *)(param_1 + 0x280) + uVar3 * 0x18;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x18;
    } while (uVar3 < *(uint *)(param_1 + 0x27c));
  }
  return 0;
}

int _func_000F9280(int p){extern int _D_00324AFC,_D_00324AF8,_D_00324968[]; int _func_000F9220(...); char a[200]={0}; if(_D_00324AFC){unsigned i=0; if(*(int*)(_D_00324AFC+0xe4)) do{int v=_func_000F9220(*(int*)(_D_00324AFC+0xe8+i*8),p); if(v)return v; a[*(int*)(*(int*)(_D_00324AFC+0xe8+i*8)+0x30c)]=1; ++i;}while(i<(unsigned)*(int*)(_D_00324AFC+0xe4));} for(unsigned i=0;i<(unsigned)_D_00324AF8;i++)if(!a[i]){int v=_func_000F9220(_D_00324968[i],p);if(v)return v;} return 0;}

void _func_000F9330(int p){extern int _D_00324AF8,_D_00324968[]; int _func_000F7FB0(...),_func_0011CCD0(...); for(unsigned i=0;i<(unsigned)_D_00324AF8;i++)if(*(int*)(_D_00324968[i]+0xe0)==p)return; int x=_func_000F7FB0(p);*(char*)(x+0x284)=0;*(char*)(x+0x28c)=0; for(int* n=*(int**)(p+0x30);n;n=(int*)n[3])if(!(*(unsigned char*)(*n+0x20)&0x10))_func_000F9330(_func_0011CCD0(*n));}

void func_000F93A0(int a,int b) {
 int _func_000F91D0(...); int _func_0011B4F0(...);
 int *p=(int *)_func_000F91D0(a); unsigned i=0; unsigned count=*(unsigned *)((char *)p+0xe4);
 if(count==0)return;
 {
   int **cur=(int **)((char *)p+0xe8);
   do {
     int *node=*cur++;
     int *state=*(int **)((char *)node+0xe0);
     int value=*(int *)((char *)state+0x38);
     if(!_func_0011B4F0(value,b)) goto found;
     ++i;
   } while(i<*(unsigned *)((char *)p+0xe4));
   return;
 found:
   count=*(unsigned *)((char *)p+0xe4)-1;
   *(unsigned *)((char *)p+0xe4)=count;
   if(i>=count)return;
   {
     unsigned *dst=(unsigned *)((char *)p+0xe8+i*8);
     do {
       dst[0]=dst[2]; dst[1]=dst[3];
       ++i; dst+=2;
     } while(i<*(unsigned *)((char *)p+0xe4));
   }
 }
}

void func_000F9610(int param_1) {
 int _func_0012F120(...); char _func_000F8580(...); int _func_001360A0(...); int _func_00136480(...); int _func_001364D0(...); int _func_00109730(...); int _func_00136360(...);
 extern unsigned int _D_00313B60;
 __declspec(align(16)) char local[0x4c];
 int v0=0,v1=0,v2=0,v3=0;
 _func_0012F120(local);
 if(!_func_000F8580(param_1)) {
   _func_001360A0(&v0,0);
   _func_00136480(_D_00313B60,local+0xc);
   _func_001364D0(local+0x14);
   _func_00109730();
   _func_00136360();
   if(!_func_000F8580(param_1))return;
 }
}

