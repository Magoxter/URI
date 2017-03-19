    /* 6Imp */
#include <stdio.h>

int main (void) {
  int n,i;
    scanf("%d", &n);
   for (i = n; i < n+13; i++)
    if (i %2 != 0)
      printf("%d\n", i);
 return 0;
}
