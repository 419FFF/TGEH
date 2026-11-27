/* 33 functions from 0x001464F0 to 0x001473F4, found by Ghidra. */
#include "common.h"
struct LD80 { unsigned int lo; unsigned int hi; unsigned short se; };
struct STRFLT_ { short decpt; char sign; char len; char mant[24]; };
struct S6_ { char c[6]; };
struct S7_ { char c[7]; };
struct LD12_ { unsigned char b[12]; };
#pragma pack(push, 1)
struct LDX_ { unsigned short pad; unsigned int lo; unsigned int hi; unsigned short exp; };
#pragma pack(pop)

struct C_00147245 { unsigned int func_00147245(void); };
struct C_0014726E { unsigned int func_0014726E(void); };
extern unsigned int _D_0037C2E0;
extern unsigned int _D_0037C300[];
extern int func_001414C5(...);
extern int func_001460D6(...);
extern int func_001460DF(...);
extern "C" int __stdcall func_0010BAA0(unsigned int, void *, unsigned int, unsigned int *, void *);
extern int func_0010AA7B(...);
extern int func_001460E8(...);
extern int func_001450B3(...);
#define OSFILE_00146E4B(fh) (*((unsigned char *)_D_0037C300[(fh) >> 5] + ((fh) & 31) * 40 + 4))
#define PIPECH_00146E4B(fh) (*((char *)_D_0037C300[(fh) >> 5] + ((fh) & 31) * 40 + 5))
#define HANDLE_00146E4B(fh) (*(unsigned int *)((char *)_D_0037C300[(fh) >> 5] + ((fh) & 31) * 40))

extern char _D_001E26F4[7], _D_001E26EC[6], _D_001E26E4[6], _D_001E26DC[7];
void _func_00146CAD(void *, int, int);
void _func_00146A8B(void *, void *);
void _func_001463C7(void *);
void _func_001463F5(void *);
void _func_00146369(void *, void *);
#pragma optimize("s", on)
int _func_001464F0(LD80 ld, int ndigits, unsigned int flags, STRFLT_ *p)
{
    LD12_ tmp;
    unsigned char tenth[12];
    unsigned char ld12[12];
    int cnt2;
    volatile int retval;
    unsigned short sign = (unsigned short)(ld.se & 0x8000);
    unsigned short e = (unsigned short)(ld.se & 0x7fff);
    unsigned short exp2;
    register unsigned int hi;
    char *src;
    char *q, *first;
    int decexp, cnt, n;

    tenth[0] = 0xcc; tenth[1] = 0xcc; tenth[2] = 0xcc; tenth[3] = 0xcc; tenth[4] = 0xcc;
    tenth[5] = 0xcc; tenth[6] = 0xcc; tenth[7] = 0xcc; tenth[8] = 0xcc; tenth[9] = 0xcc;
    tenth[10] = 0xfb; tenth[11] = 0x3f;
    retval = 1;
    exp2 = e;
    if (sign) p->sign = '-'; else p->sign = ' ';
    hi = ld.hi;
    if (exp2 == 0 && hi == 0 && ld.lo == 0) goto zero;
    if (exp2 == 0x7fff) {
        p->decpt = 1;
        if (!((hi == 0x80000000 && ld.lo == 0) || (hi & 0x40000000))) {
            src = _D_001E26F4;
            goto six;
        }
        if (sign && hi == 0xc0000000 && ld.lo == 0) src = _D_001E26EC;
        else if (hi == 0x80000000 && ld.lo == 0) src = _D_001E26E4;
        else { src = _D_001E26DC; goto six; }
        *(S6_ *)p->mant = *(S6_ *)src;
        p->len = 5;
        goto done0;
six:
        *(S7_ *)p->mant = *(S7_ *)src;
        p->len = 6;
done0:
        retval = 0;
        return retval;
    }
    *(unsigned short *)ld12 = 0;
    *(unsigned int *)(ld12 + 2) = ld.lo;
    *(unsigned int *)(ld12 + 6) = hi;
    *(unsigned short *)(ld12 + 10) = exp2;
    decexp = (int)(((exp2 >> 8) + (hi >> 24) * 2) * 0x4d + exp2 * 0x4d10 - 0x134312f4) >> 16;
    _func_00146CAD(ld12, -(short)decexp, 1);
    if (*(unsigned short *)(ld12 + 10) >= 0x3fff) {
        decexp++;
        _func_00146A8B(ld12, tenth);
    }
    p->decpt = (short)decexp;
    if (flags & 1) {
        ndigits += (short)decexp;
        if (ndigits <= 0) {
zero:
            p->mant[0] = '0';
            goto zero2;
        }
    }
    if (ndigits > 0x15) ndigits = 0x15;
    e = *(unsigned short *)(ld12 + 10);
    *(unsigned short *)(ld12 + 10) = 0;
    cnt = 8;
    do { _func_001463C7(ld12); } while (--cnt);
    n = (int)e - 0x3ffe;
    if (n < 0) {
        n = (-n) & 0xff;
        while (n > 0) { _func_001463F5(ld12); n--; }
    }
    first = p->mant;
    q = first;
    if (ndigits + 1 > 0) {
        cnt2 = ndigits + 1;
        do {
            tmp = *(LD12_ *)ld12;
            _func_001463C7(ld12);
            _func_001463C7(ld12);
            _func_00146369(ld12, &tmp);
            _func_001463C7(ld12);
            *q++ = ld12[11] + '0';
            ld12[11] = 0;
        } while (--cnt2);
    }
    q--;
    if (*q >= '5') {
        while (q >= first && *q == '9') *q-- = '0';
        if (q < first) { q++; p->decpt++; }
        (*q)++;
    } else {
        while (q >= first && *q == '0') q--;
        if (q < first) {
            p->mant[0] = '0';
zero2:
            p->decpt = 0;
            p->sign = ' ';
            p->len = 1;
            p->mant[1] = 0;
            return 1;
        }
    }
    p->len = (char)(q - (char *)p - 3);
    p->mant[p->len] = 0;
    return retval;
}
#pragma optimize("", on)
unsigned int _func_00146767(unsigned int n) { int *e; if(n<_D_0037C2E0){e=(int*)((char*)_D_0037C300[n>>5]+(n&31)*40);if((((unsigned char*)e)[4]&1)&&*e!=-1){*e|=-1;return 0;}}*(unsigned int*)func_001460D6()=9;*(unsigned int*)func_001460DF()&=0;return -1;}

unsigned int _func_001467B0(unsigned int n) { unsigned int *e; if(n<_D_0037C2E0){e=(unsigned int*)((char*)_D_0037C300[n>>5]+(n&31)*40);if(((unsigned char*)e)[4]&1)return *e;}*(unsigned int*)func_001460D6()=9;*(unsigned int*)func_001460DF()&=0;return -1;}

void _func_001467F1(unsigned int n) { int f(...); int e; f(8); f(8); f(8); }

void func_00146888(void) {
    int func_001435DF(...);
    func_001435DF(10);
}

extern void __stdcall RtlLeaveCriticalSection(void*);
void _func_00146891(unsigned int n) { RtlLeaveCriticalSection((char*)_D_0037C300[n>>5]+(n&31)*40+12); }

unsigned long long _func_001468B3(unsigned int n, unsigned int a, unsigned int* b, unsigned int c) { int _func_001467B0(...); int z=_func_001467B0(n); if(z==-1){ int* e=(int*)func_001460D6(); *e=9; } return ((unsigned long long)c<<32)|((unsigned int)b); }

void _func_00146980(unsigned int* p) { if(p[3]&0x40) p[3]=0; else { } }

extern void __imp__RtlLeaveCriticalSection(void*);
void func_001469C9(void)
{
  int func_001414C5(int);
  func_001414C5(0);
}

void _func_001469D1(unsigned int n) {
    extern int _D_001E2720;
    int func_0013EEE4(...), func_001467B0(...), func_0010BEA9(...), func_0010AA7B(...);
    int func_001460D6(...), func_001460DF(...), func_00146A6F(...), func_00146A77(...), func_0013EF1F(...);
    void func_001467F1(...);
    int *entry;
    int result;
    func_0013EEE4(&_D_001E2720, 0xc);
    if (n >= _D_0037C2E0) {
        func_00146A77();
        return;
    }
    entry = (int *)((char *)_D_0037C300[n >> 5] + (n & 31) * 40);
    if ((((unsigned char *)entry)[4] & 1) == 0) {
        *(int *)func_001460D6() = 9;
        func_0013EF1F();
        return;
    }
    func_001467F1(n);
    if ((((unsigned char *)entry)[4] & 1) != 0) {
        result = func_001467B0(n);
        if (func_0010BEA9(result) == 0) result = func_0010AA7B();
        else result = 0;
        if (result != 0) {
            *(int *)func_001460DF() = result;
            *(int *)func_001460D6() = 9;
            func_00146A6F();
        }
    }
    func_0013EF1F();
}

int _func_00146A77(void) {
    int func_001460D6(...);
    int func_0013EF1F(...);
    *(int *)func_001460D6() = 9;
    return func_0013EF1F() | -1;
}

void func_00146A8B(unsigned short *px, const unsigned short *py)
{
  int func_00146348(unsigned int, unsigned int, unsigned int *);
  void func_001463C7(void *);
  void func_001463F5(void *);
  unsigned int acc[3];
  unsigned int *xi = (unsigned int *)px;
  const unsigned int *yi = (const unsigned int *)py;
  int sticky = 0;
  int s;
  int n;
  int i;
  int k;
  unsigned short xe, ye, sign;
  unsigned short *pp;
  unsigned short *xs;
  const unsigned short *ys;
  unsigned short e;

  acc[0] = 0;
  acc[1] = 0;
  acc[2] = 0;
  xe = px[5] & 0x7fff;
  ye = py[5] & 0x7fff;
  sign = (py[5] ^ px[5]) & 0x8000;
  s = ye + xe;
  if (xe < 0x7fff && ye < 0x7fff && (unsigned short)s < 0xbffe) {
    if ((unsigned short)s < 0x3fc0) goto zero;
    e = xe;
    if (xe == 0) {
      s++;
      e = 0;
      if (!((xi[2] & 0x7fffffff) != 0 || xi[1] != 0 || xi[0] != 0)) goto store;
    }
    if (ye == 0) {
      s++;
      if ((yi[2] & 0x7fffffff) == 0 && yi[1] == 0 && yi[0] == 0) {
zero:
        xi[2] = 0;
        xi[1] = 0;
        xi[0] = 0;
        return;
      }
    }
    i = 0;
    pp = (unsigned short *)acc + 2;
    n = 5;
    do {
      if (0 < n) {
        xs = px + i;
        ys = py + 4;
        k = n;
        do {
          if (func_00146348(*(unsigned int *)(pp - 2), (unsigned int)*ys * (unsigned int)*xs, (unsigned int *)(pp - 2)) != 0) {
            (*pp)++;
          }
          xs++;
          ys--;
          k--;
        } while (k != 0);
      }
      pp++;
      i++;
      n--;
    } while (0 < n);
    s += 0xc002;
    if ((short)s > 0) {
      do {
        if (((unsigned char *)acc)[11] & 0x80) break;
        func_001463C7(acc);
        s += 0xffff;
      } while ((short)s > 0);
    }
    if ((short)s <= 0) {
      s += 0xffff;
      if ((short)s < 0) {
        n = (unsigned short)-s;
        s += n;
        do {
          if (((unsigned char *)acc)[0] & 1) sticky++;
          func_001463F5(acc);
          n--;
        } while (n != 0);
        if (sticky != 0) ((unsigned char *)acc)[0] |= 1;
      }
    }
    if (*(unsigned short *)acc > 0x8000 || (acc[0] & 0x1ffff) == 0x18000) {
      if (*(unsigned int *)((char *)acc + 2) == 0xffffffff) {
        *(unsigned int *)((char *)acc + 2) = 0;
        if (*(unsigned int *)((char *)acc + 6) == 0xffffffff) {
          *(unsigned int *)((char *)acc + 6) = 0;
          if (*(unsigned short *)((char *)acc + 10) == 0xffff) {
            s++;
            *(unsigned short *)((char *)acc + 10) = 0x8000;
          } else {
            (*(unsigned short *)((char *)acc + 10))++;
          }
        } else {
          (*(unsigned int *)((char *)acc + 6))++;
        }
      } else {
        (*(unsigned int *)((char *)acc + 2))++;
      }
    }
    if ((unsigned short)s < 0x7fff) {
      px[0] = *(unsigned short *)((char *)acc + 2);
      *(unsigned int *)((char *)px + 2) = *(unsigned int *)((char *)acc + 4);
      *(unsigned int *)((char *)px + 6) = *(unsigned int *)((char *)acc + 8);
      e = s;
store:
      px[5] = e | sign;
      return;
    }
  }
  xi[1] = 0;
  xi[0] = 0;
  xi[2] = (-(unsigned int)(sign != 0) & 0x80000000) + 0x7fff8000;
}

extern void func_00146A8B(unsigned short *, const unsigned short *);
void _func_00146CAD(unsigned short *out, int value, int mode) {
    extern unsigned char D_002E96F8;
    extern unsigned char D_002E9858;
    unsigned char *base = &D_002E96F8 - 0x60;
    unsigned char temp[12];
    if (value == 0) return;
    if (value < 0) {
        value = -value;
        base = &D_002E9858 - 0x60;
    }
    if (mode == 0) *out = 0;
    while (value != 0) {
        unsigned int part = (unsigned int)value & 7;
        value >>= 3;
        base += 0x54;
        if (part != 0) {
            unsigned short *src = (unsigned short *)(base + part * 12);
            if (*src >= 0x8000) {
                unsigned int i;
                for (i = 0; i < 12; ++i) temp[i] = ((unsigned char *)src)[i];
                ((unsigned short *)temp)[1]--;
                src = (unsigned short *)temp;
            }
            func_00146A8B(out, src);
        }
    }
}

#pragma optimize("s", on)
unsigned short _func_00146D23(int ch, int *str) {
    extern int _D_002E8C78;
    extern int _D_002E8C98;
    extern int _D_002E92A0;
    int _func_001454AF(int);
    void _func_0014546B(int *);
    int _func_001453C0(int, void *, int);
    int _func_00145125(int, int, int);
    int *stream;
    int fh;
    int flag;
    int written;
    int charcount;
    char *base;
    char *p;

    stream = str;
    fh = stream[4];
    flag = stream[3];
    if (!(flag & 0x82) || (flag & 0x40)) {
        stream[3] = flag | 0x20;
        return 0xFFFF;
    }
    if (flag & 1) {
        stream[1] = 0;
        if (!(flag & 0x10)) {
            stream[3] = flag | 0x20;
            return 0xFFFF;
        }
        stream[0] = stream[2];
        stream[3] = flag & ~1;
    }
    flag = stream[3];
    stream[1] = 0;
    written = 0;
    stream[3] = (flag & ~0x10) | 2;
    if (!(*(unsigned short *)&stream[3] & 0x10c) && ((stream != (int *)&_D_002E8C78 && stream != (int *)&_D_002E8C98) || !_func_001454AF(fh)))
        _func_0014546B(stream);
    if (*(unsigned short *)&stream[3] & 0x108) {
        base = (char *)stream[2];
        charcount = (char *)stream[0] - base;
        stream[0] = (int)(base + 2);
        stream[1] = stream[6] - 2;
        if (charcount > 0) {
            written = _func_001453C0(fh, base, charcount);
        } else {
            if (fh != -1)
                p = (char *)_D_0037C300[fh >> 5] + (fh & 0x1f) * 40;
            else
                p = (char *)&_D_002E92A0;
            if (p[4] & 0x20)
                _func_00145125(fh, 0, 2);
        }
        *(unsigned short *)stream[2] = (unsigned short)ch;
    } else {
        charcount = 2;
        written = _func_001453C0(fh, &ch, charcount);
    }
    if (written != charcount) {
        stream[3] |= 0x20;
        return 0xFFFF;
    }
    return ch & 0xffff;
}

int _func_00146E4B(int fh, char *buf, unsigned int cnt)
{
    int bytes_read = 0;
    char *q = buf;
    char *&p = (char *&)cnt;
    unsigned int num_read;
    char peekchr;
    int err;

    if (cnt != 0 && !(OSFILE_00146E4B(fh) & 2)) {
        if ((OSFILE_00146E4B(fh) & 0x48) && PIPECH_00146E4B(fh) != '\n') {
            *q = PIPECH_00146E4B(fh);
            cnt--;
            q++;
            bytes_read = 1;
            PIPECH_00146E4B(fh) = '\n';
        }
        if (!func_0010BAA0(HANDLE_00146E4B(fh), q, cnt, &num_read, 0)) {
            err = func_0010AA7B();
            if (err == 5) {
                *(int *)func_001460D6() = 9;
                *(int *)func_001460DF() = 5;
            } else {
                if (err == 0x6d) return 0;
                func_001460E8(err);
            }
            return -1;
        }
        bytes_read += num_read;
        if (OSFILE_00146E4B(fh) & 0x80) {
            if (num_read != 0 && *buf == '\n')
                OSFILE_00146E4B(fh) |= 4;
            else
                OSFILE_00146E4B(fh) &= ~4;
            bytes_read += (int)buf;
            p = q = buf;
            while (p < (char *)bytes_read) {
                if (*p == 0x1a) {
                    if (!(OSFILE_00146E4B(fh) & 0x40)) OSFILE_00146E4B(fh) |= 2;
                    break;
                }
                if (*p != '\r') {
                    *q++ = *p++;
                } else if (p < (char *)bytes_read - 1) {
                    if (p[1] == '\n') {
                        p += 2;
                        *q++ = '\n';
                    } else {
                        *q++ = *p++;
                    }
                } else {
                    p++;
                    if ((func_0010BAA0(HANDLE_00146E4B(fh), &peekchr, 1, &num_read, 0) || func_0010AA7B() == 0) && num_read != 0) {
                        if (OSFILE_00146E4B(fh) & 0x48) {
                            if (peekchr == '\n') {
                                *q++ = '\n';
                            } else {
                                *q++ = '\r';
                                PIPECH_00146E4B(fh) = peekchr;
                            }
                        } else if (q == buf && peekchr == '\n') {
                            *q++ = '\n';
                        } else {
                            func_001450B3(fh, -1, 1);
                            if (peekchr != '\n') *q++ = '\r';
                        }
                    } else {
                        *q++ = '\r';
                    }
                }
            }
            bytes_read = (int)(q - buf);
        }
        return bytes_read;
    }
    return 0;
}

#pragma optimize("", on)
int _func_001460D6(...);
int _func_001460DF(...);
int _func_0013EF1F(...);
int _func_001470B1(void) { *(int*)_func_001460D6()=9; *(int*)_func_001460DF() &= 0; int result=-1; _func_0013EF1F(); return result; }

int func_001470CD(unsigned int id){int _func_001467B0(...);int _func_0010B7F8(...);int _func_0010AA7B(...);int _func_00146767(...);int _func_001460E8(...);extern unsigned int _D_0037C300[];int a=0,b=0,found=0,r;unsigned int i;unsigned char *ptr;r=_func_001467B0(id);if(r==-1)goto skip;if(id==1)goto skip;if(id==2){a=_func_001467B0(2);b=_func_001467B0(1);if(a==b)goto skip;}a=_func_001467B0(id);if(_func_0010B7F8(a)==0){found=_func_0010AA7B();}skip:_func_00146767(id);i=id;ptr=(unsigned char*)_D_0037C300[i>>5];ptr+=(i&31)*40+4;*ptr=0;if(found){_func_001460E8(found);return -1;}return 0;}

void func_0014714E(unsigned int value){int _func_0013EEE4(...);int _func_001467F1(...);int _func_001470CD(...);int _func_001460D6(...);int _func_001471C5(...);extern int _D_001E2740;_func_0013EEE4(&_D_001E2740,12);if(value>=_D_0037C2E0)return;unsigned int off=(value&31)*40;unsigned char *base=(unsigned char*)_D_0037C300[value>>5];if((base[off+4]&1)==0)return;_func_001467F1(value);*(int*)_func_001460D6()=9;if(base[off+4]&1){_func_001470CD(value);}else *(int*)_func_001460D6()=9;_func_001471C5();}

void func_001471E9(unsigned int *p){int _func_001436BF(...);if((p[3]&0x83)&&(p[3]&8)){_func_001436BF(p[2]);*(unsigned short*)(p+3)&=0xfbf7;*p=0;p[2]=0;p[1]=0;}}
#pragma optimize("", on)

extern unsigned __int64 __rdtsc(void);
#pragma intrinsic(__rdtsc)
unsigned int __stdcall func_00147220(unsigned int *p) {
    unsigned __int64 t = __rdtsc();
    int result = 0;
    p[0] = (unsigned int)t;
    p[1] = (unsigned int)(t >> 32);
    return ++result;
}
#pragma optimize("y", on)
int __stdcall func_00147231(int *p){p[1]&=0;p[0]=0x2bb5c755;return (int)(char)1;}

extern "C" int __stdcall _ExQueryNonVolatileSetting(int, void *, void *, int, int);
extern int func_00147D10(void);
#pragma optimize("y", off)
unsigned int C_00147245::func_00147245(void) { unsigned int local_4; unsigned int local_8; if(_ExQueryNonVolatileSetting(0x103,&local_4,&local_8,4,0)>=0) return ((local_4>>8)&0xff); return 0; }
#pragma optimize("", on)
extern int func_00147245(void);
unsigned int func_0014726E(void) { int local_4; int local_8; int status=_ExQueryNonVolatileSetting(8,&local_8,&local_4,4,0); if (status < 0) local_4 &= 0; else local_4 = ((unsigned int)local_4 >> 16) & 0x5f; if (func_00147D10() - 1 == 0 && func_00147245() == 3) local_4 &= 0xfffffff1; return local_4; }

extern void* __imp__MmQueryStatistics;
void __stdcall func_001472B7(int *out) { int data[9]; data[0]=0x24; ((void (__stdcall *)(void*))__imp__MmQueryStatistics)(data); out[1]=0; out[4]=0; out[5]=0; out[2]=data[1]<<12; out[3]=data[2]<<12; out[6]=0x7ffe0000; out[7]=0x7ffe0000-data[4]; out[0]=0x20; }

extern int __stdcall _ExQueryNonVolatileSetting(unsigned int, void*, void*, unsigned int, unsigned int);
extern void __stdcall MmQueryStatistics(void*);
#pragma optimize("y", on)
int __stdcall func_00147306(int value) { if (value <= 9) { value += 0x30; } else { value += 0x37; } return value; }

long long __stdcall func_0013EEB0(long long, long long);
long long __stdcall func_00148B50(long long, long long);
extern "C" char D_00010000, D_0000FFFF;
extern "C" void _ReadWriteBarrier(void);
#pragma optimize("s", on)
void __stdcall func_0014731A(unsigned short* text, char* out, int unused)
{
 typedef long long (__stdcall *LL4)(int,int,int,int);
 long long v=0;
 volatile int *parts=(volatile int*)&v;
 unsigned short c=*text;
 if(!c) goto output;
 do {
  long long prod=((LL4)func_0013EEB0)(parts[0],parts[1],(int)&D_00010000,0);
  prod+=(int)c;
  int *sum=(int*)&prod;
  long long next=((LL4)func_00148B50)(sum[0],sum[1],-59,(int)&D_0000FFFF);
  ++text;
  c=*text;
  v=next;
 }while((unsigned short)c);
 output:
 for(int i=11;i>=0;--i) out[i]=(char)func_00147306((int)(v>>((11-i)*4))&15);
 out[12]=0;
}
#pragma optimize("", on)
int __stdcall func_001473AC(int a,int b){extern int __stdcall func_0010BCE7(int,int,int,int);extern int __stdcall func_0010BAA0(int,short*,int,int*,int);int local=0;short* ch=(short*)((char*)&b+2);int ok=0;if(b)func_0010BCE7(a,0,0,0);ok=func_0010BAA0(a,ch,2,&local,0);if(ok&&local==2&&*ch!=(short)0xfeff)return 1;return 0;}
extern int __stdcall func_0013EEB0(int a, int b, int c, int d);
extern long long __stdcall func_00148B50(int a, long b, int c, int d);
extern int __cdecl func_00148B30(int a, long b, int c);
extern int __stdcall func_00147306(int n);
extern void _func_00147577_8();
extern int __stdcall func_0010F188_8();
extern int _D_00010000;
extern int _D_0000FFFF;
extern int _D_001E2854;
extern int _D_001E274C;
extern void __imp__RtlNtStatusToDosError();
