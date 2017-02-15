    /* Lanche */
#include <stdio.h>

int main (void) {
  int   cod,
        qtd;
  float valor,
        total;
    scanf("%d", &cod);
    scanf("%d", &qtd);
  switch (cod) {
      case 1:
        valor = 4.0;
       break;
      case 2:
        valor = 4.5;
       break;
      case 3:
        valor = 5.0;
       break;
      case 4:
        valor = 2.0;
       break;
      case 5:
        valor = 1.5;
       break;
  } total = valor*qtd;
   printf("Total: R$ %.2f\n", total);
 return 0;
}
