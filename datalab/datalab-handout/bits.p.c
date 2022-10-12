#line 145 "bits.c"
int bitXor(int x, int y) {
  int mask10=  x &( ~y);
  int mask01=(  ~x) & y;
  return ~(~mask10 & ~mask01);
}
#line 156
int tmin(void) {
  return 1 << 31;
}
#line 167
int isTmax(int x) {
  int x2=  x + 1;
  int mask=  x ^ x2;
  int mask2=  mask + 1;
  return (!mask2) &( !!x2);
}
#line 181
int allOddBits(int x) {
  int mask=  0xAA +( 0xAA << 8) +( 0xAA << 16) +( 0xAA << 24);
  return !((x & mask) ^ mask);
}
#line 192
int negate(int x) {
  return (~x) + 1;
}
#line 205
int isAsciiDigit(int x) {
  int r1=  !((x ^ 0x30) >> 3);
  int r2=  !((x ^ 0x38) >> 1);
  return r1 | r2;
}
#line 217
int conditional(int x, int y, int z) {
  int masky=(  !x) + ~0;
  int maskz=  ~masky;
  return (maskz & z) |( masky & y);
}
#line 229
int isLessOrEqual(int x, int y) {
  int sameSignal=  !((x ^ y) >> 31);
  int sameResult=  !(((~x + y + 1) >> 31) & 1);
  int difResult=(  x >> 31) & 1;
  return (!sameSignal & difResult) |(( sameSignal) & sameResult);
}
#line 244
int logicalNeg(int x) {
  x = x |( x >> 16);
  x = x |( x >> 8);
  x = x |( x >> 4);
  x = x |( x >> 2);
  x = x |( x >> 1);
  return (x & 1) ^ 1;
}
#line 264
int howManyBits(int x) {
  int sign;int b16;int b8;int b4;int b2;int b1;
  sign = x >> 31;
  x =( sign & ~x) |( ~sign & x);
  b16 = !!(x >> 16) << 4;
  x = x >> b16;
  b8 = !!(x >> 8) << 3;
  x = x >> b8;
  b4 = !!(x >> 4) << 2;
  x = x >> b4;
  b2 = !!(x >> 2) << 1;
  x = x >> b2;
  b1 = !!(x >> 1);
  x = x >> b1;
  return b16 + b8 + b4 + b2 + b1 + x + 1;
}
#line 292
unsigned floatScale2(unsigned uf) {
  int isInf=(  ~(uf |( 1u << 31)) >> 23) == 0;
  int test=  isInf * isInf;
  return test;
}
#line 309
int floatFloat2Int(unsigned uf) {
  return 2;
}
#line 325
unsigned floatPower2(int x) {
    return 2;
}
