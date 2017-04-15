    /* Preench Vetor */
#include <stdio.h>
#define MX 100

int main (void) {
  int v[MX],
      n,i,k;
  scanf("%d", &k);
   n = 10;
   v[0] = k;
 for (i = 1; i < n; i++)
   v[i] = v[i-1] *2;
 for (i = 0; i < n; i++)
   printf("N[%d] = %d\n",i,v[i]);
    return 0;
}
