#include <stdio.h>

/*
 * tmin - return minimum two's complement integer
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {
return 128<<24;
}

int main(void) {
  printf("%d\n", tmin());
  return 0;
}
