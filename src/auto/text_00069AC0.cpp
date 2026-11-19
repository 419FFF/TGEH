/* 5 functions from 0x00069AC0 to 0x0006A49F, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>

char _func_00069C00(int a, int *b, int c, float *out){
 int func_00110060(...); int func_0012F810(...); char func_0011B020(...); int func_0012F7A0(...);
 int cur[4]; int hit[3]; int r[4]; char m1[16]; char m2[16]; char mtx[0x4c];
 char found=0;
 int i=0;
 cur[0]=b[0]; cur[1]=b[1]; cur[2]=b[2]; cur[3]=b[3];
 if(*(int*)(c+0x96c)!=0){
  int *p=(int*)(c+4);
  do{
   if(p[1]!=0&&p[0]!=0&&*(char*)(p[1]+0x13)==0x24){
    func_00110060(p[0],mtx);
    func_0012F810(m1,a,mtx);
    func_0012F810(m2,cur,mtx);
    if(func_0011B020(p[0],m1,m2,r,0,0)){
     func_0012F7A0(r,mtx);
     cur[0]=r[0]; cur[1]=r[1]; cur[2]=r[2];
     found=1;
    }
   }
   i++; p+=3;
  }while(i!=*(int*)(c+0x96c));
  if(found){
   out[0]=*(float*)&cur[0]; ((int*)out)[1]=cur[1]; ((int*)out)[2]=cur[2];
  }
 }
 return found;
}
