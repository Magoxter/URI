    /* Num Perfeito */
#include <stdio.h>

int main (void) {
  int n,i,k,
      repet,
      soma;
    scanf("%d", &repet);
 for (k = 0; k < repet; k++) {
     soma = 0;
    scanf("%d", &n);
   for (i = 1; i < n; i++)
     if (n % i == 0)
        soma += i;
  if (soma == n)
    printf("%d eh perfeito\n", n);
  else
    printf("%d nao eh perfeito\n", n);
 } 
 return 0;
}
