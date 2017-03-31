	/* Salario Bonificado */
#include <stdio.h>
#include <string.h>
#define MAX 1000

typedef char string[MAX];

int main (void) {
  string vendedor;
  double total,
  		 vendas,
  		 salario,
  		 comissao;
  	scanf("%s", vendedor);
  	scanf("%lf", &salario);
  	scanf("%lf", &vendas);
  comissao = vendas * 0.15;
  total = salario + comissao;
   printf("TOTAL = R$ %.2lf\n", total);
 return 0;
}
