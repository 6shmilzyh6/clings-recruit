#include <stdio.h>

/*
 * allOddBits - return 1 if all odd-numbered bits in word set to 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 *///用位运算判断相等:(x&target)^target==0;
int allOddBits(int x) {
int miniodd=0xAA;
int midodd=miniodd |(miniodd<<8);
int maxodd=midodd|(midodd<<8);
return !((x&maxodd)^maxodd);
}
int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", allOddBits(x));
  return 0;
}
