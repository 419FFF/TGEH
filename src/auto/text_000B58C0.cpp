/* 4 functions from 0x000B58C0 to 0x000B6636, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000B58C0(int param_1, int param_2)
{
  extern undefined D_00313F15;
  extern undefined D_00313F17;
  extern undefined D_00313F16;
  extern undefined D_00313F18;
  extern undefined4 D_00313ED8;
  int func_000DD510(...);
  int func_000688D0(...);
  int func_000DD240(...);
  int func_000DEB50(...);
  int func_000DDB30(...);
  extern undefined4 D_00313EF0;
  extern undefined D_001D8DAC;
  int func_000C7D70(...);
  int func_000C7D90(...);
  int func_000C76D0(...);
  int func_000C39F0(...);
  int func_000C6D70(...);
  int func_000C5630(...);
  int func_000C7D20(...);
  extern undefined D_001D8DF0;
  int func_000D3A20(...);
  int func_000D2A00(...);
  int func_000D4DC0(...);
  int func_000D3A60(...);
  extern undefined D_001D8DCC;
  int func_000C2F00(...);
  int func_000C2DA0(...);
  int func_000C19D0(...);
  int func_000C1E50(...);
  int func_000C1870(...);
  int func_000C1A70(...);
  extern undefined D_001D8D58;
  int func_000E7050(...);
  int func_000E5DA0(...);
  int func_000E70D0(...);
  int func_000E6C30(...);
  int func_000E6FC0(...);
  int func_000E6A20(...);
  int func_000E3EC0(...);
  extern undefined D_001D8D80;
  int func_000D83B0(...);
  int func_000D8090(...);
  int func_000D9B60(...);
  int func_000D9430(...);
  extern undefined D_001D8DB8;
  int func_000CD000(...);
  int func_000D19D0(...);
  int func_000CC9B0(...);
  int func_000D2360(...);
  int func_000D2750(...);
  int func_000CCDB0(...);
  extern undefined D_001D8DD8;
  int func_000C9270(...);
  int func_000C91C0(...);
  int func_000C9000(...);
  int func_000C8180(...);
  extern undefined4 D_00313EE0;
  extern undefined D_001D8D40;
  int func_000C0A50(...);
  int func_000C1730(...);
  int func_000C1720(...);
  int func_000C14F0(...);
  int func_000BFCD0(...);
  int func_000C1390(...);
  int func_000BF2B0(...);
  extern undefined D_001D8D70;
  int func_000DB0C0(...);
  int func_000DC430(...);
  int func_000DC4E0(...);
  int func_000DA800(...);
  int func_000DB0B0(...);
  int func_000BDCF0(...);
  int func_000BDCA0(...);
  int func_000BD9D0(...);
  int func_000BCDB0(...);
  int func_000BDD90(...);
  extern undefined D_001D8D34;
  int func_000E8350(...);
  int func_000E8320(...);
  int func_000E8AB0(...);
  int func_000E87E0(...);
  int func_000E7120(...);
  extern undefined D_001D8D60;
  int func_000D65B0(...);
  int func_000D6AB0(...);
  int func_000D6E80(...);
  int func_000D65D0(...);
  extern undefined D_001D8DC0;
  int func_000B8C50(...);
  int func_000B8CC0(...);
  int func_000B9E10(...);
  int func_000B9690(...);
  int func_000B8B30(...);
  extern undefined D_001D8DFC;
  int func_000CA970(...);
  int func_000C9AE0(...);
  int func_000C93F0(...);
  extern undefined D_001D8D4C;
  int func_000BC190(...);
  int func_000BC800(...);
  int func_000BBA00(...);
  int func_000BC4A0(...);
  int func_000BBB90(...);
  extern undefined D_001D8D78;
  int func_000E2D70(...);
  int func_000E2D30(...);
  int func_000E2C40(...);
  int func_000E2F50(...);
  int func_000E2BD0(...);
  int func_000E2C60(...);
  extern undefined D_001D8D88;
  int func_000EB340(...);
  int func_000EB330(...);
  int func_000EB2C0(...);
  int func_000EAD80(...);
  extern undefined D_001D8D68;
  int func_000C80F0(...);
  extern undefined D_001D8D98;
  int func_000DF3D0(...);
  int func_000E08C0(...);
  int func_000DF450(...);
  int func_000DED90(...);
  extern undefined D_001D8D20;
  int func_000E1330(...);
  int func_000E1120(...);
  extern undefined D_001D8DE4;
  int func_000E9D90(...);
  int func_000E9740(...);
  extern undefined D_001D8D2C;
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  
  bVar2 = 0 != param_2;
  bVar3 = param_2 == 1;
  bVar4 = 2 != param_2;
  bVar5 = param_2 == 3;
  bVar6 = param_2 == 4;
  bVar7 = param_2 == 5;
  bVar8 = param_2 == 6;
  bVar9 = 7 != param_2;
  bVar10 = 0xb != param_2;
  if (bVar3) {
    cVar1 = D_00313F15;
    if ((((param_1 != 0x13) && (cVar1 = D_00313F17, param_1 != 0x14)) &&
        (cVar1 = D_00313F16, param_1 != 0x15)) && (cVar1 = D_00313F18, param_1 != 0x12)) {
      cVar1 = D_00313ED8 == param_1;
    }
    if (cVar1 != '\0') {
      bVar3 = false;
    }
  }
  if (bVar7) {
    cVar1 = D_00313F15;
    if (((param_1 != 0x13) && (cVar1 = D_00313F17, param_1 != 0x14)) &&
       ((cVar1 = D_00313F16, param_1 != 0x15 && (cVar1 = D_00313F18, param_1 != 0x12)))) {
      cVar1 = D_00313ED8 == param_1;
    }
    if (cVar1 == '\0') {
      bVar7 = false;
    }
  }
  switch(param_1) {
  case 1:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (bVar5) {
              func_000DD510();
            }
            else {
              if (!bVar7) {
                if (!bVar8) {
                  return;
                }
                func_000688D0();
                return;
              }
              func_000DD240();
            }
          }
          else {
            func_000DEB50();
          }
          goto LAB_00002bd8;
        }
        func_000DDB30();
      }
      else {
        func_000688D0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8DAC;
    }
    break;
  case 2:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000C7D70();
                return;
              }
              if (bVar6) {
                func_000C7D90();
                return;
              }
              if (bVar5) {
                func_000C76D0();
                return;
              }
              if (bVar10) {
                return;
              }
              func_000688D0();
              return;
            }
            func_000C39F0();
          }
          else {
            func_000C6D70();
          }
          goto LAB_00002bd8;
        }
        func_000C5630();
      }
      else {
        func_000C7D20();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8DF0;
    }
    break;
  case 3:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000688D0();
                return;
              }
              if ((param_2 != 9) && (param_2 != 10)) {
                return;
              }
              func_000D3A20();
              return;
            }
            func_000D2A00();
          }
          else {
            func_000D4DC0();
          }
          goto LAB_00002bd8;
        }
        func_000D3A60();
      }
      else {
        func_000688D0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8DCC;
    }
    break;
  case 4:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000C2F00();
                return;
              }
              if (!bVar5) {
                return;
              }
              func_000C2DA0();
              return;
            }
            func_000C19D0();
          }
          else {
            func_000C1E50();
          }
          goto LAB_00002bd8;
        }
        func_000C1870();
      }
      else {
        func_000C1A70();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D58;
    }
    break;
  case 5:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (bVar5) {
              func_000E7050();
            }
            else {
              if (!bVar7) {
                if (bVar8) {
                  func_000E5DA0();
                  return;
                }
                if (bVar10) {
                  return;
                }
                func_000E70D0();
                return;
              }
              func_000E6C30();
            }
          }
          else {
            func_000E6FC0();
          }
          goto LAB_00002bd8;
        }
        func_000E6A20();
      }
      else {
        func_000E3EC0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D80;
    }
    break;
  case 6:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (bVar5) {
              func_000D83B0();
            }
            else {
              if (!bVar7) {
                if (!bVar8) {
                  return;
                }
                func_000688D0();
                return;
              }
              func_000D8090();
            }
          }
          else {
            func_000D9B60();
          }
          goto LAB_00002bd8;
        }
        func_000D9430();
      }
      else {
        func_000688D0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8DB8;
    }
    break;
  case 7:
    if (bVar9) {
      if (bVar2) {
        if (bVar8) {
          func_000CD000();
        }
        else {
          if (!bVar3) {
            if (bVar4) {
              if (!bVar7) {
                if (!bVar5) {
                  return;
                }
                func_000D19D0();
                return;
              }
              func_000CC9B0();
            }
            else {
              func_000D2360();
            }
            goto LAB_00002bd8;
          }
          func_000D2750();
        }
      }
      else {
        func_000CCDB0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8DD8;
    }
    break;
  case 8:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000688D0();
                return;
              }
              if (!bVar5) {
                return;
              }
              func_000C9270();
              return;
            }
            func_000C91C0();
          }
          else {
            func_000C9000();
          }
          goto LAB_00002bd8;
        }
        func_000C8180(D_00313EE0);
      }
      else {
        func_000688D0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D40;
    }
    break;
  case 9:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000C0A50();
                return;
              }
              if (!bVar6) {
                if (!bVar5) {
                  return;
                }
                func_000C1730();
                return;
              }
              func_000C1720();
              return;
            }
            func_000C14F0();
          }
          else {
            func_000BFCD0();
          }
          goto LAB_00002bd8;
        }
        func_000C1390();
      }
      else {
        func_000BF2B0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D70;
    }
    break;
  case 10:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (bVar5) {
              func_000DB0C0();
            }
            else {
              if (!bVar7) {
                if (!bVar8) {
                  return;
                }
                func_000688D0();
                return;
              }
              func_000DC430();
            }
          }
          else {
            func_000DC4E0();
          }
          goto LAB_00002bd8;
        }
        func_000DA800();
      }
      else {
        func_000DB0B0();
      }
    }
    else {
      D_00313EF0 = 0x3f00;
    }
    break;
  case 0xb:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000688D0();
                return;
              }
              if (!bVar5) {
                return;
              }
              func_000BDCF0();
              return;
            }
            func_000BDCA0();
          }
          else {
            func_000BD9D0();
          }
          goto LAB_00002bd8;
        }
        func_000BCDB0();
      }
      else {
        func_000BDD90();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D34;
    }
    break;
  case 0xc:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (!bVar5) {
                return;
              }
              func_000E8350();
              return;
            }
            func_000E8320();
          }
          else {
            func_000E8AB0();
          }
          goto LAB_00002bd8;
        }
        func_000E87E0();
      }
      else {
        func_000E7120();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D60;
    }
    break;
  case 0xd:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000688D0();
                return;
              }
              if (!bVar5) {
                if (bVar10) {
                  return;
                }
                func_000D65B0();
                return;
              }
              func_000688D0();
              return;
            }
            func_000D6AB0();
          }
          else {
            func_000D6E80();
          }
          goto LAB_00002bd8;
        }
        func_000D65D0();
      }
      else {
        func_000688D0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8DC0;
    }
    break;
  case 0xe:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar5) {
                func_000688D0();
                return;
              }
              if (bVar10) {
                return;
              }
              func_000B8C50();
              return;
            }
            func_000B8CC0();
          }
          else {
            func_000B9E10();
          }
          goto LAB_00002bd8;
        }
        func_000B9690();
      }
      else {
        func_000B8B30();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8DFC;
    }
    break;
  case 0xf:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000688D0();
                return;
              }
              if (!bVar5) {
                return;
              }
              func_000688D0();
              return;
            }
            func_000CA970();
          }
          else {
            func_000C9AE0();
          }
          goto LAB_00002bd8;
        }
        func_000C93F0(D_00313EE0);
      }
      else {
        func_000688D0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D4C;
    }
    break;
  case 0x10:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar8) {
                func_000688D0();
                return;
              }
              if (!bVar5) {
                return;
              }
              func_000BC190();
              return;
            }
            func_000BC800();
          }
          else {
            func_000BBA00();
          }
          goto LAB_00002bd8;
        }
        func_000BC4A0();
      }
      else {
        func_000BBB90();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D78;
    }
    break;
  case 0x11:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (bVar6) {
              func_000E2D70();
            }
            else {
              if (!bVar7) {
                if (!bVar8) {
                  return;
                }
                func_000E2D30();
                return;
              }
              func_000E2C40();
            }
          }
          else {
            func_000E2F50();
          }
          goto LAB_00002bd8;
        }
        func_000E2BD0();
      }
      else {
        func_000E2C60();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D88;
    }
    break;
  case 0x12:
    if (bVar9) {
      if (bVar2) {
        if (param_2 == 0xc) {
          func_000EB340();
        }
        else if (bVar4) {
          if (bVar8) {
            func_000EB330();
          }
          else if (bVar5) {
            func_000688D0();
          }
        }
        else {
          func_000EB2C0();
        }
      }
      else {
        func_000EAD80();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D68;
    }
    break;
  case 0x13:
    if (bVar9) {
      if (bVar2) {
        if (bVar4) {
          if (bVar8) {
            func_000688D0();
          }
        }
        else {
          func_000688D0();
        }
      }
      else {
        func_000C80F0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D98;
    }
    break;
  case 0x14:
    if (bVar9) {
      if (bVar2) {
        if (bVar4) {
          if (bVar8) {
            func_000DF3D0();
          }
          else if (bVar5) {
            func_000E08C0();
          }
        }
        else {
          func_000DF450();
        }
      }
      else {
        func_000DED90();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D20;
    }
    break;
  case 0x15:
    if (bVar9) {
      if (bVar2) {
        if (bVar4) {
          if (bVar8) {
            func_000688D0();
          }
          else if (bVar5) {
            func_000688D0();
          }
        }
        else {
          func_000E1330();
        }
      }
      else {
        func_000E1120();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8DE4;
    }
    break;
  case 0x16:
    if (bVar9) {
      if (bVar2) {
        if (!bVar3) {
          if (bVar4) {
            if (!bVar7) {
              if (bVar5) {
                func_000688D0();
                return;
              }
              if (!bVar8) {
                return;
              }
              func_000688D0();
              return;
            }
            func_000E2C40();
          }
          else {
            func_000E9D90();
          }
          goto LAB_00002bd8;
        }
        func_000E9740();
      }
      else {
        func_000688D0();
      }
    }
    else {
      D_00313EF0 = (undefined4)&D_001D8D2C;
    }
  }
  if (bVar3) {
    D_00313ED8 = param_1;
  }
LAB_00002bd8:
  if (bVar7) {
    D_00313ED8 = 0;
  }
  return;
}

extern unsigned int D_00313EF4, D_00313EF8, D_00313EFC, D_00313F00, D_00313F04, D_00313F08, D_00313EDC, D_00313EE0, D_00313ED8;
extern unsigned char D_00313F0C, D_00313F15, D_00313F16, D_00313F17, D_00313F18;
void func_000B58C0(int, int);
void func_000B5860(void);
void func_000A2DB0(int);
void _func_000B6510(int a,int b){extern unsigned int D_00313EF4,D_00313EF8,D_00313EFC,D_00313F00,D_00313F04,D_00313F08,D_00313EDC,D_00313EE0,D_00313ED8;extern unsigned char D_00313F0C,D_00313F15,D_00313F16,D_00313F17,D_00313F18;extern void func_000B58C0(int,int);extern void func_000B5860(void);extern void func_000A2DB0(int);D_00313EF4=0;D_00313EF8=0;D_00313EFC=0;D_00313F00=0x40400000;D_00313F04=0x40200000;D_00313F08=0x40000000;D_00313EDC=a;D_00313EE0=b;D_00313F0C=0;func_000B58C0(a,1);func_000B58C0(a,7);func_000B5860();if(D_00313ED8!=1&&D_00313ED8!=3&&D_00313ED8!=6&&D_00313ED8!=10&&D_00313ED8!=13&&D_00313ED8!=8&&!D_00313F18&&!D_00313F17&&!D_00313F15&&!D_00313F16&&D_00313ED8!=16)func_000A2DB0(1);}

void func_000B65E0(undefined4 param_1)
{
  int func_000B58C0(...);
  func_000B58C0(param_1,0xb);
  func_000B58C0(param_1,7);
  return;
}

void func_000B6600(undefined4 param_1)
{
  int func_000A0690(...);
  int func_00101610(...);
  func_000B58C0(param_1,5);
  func_000B58C0(param_1,7);
  D_00313EF4 = 1;
  func_000A2DB0(0);
  func_000A0690(1);
  func_00101610();
  return;
}

