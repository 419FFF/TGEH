/* 6 functions from 0x000EEDB0 to 0x000EFBD4, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000EEDB0(void)
{
  int func_00110300(...);
  int func_00110330(...);
  extern int D_00324620, D_00324624, D_00324628, D_0032462C, D_00324630, D_00324634, D_00324638, D_0032463C, D_00324694;
  extern char D_001DCAE4, D_001DCAD8, D_001DCAC8, D_001DCABC, D_001DCAB0, D_001DCAA4, D_001DCA94, D_001DCA88;
  int o1, o2, o3, o8;
  struct { int a[4]; int o4, o5, o6, o7; int e[2]; } L;
  o1 = func_00110300(*(int *)(D_00324620 + 0x2c), &D_001DCAE4, 0);
  o2 = func_00110300(*(int *)(D_00324624 + 0x2c), &D_001DCAD8, 0);
  o3 = func_00110300(*(int *)(D_00324628 + 0x2c), &D_001DCAC8, 0);
  L.o4 = func_00110300(*(int *)(D_0032462C + 0x2c), &D_001DCABC, 0);
  L.o5 = func_00110300(*(int *)(D_00324630 + 0x2c), &D_001DCAB0, 0);
  L.o6 = func_00110300(*(int *)(D_00324634 + 0x2c), &D_001DCAA4, 0);
  L.o7 = func_00110300(*(int *)(D_0032463C + 0x2c), &D_001DCA94, 0);
  o8 = func_00110300(*(int *)(D_00324638 + 0x2c), &D_001DCA88, 0);
  func_00110330(o1, 0);
  func_00110330(o2, 0);
  func_00110330(o3, 0);
  func_00110330(L.o4, 0);
  func_00110330(L.o5, 0);
  func_00110330(L.o6, 0);
  func_00110330(L.o7, 0);
  if (o8 != 0)
    func_00110330(o8, 0);
  switch (D_00324694) {
  case 3: func_00110330(o1, 1); break;
  case 4: func_00110330(o2, 1); break;
  case 5: func_00110330(o3, 1); break;
  case 6: func_00110330(L.o4, 1); break;
  case 7: func_00110330(L.o5, 1); break;
  case 8: func_00110330(L.o6, 1); break;
  case 9:
  case 14: func_00110330(L.o7, 1); break;
  case 2: func_00110330(o8, 1); break;
  }
}

void func_000EEFD0(void)
{
  int func_0009F820(...);
  extern undefined D_00324670;
  extern undefined D_0032466C;
  extern undefined D_0032466D;
  extern undefined D_00324692;
  extern undefined D_0032466E;
  extern undefined D_0032466F;
  extern undefined D_00324675;
  extern undefined D_00324672;
  extern undefined D_00324673;
  extern undefined D_00324674;
  extern undefined D_0032467A;
  extern undefined D_00324691;
  extern undefined D_00324677;
  extern undefined D_00324678;
  extern undefined D_00324679;
  extern undefined D_0032467F;
  extern undefined D_0032467B;
  extern undefined D_0032467C;
  extern undefined D_0032467D;
  extern undefined D_0032467E;
  extern undefined D_00324684;
  extern undefined D_00324681;
  extern undefined D_00324682;
  extern undefined D_00324683;
  extern undefined D_00324689;
  extern undefined D_00324685;
  extern undefined D_00324686;
  extern undefined D_00324687;
  extern undefined D_00324688;
  extern undefined D_0032468E;
  extern undefined D_0032468B;
  extern undefined D_0032468C;
  extern undefined D_0032468D;
  extern undefined D_00324693;
  extern undefined D_0032468F;
  extern undefined D_00324690;
  extern undefined D_00324671;
  extern undefined D_00324676;
  extern undefined D_00324680;
  extern undefined D_0032468A;
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_14 = 0;
  local_1c = 1;
  local_18 = 2;
  local_10 = 3;
  local_4 = 4;
  local_8 = 5;
  local_20 = 6;
  local_c = 7;
  uVar5 = func_0009F820();
  if ((uVar5 & 0x200) == 0) {
    local_20 = 0xffffffff;
  }
  cVar1 = func_0009F820();
  if (-1 < cVar1) {
    local_4 = 0xffffffff;
  }
  uVar5 = func_0009F820();
  if ((uVar5 & 0x100) == 0) {
    local_1c = 0xffffffff;
  }
  uVar5 = func_0009F820();
  if ((uVar5 & 0x40) == 0) {
    local_18 = 0xffffffff;
  }
  uVar5 = func_0009F820();
  if ((uVar5 & 8) == 0) {
    local_8 = 0xffffffff;
  }
  bVar2 = func_0009F820();
  if ((bVar2 & 1) == 0) {
    local_c = 0xffffffff;
  }
  uVar5 = func_0009F820();
  if ((uVar5 & 2) == 0) {
    local_10 = 0xffffffff;
  }
  uVar5 = func_0009F820();
  if ((uVar5 & 4) == 0) {
    local_14 = 0xffffffff;
  }
  D_00324670 = 0x15;
  uVar5 = local_10;
  if (0x7fffffff < local_10) {
    uVar5 = (byte)(((int)local_c < 0) - 1) & local_c;
  }
  D_0032466C = (char)uVar5;
  bVar2 = (byte)local_c;
  D_0032466D = bVar2;
  if ((int)local_c < 0) {
    D_0032466D = ((int)local_10 < 0) - 1U & (byte)local_10;
  }
  bVar6 = (byte)local_8;
  D_00324692 = (byte)local_18;
  D_0032466E = D_00324692;
  if (((int)local_18 < 0) && (D_0032466E = bVar6, (int)local_8 < 0)) {
    D_0032466E = ((int)local_1c < 0) - 1U & (byte)local_1c;
  }
  uVar5 = local_20;
  if (((int)local_20 < 0) && (uVar5 = local_1c, (int)local_1c < 0)) {
    uVar5 = (byte)(((int)local_8 < 0) - 1) & local_8;
  }
  D_0032466F = (char)uVar5;
  D_00324675 = 0x13;
  bVar3 = (byte)local_20;
  D_00324672 = bVar3;
  if ((int)local_20 < 0) {
    D_00324672 = 1;
  }
  bVar4 = (byte)local_14;
  D_00324673 = bVar4;
  if ((int)local_14 < 0) {
    if ((int)local_10 < 0) {
      D_00324673 = D_00324692;
      if ((int)local_18 < 0) {
        D_00324673 = 1;
      }
    }
    else {
      D_00324673 = (byte)local_10;
    }
  }
  D_00324674 = bVar6;
  if ((((int)local_8 < 0) && (D_00324674 = D_00324692, (int)local_18 < 0)) &&
     (D_00324674 = bVar4, (int)local_14 < 0)) {
    D_00324674 = 1;
  }
  D_0032467A = 0xb;
  D_00324691 = (byte)local_4;
  D_00324677 = D_00324691;
  if (0x7fffffff < local_4) {
    D_00324677 = 2;
  }
  D_00324678 = bVar6;
  if ((int)local_8 < 0) {
    if ((int)local_1c < 0) {
      D_00324678 = bVar4;
      if ((int)local_14 < 0) {
        D_00324678 = 2;
      }
    }
    else {
      D_00324678 = (byte)local_1c;
    }
  }
  D_00324679 = bVar4;
  if ((int)local_14 < 0) {
    if ((int)local_10 < 0) {
      if ((int)local_1c < 0) {
        D_00324679 = 2;
      }
      else {
        D_00324679 = (byte)local_1c;
      }
    }
    else {
      D_00324679 = (byte)local_10;
    }
  }
  D_0032467F = 0x16;
  D_0032467B = bVar2;
  if (((int)local_c < 0) && (D_0032467B = bVar4, (int)local_14 < 0)) {
    D_0032467B = 3;
  }
  D_0032467C = bVar4;
  if (((int)local_14 < 0) && (D_0032467C = bVar2, 0x7fffffff < local_c)) {
    D_0032467C = 3;
  }
  D_0032467D = D_00324691;
  if ((((int)local_4 < 0) && (D_0032467D = bVar6, (int)local_8 < 0)) &&
     (D_0032467D = bVar3, (int)local_20 < 0)) {
    D_0032467D = 3;
  }
  if ((int)local_1c < 0) {
    D_0032467E = bVar6;
    if (((int)local_8 < 0) && (D_0032467E = D_00324692, (int)local_18 < 0)) {
      D_0032467E = 3;
    }
  }
  else {
    D_0032467E = (byte)local_1c;
  }
  D_00324684 = 10;
  D_00324681 = D_00324692;
  if ((int)local_18 < 0) {
    D_00324681 = 4;
  }
  D_00324682 = bVar6;
  D_00324683 = bVar2;
  if (((int)local_8 < 0) && (D_00324682 = bVar3, (int)local_20 < 0)) {
    D_00324682 = bVar2;
    if (0x7fffffff < local_c) {
      D_00324682 = 4;
      goto LAB_000025dc;
    }
  }
  else {
LAB_000025dc:
    if ((((int)local_c < 0) && (D_00324683 = bVar3, (int)local_20 < 0)) &&
       (D_00324683 = bVar6, 0x7fffffff < local_8)) {
      D_00324683 = 4;
    }
  }
  D_00324689 = 0x12;
  D_00324685 = bVar3;
  if (((int)local_20 < 0) && (D_00324685 = D_00324691, 0x7fffffff < local_4)) {
    D_00324685 = 5;
  }
  if ((int)local_1c < 0) {
    D_00324686 = D_00324692;
    if ((int)local_18 < 0) {
      D_00324686 = 5;
    }
  }
  else {
    D_00324686 = (byte)local_1c;
  }
  D_00324687 = bVar3;
  if ((int)local_20 < 0) {
    if ((int)local_1c < 0) {
      D_00324687 = bVar2;
      if (0x7fffffff < local_c) {
        D_00324687 = 5;
      }
    }
    else {
      D_00324687 = (byte)local_1c;
    }
  }
  D_00324688 = D_00324691;
  if ((((int)local_4 < 0) && (D_00324688 = bVar2, (int)local_c < 0)) &&
     (D_00324688 = bVar3, (int)local_20 < 0)) {
    D_00324688 = 5;
  }
  D_0032468E = 0xc;
  if ((int)local_1c < 0) {
    D_0032468B = 6;
  }
  else {
    D_0032468B = (byte)local_1c;
  }
  D_0032468C = bVar2;
  D_0032468D = bVar6;
  if (((int)local_c < 0) && (D_0032468C = D_00324691, (int)local_4 < 0)) {
    D_0032468C = bVar6;
    if (0x7fffffff < local_8) {
      D_0032468C = 6;
      goto LAB_00002738;
    }
  }
  else {
LAB_00002738:
    if ((((int)local_8 < 0) && (D_0032468D = D_00324691, (int)local_4 < 0)) &&
       (D_0032468D = bVar2, 0x7fffffff < local_c)) {
      D_0032468D = 6;
    }
  }
  D_00324693 = 0x11;
  D_0032468F = bVar4;
  D_00324690 = (byte)local_10;
  if ((int)local_14 < 0) {
    D_0032468F = (byte)local_10;
    if (local_10 < 0x80000000) goto LAB_000027b0;
    D_0032468F = 7;
  }
  if (((int)local_10 < 0) && (D_00324690 = bVar4, 0x7fffffff < local_14)) {
    D_00324690 = 7;
  }
LAB_000027b0:
  if ((((int)local_4 < 0) && (D_00324691 = bVar6, (int)local_8 < 0)) &&
     (D_00324691 = bVar3, 0x7fffffff < local_20)) {
    D_00324691 = 7;
  }
  if (-1 < (int)local_1c) {
    D_00324692 = (byte)local_1c;
    D_00324671 = D_00324672;
    D_00324676 = D_00324677;
    D_00324680 = D_00324681;
    D_0032468A = D_0032468B;
    return;
  }
  if (-1 < (int)local_8) {
    D_00324692 = bVar6;
    D_00324671 = D_00324672;
    D_00324676 = D_00324677;
    D_00324680 = D_00324681;
    D_0032468A = D_0032468B;
    return;
  }
  if (0x7fffffff < local_18) {
    D_00324692 = 7;
  }
  D_00324671 = D_00324672;
  D_00324676 = D_00324677;
  D_00324680 = D_00324681;
  D_0032468A = D_0032468B;
  return;
}

void func_000EFA10(void)
{
  int func_000688D0(...);
  int func_0011B990(...);
  extern undefined4 D_0032461C;
  extern undefined4 D_003246A4;
  extern undefined4 D_003246B4;
  int func_00110760(...);
  extern undefined4 D_00324600;
  extern undefined4 D_00324604;
  extern undefined4 D_003246F0;
  extern undefined4 D_003246D0;
  func_000688D0();
  func_0011B990(D_0032461C);
  func_0011B990(D_003246A4);
  func_0011B990(D_003246B4);
  func_000688D0();
  func_00110760(D_00324600);
  func_00110760(D_00324604);
  func_00110760(D_003246F0);
  func_00110760(D_003246D0);
  return;
}

void func_000EFA70(void)
{
  extern undefined4 D_00313B54;
  extern undefined4 D_003246CC;
  extern undefined4 D_00324694;
  switch(D_00313B54) {
  case 3:
    D_003246CC = 0;
    D_00324694 = 3;
    return;
  case 4:
    D_003246CC = 1;
    D_00324694 = 4;
    return;
  case 5:
    D_003246CC = 2;
    D_00324694 = 5;
    return;
  case 6:
    D_003246CC = 3;
    D_00324694 = 6;
    return;
  case 7:
    D_003246CC = 4;
    D_00324694 = 7;
    return;
  case 8:
    D_003246CC = 5;
    D_00324694 = 8;
  }
  return;
}

extern int _D_00313B54; char _func_000B5650(int); int _func_000ACFB0(int,int); void _func_000EFB20(void){if(_func_000B5650(1)||_func_000B5650(2)||_func_000B5650(3)||_func_000B5650(4)||_func_000B5650(5)||_func_000B5650(6)||_func_000B5650(10)||_func_000B5650(13)||_func_000B5650(16)){_func_000ACFB0(10,1);return;}if(_D_00313B54==3)_func_000ACFB0(2,1);else _func_000ACFB0(3,1);}

