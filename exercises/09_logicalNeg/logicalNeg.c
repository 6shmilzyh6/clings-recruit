#include <stdio.h>

/*
 * logicalNeg - implement the ! operator, using all of
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4
//  *///对非零补码整数 x，x 与 -x 至少有一个是负数；零是特殊情况。
// 尝试只根据 x 和它的相反数的符号位区分零与非零。
int logicalNeg(int x) {if ((x>>31)|(-x>>31))  return 0;
else return 1;
}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", logicalNeg(x));
  return 0;
}
