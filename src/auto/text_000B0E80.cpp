/* 8 functions from 0x000B0E80 to 0x000B1ABF, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void _func_000B0E80(int a,int b){extern int D_00313DAC,D_00313DB8[],D_00313BA8,D_00313D88;int state=D_00313DAC;if(state!=11&&state!=28)return;D_00313BA8=a;D_00313D88=(state==11)*2+28;int kind=D_00313DB8[a];if(kind==12){switch(a){case 0:D_00313DAC=400;return;case 1:D_00313DAC=401;return;case 2:D_00313DAC=402;return;default:return;}}D_00313DAC=b?0xffffff02+0x12e:0x12d;}

void func_000B0F00(int a0) {
    extern int D_00313BA8;
    extern int D_00313BB0;
    D_00313BA8 = a0;
    D_00313BB0 = a0;
}

int _func_000B0F40(void){return 0;}

extern int D_00313DAC, D_00313D88, D_00313B90, D_00313B54, D_00313B88, D_00313BA8;
int _func_00077180(...);
extern int D_00313DAC, D_00313BA8, D_00313B90, D_00313D88, D_00313B54, D_00313B88;
void _func_000B0FA0(int param_1)
{
  int func_00077180(...);
  bool bVar1;
  
  if (300 < D_00313DAC) {
    if (D_00313DAC < 0x193) {
      if (D_00313DAC == 0x192) {
        if (param_1 == 1) {
          D_00313DAC = 0x1e;
          return;
        }
        if (param_1 != 5) {
          return;
        }
        D_00313DAC = 0x21;
        D_00313BA8 = 2;
        return;
      }
      switch(D_00313DAC) {
      case 0x12d:
        if (param_1 == 1) {
          D_00313DAC = 0x26;
          return;
        }
        if (param_1 == 3) {
          D_00313DAC = 0x32;
          return;
        }
        break;
      default:
        return;
      case 0x12f:
        goto _L000B10BA;
      case 400:
        if (param_1 == 1) {
          D_00313DAC = 0x1e;
          return;
        }
        if (param_1 != 5) {
          return;
        }
        D_00313BA8 = 0;
        D_00313DAC = 0x21;
        return;
      case 0x191:
        if (param_1 == 1) {
          D_00313DAC = 0x1e;
          return;
        }
        if (param_1 != 5) {
          return;
        }
        D_00313BA8 = 1;
        D_00313DAC = 0x21;
        return;
      }
      goto LAB_000024b5;
    }
    switch(D_00313DAC) {
    case 500:
      goto joined_r0x0000251a;
    case 0x1f5:
      if (param_1 == 0) {
        D_00313DAC = 0x25;
        return;
      }
      break;
    case 0x1f6:
      if (param_1 == 0) {
        D_00313DAC = 0x21;
        return;
      }
      break;
    default:
      goto _L000B13E2;
    case 0x259:
      if (param_1 == 3) {
        func_00077180();
        D_00313DAC = 0x2f;
      }
      goto _L000B13E2;
    }
    goto LAB_0000252f;
  }
  if (D_00313DAC == 300) {
    if (param_1 == 1) {
      D_00313DAC = 0x1c;
      return;
    }
    if (param_1 != 3) {
      return;
    }
    D_00313DAC = 0x1f;
    return;
  }
  switch(D_00313DAC) {
  case 3:
  case 0x1d:
  case 0x28:
  case 0x29:
    if (param_1 == 0) {
_L000B0FDD:
      D_00313DAC = 0x1e;
      return;
    }
    goto LAB_0000252f;
  case 5:
    switch(param_1) {
    case 0:
      goto _L000B0FDD;
    case 1:
    case 3:
      goto _L000B13C1;
    case 2:
      D_00313DAC = 0x2c;
      return;
    default:
      break;
    }
  case 6:
  case 0x1b:
    if (param_1 == 3) {
      D_00313DAC = 0x1e;
      D_00313B90 = 0;
      return;
    }
    break;
  case 9:
    if (param_1 == 3) {
      D_00313DAC = 0x1c;
      return;
    }
    param_1 = param_1 + -7;
joined_r0x0000251a:
    if (param_1 == 0) {
      D_00313DAC = 0x20;
      return;
    }
    goto LAB_0000252f;
  case 0xb:
    D_00313DAC = 0x12f;
    return;
  case 0xc:
    switch(param_1) {
    case 1:
_L000B108E:
      D_00313DAC = 0x26;
      return;
    case 4:
      D_00313DAC = 0xd;
      return;
    case 5:
      D_00313DAC = 0x2d;
      return;
    case 6:
      D_00313DAC = D_00313D88;
      return;
    }
    break;
  case 0xd:
    if (param_1 == 1) {
      D_00313DAC = 0x26;
      return;
    }
    if (param_1 == 3) {
      D_00313DAC = 0x22;
      return;
    }
LAB_000024b5:
    if (param_1 == 6) {
      D_00313DAC = D_00313D88;
      return;
    }
    break;
  case 0x10:
  case 0x2b:
    if (param_1 == 1) {
      D_00313DAC = 0x26;
      return;
    }
    if (param_1 == 3) {
      D_00313DAC = 0x23;
      return;
    }
    if (param_1 == 6) {
      D_00313DAC = 0xc;
      return;
    }
    break;
  case 0x12:
    if (param_1 == 3) {
      D_00313DAC = 0x26;
      D_00313B90 = 0;
      return;
    }
    break;
  case 0x13:
    if (D_00313B54 != 1) {
      if (param_1 != 0) {
        if (param_1 == 1) {
          D_00313DAC = 0x1c;
          return;
        }
        if (param_1 != 3) {
          return;
        }
      }
      D_00313DAC = D_00313B88;
      return;
    }
    bVar1 = param_1 == 7;
    goto LAB_00002530;
  case 0x14:
    if (D_00313B54 != 1) goto joined_r0x000023c1;
    bVar1 = param_1 == 7;
    goto LAB_00002530;
  case 0x15:
    if (param_1 == 1) {
      D_00313DAC = 0x26;
      return;
    }
    if (param_1 == 3) {
      D_00313DAC = 0x24;
      return;
    }
    if (param_1 == 6) {
      D_00313DAC = D_00313D88;
      return;
    }
    break;
  case 0x18:
    switch(param_1) {
    case 0:
      D_00313DAC = D_00313B88;
      return;
    case 1:
    case 3:
      goto _L000B13C1;
    case 5:
      D_00313DAC = 0x19;
      return;
    }
    break;
  case 0x19:
    if (param_1 == 1) {
      D_00313DAC = 0x1c;
      return;
    }
    if (param_1 == 3) {
      D_00313DAC = 0x21;
      return;
    }
    break;
  case 0x27:
    if (param_1 == 0) {
      D_00313DAC = 7;
      return;
    }
    goto LAB_0000252f;
  case 0x2a:
joined_r0x000023c1:
    if (param_1 == 0) {
      D_00313DAC = D_00313B88;
      return;
    }
LAB_0000252f:
    bVar1 = param_1 == 1;
LAB_00002530:
    if (bVar1) {
_L000B13C1:
      D_00313DAC = 0x1c;
      return;
    }
    break;
  case 0x2c:
    if (param_1 == 1) {
      D_00313DAC = 2;
      return;
    }
    if (param_1 == 3) {
      D_00313DAC = 0x25;
      return;
    }
    break;
  case 0x2e:
    if (param_1 == 3) {
      D_00313DAC = ((D_00313B54 == 2) - 1 & 0x16) + 0x1c;
      return;
    }
    break;
  case 0x2f:
    switch(param_1) {
    case 1:
      goto _L000B108E;
    case 3:
      D_00313DAC = 0x32;
      return;
    case 6:
      D_00313DAC = D_00313D88;
      return;
    case 9:
      D_00313DAC = 0x259;
      return;
    }
    break;
  case 0x31:
    if (param_1 == 3) {
_L000B10BA:
      D_00313DAC = 0xb;
      return;
    }
  }
_L000B13E2:
  return;
}

void func_000B15D0(void)
{
  extern undefined4 D_00313DB4;
  int func_0013B380(...);
  extern undefined4 D_00313B00;
  extern undefined4 D_00313D80;
  int func_001387C0(...);
  extern undefined4 D_00313D7C;
  int func_00136F80(...);
  int func_000688D0(...);
  int iVar1;
  
  D_00313DB4 = func_0013B380(D_00313B00);
  D_00313D80 = func_001387C0(D_00313D7C);
  iVar1 = func_00136F80(D_00313D80,D_00313D7C);
  while (iVar1 == 2) {
    func_000688D0(D_00313D80);
    D_00313D80 = func_001387C0(D_00313D7C);
    iVar1 = func_00136F80(D_00313D80,D_00313D7C);
  }
  return;
}

void _func_000B1650(int p){extern int D_00313D80,D_00313D74,D_00313D78,D_00313B00,D_00313DB4;int _func_00138DC0(...),_func_000688D0(...),_func_0013B380(...);void _func_001008C0(void),_func_00100DA0(void);int pair[2];if(p==0&&_func_00138DC0(D_00313D80,0,0,pair)==0){D_00313D74=pair[0];D_00313D78=pair[1];}_func_000688D0(D_00313D80);unsigned int n=_func_0013B380(D_00313B00)-D_00313DB4;if(n<=500)do{_func_001008C0();_func_00100DA0();n=_func_0013B380(D_00313B00)-D_00313DB4;}while(n<=500);}

