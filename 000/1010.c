#include <stdio.h>
#define MAX 100

int main (void) {
  int   peca[MAX],
        qtd[MAX],i;
  float valor[MAX],
        preco = 0.0;
   for (i = 0; i < 2; i++) {
        scanf ("%d", &peca[i]);
        scanf ("%d", &qtd[i]);
        scanf ("%f", &valor[i]);
     preco += valor[i] * qtd[i];
   }
     printf("VALOR A PAGAR: R$ %.2f\n", preco);
 return 0;
}
