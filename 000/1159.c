    /* SomParCons */
#include <stdio.h>

int main (void) {
  int n,k,
      sum;
   scanf("%d", &n);
   sum = 0;
 while (n) {
   sum = k = 0;
  if (n%2)
    n++;
   k = 9;
  while (k--) {
    if (!(n%2))
      sum += n;
   n++;
  } printf("%d\n", sum);
  scanf("%d", &n);
 }
 return 0;
}
