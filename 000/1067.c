    /* Impares */
#include <stdio.h>

int main (void) {
  int n,i;
    scanf("%d", &n);
   for (i = 0; i < n+1; i++)
    if (i %2)
      printf("%d\n", i);
 return 0;
}
