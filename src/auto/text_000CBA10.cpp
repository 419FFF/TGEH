/* 14 functions from 0x000CBA10 to 0x000CC9A1, found by Ghidra. */
#include "common.h"
#include "ghidra.h"

void func_000CC830(void)
{
  extern undefined D_0031A9F4;
  int func_000A2F00(...);
  extern undefined D_0031AA18;
  extern undefined4 D_0031AA0C;
  extern undefined4 D_0031AA10;
  extern undefined D_0031AA40;
  extern undefined4 D_003080AC;
  int func_000A2F20(...);
  extern undefined D_0031A9F5;
  if (D_0031A9F4 != '\0') {
    func_000A2F00(((undefined *)&D_0031AA18),D_0031AA0C,D_0031AA10);
    func_000A2F00(((undefined *)&D_0031AA40),D_0031AA0C,D_0031AA10);
    if (D_003080AC != 2) {
      func_000A2F20(((undefined *)&D_0031AA18));
      if (D_0031A9F5 != '\0') {
        func_000A2F20(((undefined *)&D_0031AA40));
      }
    }
  }
  return;
}
