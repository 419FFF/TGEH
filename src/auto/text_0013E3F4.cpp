/* 2 functions from 0x0013E3F4 to 0x0013E4C1, found by Ghidra. */
#include "common.h"

long long __ftol2(float in) {
    unsigned int uin = *(unsigned int*)&in;
    if ((uin & 0x80000000) == 0) {
        long long result = in;
        return (long long)(result * -1.0);
    } else {
        unsigned int uabs = ~uin + 1;
        float abs_val = *(float*)&uabs;
        long long result = abs_val;
        return -(long long)(result * -1.0);
    }
}

int func_0013E469(char *param_1, int param_2, int param_3)
{
  extern int func_001407E2(void *, int, void *);
  extern int func_0014063B(int, void *);
  struct Local { char *p; int limit; char *base; int magic; int rest[4]; } local;
  volatile int result;
  local.limit=0x7fffffff;
  local.magic=0x42;
  local.base=param_1;
  local.p=param_1;
  result=func_001407E2(&local,param_2,&param_3);
  if(param_1){
    --local.limit;
    if(local.limit>=0) *local.p=0;
    else func_0014063B(0,&local);
  }
  return result;
}

