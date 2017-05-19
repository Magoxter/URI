    /* IntCons */
#include <stdio.h>

int main (void) {
  int x,n,sum;
   scanf("%d", &x);
   scanf("%d", &n);
 while (n < 1)
  scanf("%d", &n);
   sum = 0;
 while (n--)
   sum += x++;
  printf("%d\n", sum);
 return 0;
}
