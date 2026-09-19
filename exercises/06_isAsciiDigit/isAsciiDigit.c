#include <stdio.h>

/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0'
 * to '9') Example: isAsciiDigit(0x35) = 1. isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: */
//  -x equals to +~x+1;
//  x>=0 equals to 符号位为0；
//  x<0 equals to 符号位为1；
int isAsciiDigit(int x) {
  int lowerbound=x+~0x30+1;
  int y=! (lowerbound>>31);
  int upperbound=x+~0x3A+1;
  int z=(upperbound>>31);
  return y&z;

}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", isAsciiDigit(x));
  return 0;
}
