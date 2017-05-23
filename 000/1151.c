    /* Fibonacci Easy */
#include <stdio.h>

int main (void) {
  int pen,
      ult,
      fib;
  int n;
   scanf("%d", &n);
 if (n > 1) {
  printf("0 1");
   n -= 2;
   pen = 0;
   ult = 1;
  while (n--) {
    fib = pen + ult;
   printf(" %d", fib);
    pen = ult;
    ult = fib;
  } printf("\n");
 } else
    printf("0\n");
 return 0;
}
