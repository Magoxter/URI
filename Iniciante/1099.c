    /* SomImpCons II */
#include <stdio.h>

int main (void) {
  int n,i,x,k,y,
      maior,menor,
      soma;
  scanf("%d", &k);
 while (k--) {
    scanf("%d", &x);
    scanf("%d", &y);
   soma = 0;
   maior = x;
   menor = y;
  if (y > maior) {
    maior = y;
    menor = x;
  } n = maior - menor;
 for (i = 1; i < n; i++) {
   x = i+menor;
  if (x %2 != 0)
    soma += x;
 } printf("%d\n", soma);
 }
 return 0;
}
