/* 7 functions from 0x0001F520 to 0x000204EE, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_0001F710(int param_1)
{
int func_001100A0(...);
extern undefined4 D_00307DF8;
int func_0001F630(...);
extern undefined4 D_001D3200;
int func_0012F7A0(...);
extern undefined D_00307D6C;
int func_00045D00(...);
int func_00045C20(...);
int func_000463C0(...);
int func_000A22B0(...);
int func_00046EB0(...);
extern undefined4 D_001E461C;
int func_0004F290(...);
int func_00047960(...);
int func_000A2370(...);
int func_000471B0(...);
int func_0004F910(...);
int func_0004ECC0(...);
int func_00047510(...);
int func_000A1D10(...);
extern undefined D_0000FFFF;
int func_0004EF90(...);
int func_00012070(...);
extern undefined4 D_001D29E0;
extern undefined4 D_001D29DC;
int func_000A1F50(...);
int func_00047040(...);
int func_00110060(...);
int func_000124E0(...);
int func_00056C00(...);
int func_0004F1D0(...);
int func_00046F90(...);
int func_000120B0(...);
extern undefined4 D_001D2F24;
int func_0012F120(...);
int func_000475E0(...);
int func_0004F0F0(...);
int func_001105E0(...);
int func_0004ED30(...);
int func_00011D40(...);
extern undefined4 D_001D31F8;
int func_0004F310(...);
int iVar1;
undefined4 *puVar2;
bool bVar3;
char cVar4;
uint uVar5;
int iVar6;
longdouble lVar7;
longdouble lVar8;
bool local_79;
undefined4 local_74;
undefined4 local_70;
undefined4 local_6c;
undefined4 local_68;
undefined4 local_64;
undefined4 local_60;
undefined4 local_5c;
float local_58;
undefined1 local_50 [76];

iVar1 = *(int *)(param_1 + 0x110);
func_001100A0(*(undefined4 *)(D_00307DF8 + 0x2c),&local_70);
local_60 = *(undefined4 *)(D_00307DF8 + 0xe8);
local_5c = *(undefined4 *)(D_00307DF8 + 0xec);
local_58 = *(float *)(D_00307DF8 + 0xf0);
lVar7 = (longdouble)func_0001F630();
bVar3 = lVar7 < (longdouble)D_001D3200;
if (bVar3) {
local_58 = *(float *)(iVar1 + 0x74) + *(float *)(iVar1 + 0x74) + local_58;
}
local_79 = !bVar3;
func_0012F7A0(&local_60,local_70);
local_74 = 0;
switch(*(undefined4 *)(iVar1 + 0x98)) {
case 0x65:
if (D_00307D6C == '\0') {
func_00045D00(*(undefined4 *)(iVar1 + 0x68),iVar1 + 0x138);
func_00045C20(*(undefined4 *)(iVar1 + 0x68),1,bVar3);
*(undefined4 *)(iVar1 + 0x174) = *(undefined4 *)(iVar1 + 0x158);
iVar6 = func_000463C0(*(undefined4 *)(iVar1 + 0x68),&local_60,*(undefined4 *)(iVar1 + 0x74));
if (iVar6 == 0) {
puVar2 = *(undefined4 **)(iVar1 + 0x50);
func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
func_00046EB0(*(undefined4 *)(iVar1 + 0x68),**(undefined4 **)(iVar1 + 0x54),D_001E461C,
*(undefined4 *)(iVar1 + 0x88),0x3f000000,&local_60);
*(undefined4 *)(iVar1 + 0x98) = 0x66;
}
else {
func_0004F290(param_1);
puVar2 = *(undefined4 **)(iVar1 + 0x48);
func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
*(undefined4 *)(iVar1 + 0x98) = 100;
}
goto LAB_00002802;
}
break;
case 0x66:
if (D_00307D6C == '\0') {
uVar5 = func_00047960(param_1,iVar1 + 0x6c,*(undefined4 *)(iVar1 + 0x90),
*(undefined4 *)(iVar1 + 0x84),1,0);
local_74 = 1;
iVar6 = func_000A2370(param_1 + 100);
if (iVar6 == 0) {
puVar2 = *(undefined4 **)(iVar1 + 0x50);
func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
}
cVar4 = func_000471B0(*(undefined4 *)(iVar1 + 0x68),iVar1 + 0x138,0);
if (cVar4 != '\0') {
if (((uVar5 & 4) != 0) && (local_79)) {
*(undefined4 *)(iVar1 + 0x98) = 0x67;
goto LAB_00002802;
}
if ((*(char *)(D_00307DF8 + 0x175) != '\0') || ((uVar5 & 0x20) == 0)) {
func_0004F290(param_1);
*(undefined4 *)(iVar1 + 0x98) = 99;
}
}
iVar6 = func_0004F910(param_1,iVar1,*(undefined4 *)(iVar1 + 0x68));
if (0 < iVar6) {
if (iVar6 < 3) {
func_00045D00(*(undefined4 *)(iVar1 + 0x68),iVar1 + 0x138);
func_00045C20(*(undefined4 *)(iVar1 + 0x68),1,!local_79);
iVar6 = func_000463C0(*(undefined4 *)(iVar1 + 0x68),&local_60,
*(undefined4 *)(iVar1 + 0x74));
if (iVar6 == 0) {
func_00046EB0(*(undefined4 *)(iVar1 + 0x68),**(undefined4 **)(iVar1 + 0x54),
D_001E461C,*(undefined4 *)(iVar1 + 0x88),0x3f000000,&local_60);
func_0004ECC0(param_1,iVar1);
goto LAB_00002802;
}
func_0004F290(param_1);
*(undefined4 *)(iVar1 + 0x98) = 99;
}
else if (iVar6 == 3) {
lVar7 = (longdouble)
func_00047510(*(undefined4 *)(*(int *)(iVar1 + 0x68) + 0x608),
*(undefined4 *)(*(int *)(iVar1 + 0x68) + 0x610));
*(float *)(iVar1 + 0x130) = (float)lVar7;
*(undefined1 *)(iVar1 + 0x12d) = 1;
*(undefined4 *)(iVar1 + 0x98) = 0x80;
func_0004ECC0(param_1,iVar1);
goto LAB_00002802;
}
}
func_0004ECC0(param_1,iVar1);
goto LAB_00002802;
}
break;
case 0x67:
if (D_00307D6C == '\0') {
func_000A1D10(*(undefined4 *)(iVar1 + 600),1,10,((undefined *)&D_0000FFFF),0x42200000,0x3e4ccccd);
*(undefined4 *)(iVar1 + 0x98) = 0x68;
goto LAB_00002802;
}
break;
case 0x68:
if (D_00307D6C == '\0') {
lVar7 = (longdouble)func_0004EF90(param_1);
lVar8 = (longdouble)func_00012070(*(undefined4 *)(iVar1 + 0x158),(float)lVar7);
if (lVar8 <= (longdouble)D_001D29E0) {
if ((longdouble)D_001D29DC <= lVar8) {
*(float *)(iVar1 + 0x158) = (float)lVar7;
}
else {
*(float *)(iVar1 + 0x158) = *(float *)(iVar1 + 0x158) - D_001D29E0;
}
}
else {
*(float *)(iVar1 + 0x158) = *(float *)(iVar1 + 0x158) + D_001D29E0;
}
iVar6 = func_000A1F50(*(undefined4 *)(iVar1 + 600));
if (iVar6 == 0) {
uVar5 = func_00047960(param_1,iVar1 + 0x6c,*(undefined4 *)(iVar1 + 0x90),
*(undefined4 *)(iVar1 + 0x84),1,0);
if (((uVar5 & 4) == 0) || (bVar3)) {
puVar2 = *(undefined4 **)(iVar1 + 0x50);
func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
func_00047040(*(undefined4 *)(iVar1 + 0x68));
*(undefined4 *)(iVar1 + 0x98) = 0x66;
}
else {
*(undefined4 *)(iVar1 + 0x98) = 0x67;
}
}
else {
func_00110060(*(undefined4 *)(param_1 + 0x2c),local_50);
func_000124E0(param_1,local_50,**(undefined4 **)(iVar1 + 0x2c),0x41700000);
}
goto LAB_00002802;
}
break;
default:
func_00056C00(param_1,iVar1);
goto LAB_00002802;
case 0x6d:
iVar6 = func_000A1F50(*(undefined4 *)(iVar1 + 0x254));
if (iVar6 == 0) {
*(undefined1 *)(param_1 + 0x175) = 0;
func_00045D00(*(undefined4 *)(iVar1 + 0x68),iVar1 + 0x138);
func_00045C20(*(undefined4 *)(iVar1 + 0x68),1,bVar3);
*(undefined4 *)(iVar1 + 0x174) = *(undefined4 *)(iVar1 + 0x158);
cVar4 = func_0004F1D0(param_1);
if (cVar4 != '\0') {
iVar6 = func_000463C0(*(undefined4 *)(iVar1 + 0x68),&local_60,*(undefined4 *)(iVar1 + 0x74)
);
if (iVar6 == 0) {
puVar2 = *(undefined4 **)(iVar1 + 0x50);
func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
func_00046F90(*(undefined4 *)(iVar1 + 0x68),**(undefined4 **)(iVar1 + 0x54),D_001E461C,
*(undefined4 *)(iVar1 + 0x88),0,0);
*(undefined4 *)(iVar1 + 0x98) = 0x66;
goto LAB_00002802;
}
func_0004F290(param_1);
}
puVar2 = *(undefined4 **)(iVar1 + 0x48);
func_000A22B0(param_1 + 100,2,*puVar2,puVar2[1],puVar2[2],0x3e4ccccd);
*(undefined4 *)(iVar1 + 0x98) = 99;
}
goto LAB_00002802;
case 0x81:
*(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x80;
func_000A1D10(*(undefined4 *)(iVar1 + 0x25c),1,0,((undefined *)&D_0000FFFF),0x41c00000,0x3e4ccccd);
func_000120B0(param_1 + 0x150,
(float)*(ushort *)(**(int **)(*(int *)(iVar1 + 0x25c) + 0x10) + 0x1a) *
D_001D2F24,0,0);
*(undefined4 *)(iVar1 + 0x98) = 0x82;
goto LAB_00002802;
}
func_0004F290(param_1);
*(undefined4 *)(iVar1 + 0x98) = 99;
LAB_00002802:
iVar6 = *(int *)(iVar1 + 0x98);
if ((((iVar6 == 0x65) || (iVar6 == 0x66)) || (iVar6 == 0x67)) || (iVar6 == 0x68)) {
func_0012F120(local_50);
local_6c = *(undefined4 *)(param_1 + 0xe8);
local_64 = *(undefined4 *)(param_1 + 0xf0);
local_68 = 0;
func_000475E0(local_50,&local_6c,iVar1 + 0x138,*(undefined4 *)(iVar1 + 0x158),iVar1 + 0x144);
func_0004F0F0(param_1,local_50,iVar1);
func_001105E0(*(undefined4 *)(param_1 + 0x2c),local_50,1);
if (*(int *)(iVar1 + 0x16c) != 0) {
func_0004ED30(param_1,iVar1,local_74);
}
if (*(char *)(param_1 + 0x174) != '\0') {
lVar7 = (longdouble)func_00011D40(param_1);
if (lVar7 < (longdouble)D_001D31F8) {
*(undefined1 *)(param_1 + 0x174) = 0;
}
else {
func_0004F310(param_1,iVar1);
}
if (*(int *)(iVar1 + 0x98) != 0x81) {
*(undefined4 *)(iVar1 + 0x98) = 0x6d;
func_000A1D10(*(undefined4 *)(iVar1 + 0x254),1,0,((undefined *)&D_0000FFFF),0x41c00000,0);
func_000120B0(param_1 + 0x150,
(float)*(ushort *)(**(int **)(*(int *)(iVar1 + 0x254) + 0x10) + 0x1a) *
D_001D2F24,1,1);
}
}
}
return;
}

void func_0001FEC0(int param_1)
{
  int func_000487A0(...);
  extern undefined4 D_00307D10;
  int func_000A1C00(...);
  int func_00116FB0(...);
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  func_000487A0(D_00307D10,*(undefined4 *)(iVar1 + 0x68));
  func_000A1C00(*(undefined4 *)(iVar1 + 600));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x254));
  func_000A1C00(*(undefined4 *)(iVar1 + 0x25c));
  func_00116FB0(iVar1);
  return;
}

void _func_000204C0(int arg) { extern int _D_00307D10; extern void _func_000487A0(int, int); extern void _func_00116FB0(int); _func_000487A0(_D_00307D10, *(int*)(*(int*)(arg + 0x110) + 0x70)); _func_00116FB0(*(int*)(arg + 0x110)); }

