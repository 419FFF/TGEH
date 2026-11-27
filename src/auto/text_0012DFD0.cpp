/* 44 functions from 0x0012DFD0 to 0x0012EF65, found by Ghidra. */
#include "common.h"
#include "ghidra.h"
struct V3 { float x, y, z; };
struct S9_0012DFD0 { int a[9]; };
union U_0012E2E0 { unsigned int u; unsigned char b[4]; };

void _func_0012E280(unsigned int *out, unsigned char *in)
{
    unsigned int value;

    out[0] = 0;
    value = in[7];
    value = (value << 8) | in[6];
    value = (value << 8) | in[5];
    value = (value << 8) | in[4];
    out[2] = value;
    value = in[15];
    value = (value << 8) | in[14];
    out[4] = value;
    value = in[1];
    value = (value << 8) | in[0];
    if (value == 1) out[0] = value;
    value = in[3];
    value = (value << 8) | in[2];
    out[1] = value;
}

int _func_0012E2E0(int param_1)
{
  int _func_00131C80(...), _func_00116A90(...), _func_00131EB0(...), _func_00131D60(...), _func_0012E280(...), _func_00131D10(...);
  char _func_00131FD0(...);
  int fp, obj;
  U_0012E2E0 tag, size;
  unsigned char fmt[16];
  unsigned char *buf;
  unsigned int i;
  char c;

  fp = _func_00131C80(param_1, 0);
  obj = _func_00116A90(0x28, 1, 1);
  _func_00131EB0(fp, 0xc, 0);
  c = _func_00131FD0(fp);
  for (;;) {
    if (c || !_func_00131D60(fp, &tag, 4) || !_func_00131D60(fp, &size, 4)) {
      _func_00131D10(fp);
      return obj;
    }
    size.u = ((((size.b[3] << 8) | size.b[2]) << 8 | size.b[1]) << 8) | size.b[0];
    if (tag.b[0] == 'f') {
      if (tag.b[1] == 'm' && tag.b[2] == 't' && tag.b[3] == ' ') {
        _func_00131D60(fp, fmt, 0x10);
        _func_0012E280(obj, fmt);
        _func_00131EB0(fp, size.u - 0x10, 1);
      } else {
        _func_00131EB0(fp, size.u, 1);
      }
    } else {
      if (tag.b[0] != 'd' || tag.b[1] != 'a' || tag.b[2] != 't' || tag.b[3] != tag.b[1]) {
        _func_00131EB0(fp, size.u, 1);
      } else {
        *(unsigned int *)(obj + 0x20) = size.u;
        buf = (unsigned char *)_func_00116A90(size.u, 1, 1);
        *(unsigned char **)(obj + 0x24) = buf;
        _func_00131D60(fp, buf, *(unsigned int *)(obj + 0x20));
        buf = *(unsigned char **)(obj + 0x24);
        i = 0;
        if ((*(unsigned int *)(obj + 0x20) & 0xfffffffe) > 0u) {
          do {
            *(unsigned short *)(buf + i * 2) = (buf[i * 2 + 1] << 8) | buf[i * 2];
            i++;
          } while (i < (*(unsigned int *)(obj + 0x20) >> 1));
        }
      }
    }
    c = _func_00131FD0(fp);
  }
}

extern int func_00131D60(void *, void *, int);
extern int func_00116A90(int, int, int);
extern char func_00131FD0(void *);
extern void func_0012E280(int, void *);
extern void func_00131EB0(void *, unsigned int, int);
extern unsigned int func_00131FB0(void *);
int func_0012E460(void *f)
{
    union { unsigned int v; unsigned char b[4]; } size;
    unsigned char tag[4];
    unsigned char fmt[16];
    unsigned char riff[12];
    unsigned int *obj;

    func_00131D60(f, riff, 12);
    obj = (unsigned int *)func_00116A90(0x28, 1, 1);
    while (!func_00131FD0(f)) {
        if (!func_00131D60(f, tag, 4)) break;
        if (!func_00131D60(f, &size, 4)) break;
        size.v = (((size.b[3] << 8 | size.b[2]) << 8 | size.b[1]) << 8) | size.b[0];
        if (tag[0] == 'f') {
            if (tag[1] != 'm' || tag[2] != 't' || tag[3] != ' ') goto skip;
            func_00131D60(f, fmt, 16);
            func_0012E280((int)obj, fmt);
            func_00131EB0(f, size.v - 16, 1);
        } else {
            if (tag[0] == 'd' && tag[1] == 'a' && tag[2] == 't' && tag[3] == tag[1]) {
                obj[7] = func_00131FB0(f);
                obj[8] = size.v;
            }
skip:
            func_00131EB0(f, size.v, 1);
        }
    }
    return (int)obj;
}

void _func_0012E590(float *a, float *b) { a[0] += b[0]; a[1] += b[1]; a[2] += b[2]; }

void _func_0012E5C0(float *a, float *b) { a[0] += b[0]; a[1] += b[1]; a[2] += b[2]; a[3] += b[3]; }

void _func_0012E5F0(float *o,float *a,float *b){ double t=(double)a[0]+b[0]; o[0]=(float)t; t=(double)a[1]+b[1]; o[1]=(float)t; t=(double)a[2]+b[2]; o[2]=(float)t; }

void _func_0012E620(float *a,float *b,float *c){a[0]=b[0]+c[0];a[1]=b[1]+c[1];a[2]=b[2]+c[2];a[3]=b[3]+c[3];}

void _func_0012E650(float *param_1, float *param_2) { param_1[0]=param_1[0]-param_2[0]; param_1[1]=param_1[1]-param_2[1]; param_1[2]=param_1[2]-param_2[2]; }

void func_0012E680(float *a, float *b) { a[0]-=b[0]; a[1]-=b[1]; a[2]-=b[2]; a[3]-=b[3]; }

void func_0012E6B0(float *param_1, float *param_2, float *param_3)
{
  *param_1 = *param_2 - *param_3;
  param_1[1] = param_2[1] - param_3[1];
  return;
}

void func_0012E6D0(float *out, float *a, float *b) { out[0]=a[0]-b[0]; out[1]=a[1]-b[1]; out[2]=a[2]-b[2]; }

void func_0012E700(float *out, float *a, float *b) { out[0]=a[0]-b[0]; out[1]=a[1]-b[1]; out[2]=a[2]-b[2]; out[3]=a[3]-b[3]; }

void func_0012E730(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

void func_0012E750(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

void func_0012E760(undefined4 *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

void func_0012E780(float *p,float *q) { void func_00131220(float); float y=p[1]-q[1], x=*p-*q; func_00131220(y*y+x*x); }

void func_0012E7B0(float *p,float *q) { void func_00131220(float); float z=p[2]-q[2], y=p[1]-q[1], x=*p-*q; func_00131220(z*z+y*y+x*x); }

void func_0012E7F0(float *p,float *q) { void func_00131220(float); float w=p[3]-q[3], z=p[2]-q[2], y=p[1]-q[1], x=*p-*q; func_00131220(w*w+z*z+y*y+x*x); }

longdouble func_0012E840(float *param_1, float *param_2)
{
  return ((longdouble)param_1[1] - (longdouble)param_2[1]) *
         ((longdouble)param_1[1] - (longdouble)param_2[1]) +
         ((longdouble)*param_1 - (longdouble)*param_2) *
         ((longdouble)*param_1 - (longdouble)*param_2);
}

longdouble _func_0012E870(float *a,float *b){longdouble x=(longdouble)a[2]-b[2],y=(longdouble)a[1]-b[1],z=(longdouble)a[0]-b[0];return x*x+y*y+z*z;}

longdouble func_0012E8A0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1];
}

longdouble func_0012E8C0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1] +
         (longdouble)param_1[2] * (longdouble)param_2[2];
}

longdouble func_0012E8E0(float *param_1, float *param_2)
{
  return (longdouble)*param_1 * (longdouble)*param_2 +
         (longdouble)param_1[1] * (longdouble)param_2[1] +
         (longdouble)param_1[2] * (longdouble)param_2[2] +
         (longdouble)param_1[3] * (longdouble)param_2[3];
}

void func_0012E910(float *p) { void func_00131220(float); func_00131220(p[1]*p[1]+*p**p); }

void _func_0012E940(float *p){int func_00131220(float);func_00131220((float)(p[2]*p[2]+p[1]*p[1]+p[0]*p[0]));}

void _func_0012E970(float *p){int func_00131220(float);func_00131220((float)(p[3]*p[3]+p[2]*p[2]+p[1]*p[1]+p[0]*p[0]));}

longdouble func_0012E9B0(float *param_1)
{
  return (longdouble)param_1[1] * (longdouble)param_1[1] +
         (longdouble)*param_1 * (longdouble)*param_1;
}

longdouble _func_0012E9D0(float *p){return (longdouble)p[2]*p[2]+(longdouble)p[1]*p[1]+(longdouble)p[0]*p[0];}

void func_0012EA00(float *p) { extern float D_001D27B8; extern float D_001D27B0; float n; float func_00131220(float); n=func_00131220(p[1]*p[1]+p[0]*p[0]); if(n==D_001D27B8){p[0]=0.0f;p[1]=1.0f;}else{n=D_001D27B0/n;p[0]*=n;p[1]*=n;} }

void func_0012EA60(float *p) { extern float D_001D27B8; extern float D_001D27B0; float n; float func_00131220(float); n=func_00131220(p[2]*p[2]+p[1]*p[1]+p[0]*p[0]); if(n==D_001D27B8){p[0]=0.0f;p[1]=0.0f;p[2]=1.0f;}else{n=D_001D27B0/n;p[0]*=n;p[1]*=n;p[2]*=n;} }

void func_0012EAE0(float *p) { extern float D_001D27B8; extern float D_001D27B0; float n; float func_00131220(float); n=func_00131220(p[0]*p[0]+p[1]*p[1]+p[2]*p[2]+p[3]*p[3]); if(n==D_001D27B8){p[0]=0.0f;p[1]=0.0f;p[2]=0.0f;p[3]=1.0f;return;} n=D_001D27B0/n; p[0]=p[0]*n;p[1]=p[1]*n;p[2]=p[2]*n;p[3]=p[3]*n; }

void func_0012EB70(float *out,float *v) {
    extern float __stdcall func_00131220(float);
    extern float D_001D27B8, D_001D27B0;
    float len=func_00131220(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
    if(len==D_001D27B8) { out[0]=0; out[1]=0; out[2]=1; return; }
    float scale=D_001D27B0/len;
    out[0]=scale*v[0]; out[1]=scale*v[1]; out[2]=scale*v[2];
}

void func_0012EBF0(float *out,float *v) {
    extern float __stdcall func_00131220(float);
    extern float D_001D27B8, D_001D27B0;
    float len=func_00131220(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]+v[3]*v[3]);
    if((double)len==(double)D_001D27B8) { out[0]=0; out[1]=0; out[2]=0; out[3]=1; return; }
    float scale=D_001D27B0/len;
    out[0]=scale*v[0]; out[1]=scale*v[1]; out[2]=scale*v[2]; out[3]=scale*v[3];
}

void _func_0012EC80(float *p, float x) { p[0] *= x; p[1] *= x; }

void func_0012ECA0(float *p, float x) { p[0]=x*p[0]; p[1]=x*p[1]; p[2]=x*p[2]; }

void _func_0012ECD0(float *p, float x) { p[0] *= x; p[1] *= x; p[2] *= x; p[3] *= x; }

void _func_0012ED00(float *param_1, float *param_2, float param_3) { param_1[0]=param_3*param_2[0]; param_1[1]=param_3*param_2[1]; }

void func_0012ED20(float *out,float *v,float s) { out[0]=s*v[0]; out[1]=s*v[1]; out[2]=s*v[2]; }

void func_0012ED50(float *out,float *v,float s) { out[0]=s*v[0]; out[1]=s*v[1]; out[2]=s*v[2]; out[3]=s*v[3]; }

void _func_0012ED80(float *out, float *a, float *b, float t)
{
    out[0] = (b[0] - a[0]) * t + a[0];
    out[1] = (b[1] - a[1]) * t + a[1];
    out[2] = (b[2] - a[2]) * t + a[2];
}

void _func_0012EDC0(float *a, float *b)
{
    float x = b[2] * a[1] - b[1] * a[2];
    float y = b[0] * a[2] - b[2] * a[0];
    float z = b[1] * a[0] - b[0] * a[1];
    a[2] = x;
    a[0] = y;
    a[1] = z;
}

void _func_0012EE00(float *out, float *a, float *b)
{
    out[0] = b[2] * a[1] - b[1] * a[2];
    out[1] = b[0] * a[2] - b[2] * a[0];
    out[2] = b[1] * a[0] - b[0] * a[1];
}

float func_0012EE40(const V3 *a, const V3 *d, const V3 *c)
{
  extern float D_001D27B8;
  float dx = c->x - a->x;
  float dot = (c->z - a->z) * d->z + (c->y - a->y) * d->y + dx * d->x;
  float len2;
  float t;
  float dy, dz;
  if (dot <= D_001D27B8) {
    dz = c->z - a->z;
    dy = c->y - a->y;
    return dz * dz + dy * dy + dx * dx;
  }
  len2 = d->z * d->z + d->y * d->y + d->x * d->x;
  if (len2 <= dot) {
    float px = a->x + d->x, py = d->y + a->y, pz = d->z + a->z;
    dz = c->z - pz;
    dy = c->y - py;
    dx = c->x - px;
    return dz * dz + dy * dy + dx * dx;
  }
  t = dot / len2;
  {
    float px = t * d->x + a->x, py = t * d->y + a->y, pz = t * d->z + a->z;
    dz = c->z - pz;
    dy = c->y - py;
    dx = c->x - px;
    return dx * dx + dz * dz + dy * dy;
  }
}
/* */
