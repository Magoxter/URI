    /* Resto2 */
#include <stdio.h>

int main (void) {
  int n,i,m;
   m = 10000;
  scanf("%d", &n);
 for (i = 0; i < m; i++)
  if (i %n == 2)
    printf("%d\n", i);
 return 0;
}
