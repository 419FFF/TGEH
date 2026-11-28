/* 5 functions from 0x00069AC0 to 0x0006A49F, found by Ghidra. */
#include "common.h"
#include <xmmintrin.h>
extern int D_002F82F8;
extern float D_001D28E4;

char _func_00069AC0(int a, int *b, int c, float *out){
 int func_00110060(...); int func_0012F810(...); char func_0011B020(...); int func_0012F7A0(...);
 int cur[4]; int r[4]; char m1[16]; char m2[16]; char mtx[0x4c];
 char found=0;
 int i=0;
 cur[0]=b[0]; cur[1]=b[1]; cur[2]=b[2]; cur[3]=b[3];
 if(*(int*)(c+0x96c)!=0){
  int *p=(int*)(c+4);
  do{
   char t;
   if(p[1]!=0&&p[0]!=0&&((t=*(char*)(p[1]+0x13))==0x21||t==0xd)){
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

char _func_00069C00(int a, int *b, int c, float *out){
 int func_00110060(...); int func_0012F810(...); char func_0011B020(...); int func_0012F7A0(...);
 char mtx[0x4c]; int r[4]; char m1[16]; char m2[16]; int cur[4];
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

char _func_00069D30(int a, int *b, int c, float *out){
 int func_00110060(...); int func_0012F810(...); char func_0011B020(...); int func_0012F7A0(...);
 int cur[4]; int r[4]; char m1[16]; char m2[16]; char mtx[0x4c];
 char found=0;
 int i=0;
 cur[0]=b[0]; cur[1]=b[1]; cur[2]=b[2]; cur[3]=b[3];
 if(*(int*)(c+0x96c)!=0){
  int *p=(int*)(c+4);
  do{
   if(p[1]!=0&&p[0]!=0&&*(char*)(p[1]+0x13)==0x42){
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

char _func_0006A1C0(int a, int b, float *c, int d, void (*cb)(int *)){
 int func_00110060(...); char func_0011AFD0(...); int func_0012F7A0(...); int func_00011CB0(...); char func_001127A0(...);
 float func_00131210(...); float func_00131220(...); float func_0012E910(...);
 extern float D_001D27B8;
 char found=0;
 int i=0;
 if(*(int*)(d+0x96c)!=0){
  int *p=(int*)(d+8);
  do{
   if(!found && *p!=0){
    if(*(char*)(*p+0x14)==3){
     char m[0x4c];
     int cbarg[2];
     func_00110060(p[-1],m);
     if(func_0011AFD0(p[-1],b,c,m)){
      if(cb){ cbarg[0]=a; cbarg[1]=(int)(p-2); cb(cbarg); }
      found=1;
     }
    }
    if(*(char*)(*p+0x14)==4){
     if(*(int*)(*p+0xe4)==3){
      __declspec(align(16)) char m2[0x40]; char m[0x30]; int v[3]; int cbarg[2]; int e[3];
      func_00110060(*(int*)(*p+0x2c),m);
      v[0]=*(int*)(*p+0xe8); v[1]=*(int*)(*p+0xec); v[2]=*(int*)(*p+0xf0);
      func_0012F7A0(v,m);
      func_00011CB0(m2,m);
      e[0]=*(int*)(*p+0xf4); e[1]=*(int*)(*p+0xf8); e[2]=*(int*)(*p+0xfc);
      if(func_001127A0(b,c,m2)){
       if(cb){ cbarg[0]=a; cbarg[1]=(int)(p-2); cb(cbarg);}
       found=1;
      }
     }
     if(*(int*)(*p+0xe4)==4){
      float pos[3]; float q[3]; float dl[3]; char m3[0x4c];
      pos[0]=*(float*)(b+0x30); pos[1]=*(float*)(b+0x34); pos[2]=*(float*)(b+0x38);
      q[0]=*(float*)(*p+0xe8); q[1]=*(float*)(*p+0xec); q[2]=*(float*)(*p+0xf0);
      func_00110060(*(int*)(*p+0x2c),m3);
      func_0012F7A0(q,m3);
      dl[0]=q[0]-pos[0]; dl[2]=q[2]-pos[2];
      float ly=func_00131210(q[1]-pos[1]);
      float ln=func_00131220(c[2]*c[2]+c[0]*c[0]);
      float r=*(float*)(*p+0xf4);
      float dd=func_0012E910(dl);
      if(((ly-c[1])-*(float*)(*p+0xf8)<D_001D27B8) && ((dd-ln)-r<D_001D27B8)){
       found=1;
       if(cb){ int cbarg[2]; cbarg[0]=a; cbarg[1]=(int)(p-2); cb(cbarg); }
      }
     }
    }
   }
   i++; p+=3;
  }while(i!=*(int*)(d+0x96c));
 }
 return found;
}

