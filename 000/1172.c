    /* Subst Vetor */
#include <stdio.h>
#define MX 100

int main (void) {
  int v[MX],
      n,i,k;
  n = 10; k = 1;
 for (i = 0; i < n; i++)
   scanf("%d", &v[i]);
 for (i = 0; i < n; i++)
  if (v[i] < k)
    v[i] = k;
 for (i = 0; i < n; i++)
   printf("X[%d] = %d\n",i,v[i]);
    return 0;
}
