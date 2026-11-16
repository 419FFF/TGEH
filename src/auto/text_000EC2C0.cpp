/* 25 functions from 0x000EC2C0 to 0x000ECF11, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000EC3C0(int param_1,int *param_2)
{
 float func_0013E9E0(...);
 *(float *)(param_1+0x60)=func_0013E9E0(param_2[0]);
 *(float *)(param_1+0x64)=func_0013E9E0(param_2[1]);
 *(float *)(param_1+0x68)=func_0013E9E0(param_2[2]);
}

void func_000EC400(int *out,char **in)
{
 int func_001053E0(...); extern int D_00324588;
 char *s=*in; char *last=s; int index=0; int len=0; char c;
 char *p=s;
 do { c=*p; ++p; } while(c);
 len=(int)(p-(s+1));
 if(len>0) {
   do {
     c=s[index];
     if(c==':'||c=='/'||c=='\\') last=s+index+1;
     ++index;
     p=s; do { c=*p; ++p; } while(c);
   } while(index < (int)(p-(s+1)));
 }
 *out=func_001053E0(D_00324588,last);
}

void func_000EC470(int param_1,int *param_2)
{
 int func_0013E9DB(...); unsigned int i=0;
 for(;i<0x100;i++) { int v=param_2[i]; if(!v) break; *(unsigned char *)(param_1+0x89+i)=func_0013E9DB(v); }
 *(unsigned char *)(param_1+0x88)=i;
 int p=*(int *)(param_1+0xa0); ++*(int *)(p+0x10);
}

void func_000EC4C0(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 0x80;
  }
  return;
}

void func_000EC4E0(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 1;
  }
  return;
}

void func_000EC500(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfe;
  }
  return;
}

void func_000EC520(int param_1, int *param_2)
{
  if (*param_2 != 0) {
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 2;
  }
  return;
}

void func_000EC5C0(undefined4 param_1, undefined4 *param_2)
{
  int func_0013E9DB(...);
  func_0013E9DB(*param_2);
  return;
}

void func_000EC640(undefined4 *param_1, undefined4 *param_2)
{
  int func_001053E0(...);
  extern undefined4 D_00324588;
  undefined4 uVar1;
  
  uVar1 = func_001053E0(D_00324588,*param_2);
  *param_1 = uVar1;
  return;
}

void func_000EC760(int p, unsigned int *a){int func_0013E9DB(...);int func_00116A90(...);int n=func_0013E9DB(*a);int*q=(int*)func_00116A90(n<<4,1,1);*(int*)(p+0x78)=(int)q;*(int*)(p+0x64)=0;}

void func_000EC970(void)
{
  extern undefined4 D_00324584;
  int func_00125BC0(...);
  extern undefined D_001DC8C0;
  int func_000EC1F0(...);
  int func_000EC230(...);
  int func_00125D20(...);
  extern undefined D_001D88E8;
  int func_000EC260(...);
  extern undefined D_001DC8B8;
  int func_000EC280(...);
  extern undefined D_001DC8AC;
  int func_000EC2A0(...);
  extern undefined D_001DC8A4;
  int func_000EC2C0(...);
  extern undefined D_001DC89C;
  int func_000EC3C0(...);
  extern undefined D_001D28F0;
  int func_000EC400(...);
  extern undefined D_001DC88C;
  int func_000EC470(...);
  extern undefined D_001DC880;
  extern undefined D_001DC870;
  extern undefined D_001DC864;
  extern undefined D_001D8824;
  int func_000EC540(...);
  extern undefined D_001DC858;
  extern undefined D_001DC844;
  extern undefined D_001DC834;
  extern undefined D_001DC824;
  extern undefined D_001DC810;
  int func_000EC5D0(...);
  extern undefined D_001DC808;
  int func_000EC600(...);
  int func_000EC7F0(...);
  int func_000EC660(...);
  extern undefined D_001DC800;
  int func_000EC760(...);
  extern undefined D_001DC7F8;
  int func_000EC790(...);
  undefined4 uVar1;
  
  D_00324584 = func_00125BC0(0,((undefined *)&D_001DC8C0),&func_000EC1F0,0);
  uVar1 = func_00125BC0(D_00324584,((undefined *)&D_001DC8C0),&func_000EC230,0);
  func_00125D20(uVar1,((undefined *)&D_001D88E8),&func_000EC260);
  func_00125D20(uVar1,((undefined *)&D_001DC8B8),&func_000EC280);
  func_00125D20(uVar1,((undefined *)&D_001DC8AC),&func_000EC2A0);
  func_00125D20(uVar1,((undefined *)&D_001DC8A4),&func_000EC2C0);
  func_00125D20(uVar1,((undefined *)&D_001DC89C),&func_000EC3C0);
  func_00125D20(uVar1,((undefined *)&D_001D28F0),&func_000EC400);
  func_00125D20(uVar1,((undefined *)&D_001DC88C),&func_000EC470);
  func_00125D20(uVar1,((undefined *)&D_001DC880),&func_000EC4C0);
  func_00125D20(uVar1,((undefined *)&D_001DC870),&func_000EC4E0);
  func_00125D20(uVar1,((undefined *)&D_001DC864),&func_000EC520);
  func_00125D20(uVar1,((undefined *)&D_001D8824),&func_000EC540);
  func_00125D20(uVar1,((undefined *)&D_001DC858),0xec5b0);
  func_00125D20(uVar1,((undefined *)&D_001DC844),&func_000EC5C0);
  func_00125D20(uVar1,((undefined *)&D_001DC834),&func_000EC5C0);
  func_00125D20(uVar1,((undefined *)&D_001DC824),&func_000EC500);
  func_00125D20(uVar1,((undefined *)&D_001DC810),&func_000EC5D0);
  uVar1 = func_00125BC0(D_00324584,((undefined *)&D_001DC808),&func_000EC600,&func_000EC7F0);
  func_00125D20(uVar1,((undefined *)&D_001D88E8),&func_000EC640);
  func_00125D20(uVar1,((undefined *)&D_001DC8B8),&func_000EC260);
  func_00125D20(uVar1,((undefined *)&D_001DC8A4),&func_000EC660);
  func_00125D20(uVar1,((undefined *)&D_001DC800),&func_000EC760);
  func_00125D20(uVar1,((undefined *)&D_001DC7F8),&func_000EC790);
  return;
}

void func_000ECB60(void) {
    extern int D_00307D08;
    int func_00122D30(...);
    func_00122D30(D_00307D08);
}

void func_000ECB70(unsigned int param_1)
{
 int func_00122D00(...); extern int D_00307D08;
 func_00122D00(D_00307D08,param_1);
}

void func_000ECEE0(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
{
  int func_00131990(...);
  extern undefined D_001DC8DC;
  int func_0013B7E0(...);
  extern undefined D_001D29C7;
  func_00131990(((undefined *)&D_001DC8DC));
  func_0013B7E0(param_1,param_2,param_3,param_4);
  func_00131990(((undefined *)&D_001D29C7));
  return;
}

