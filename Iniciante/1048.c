	/* Aumento Salario */
#include <stdio.h>

int main (void) {
  double conta,
  	   salario,
  	percentual;
  	scanf("%lf", &salario);
  if (salario >= 0.0 && salario <= 400)
  	percentual = 15;
  else if (salario > 400 && salario <= 800)
  	percentual = 12;
  else if (salario > 800 && salario <= 1200)
  	percentual = 10;
  else if (salario > 1200 && salario <= 2000)
  	percentual = 7;
  else if (salario > 2000)
  	percentual = 4;
  	  conta = salario;
  	  salario *= (percentual / 100);
  printf("Novo salario: %.2lf\n", salario+conta);
  printf("Reajuste ganho: %.2lf\n", salario);
  printf("Em percentual: %.0lf %%\n", percentual);
 return 0;
}
