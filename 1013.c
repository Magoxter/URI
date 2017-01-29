    /* Maior */
#include <stdio.h>
#define MAX 1000

int main (void) {
  int n,i,k,e,
      maior,x,
      v[MAX];
    n = 3;
   for (i = 0; i < n; i++)
     scanf("%d", &v[i]);
    maior = v[0];
   for (k = 1; k < n; k++)
    if (v[k] > maior)
      maior = v[k];
    printf("%d eh o maior\n", maior);
    maior = 0;
 return 0;
}
