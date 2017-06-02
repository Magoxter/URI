	/* DDD */
#include <stdio.h>

enum {
Campinas = 19,
Paulo = 11,
Rio = 21,
Vitoria = 27,
Horizonte = 31,
Juiz = 32,
Brasilia = 61,
Salvador = 71
} Estado;

int main (void) {
  int Estado;
  	scanf("%d", &Estado);
  if (Estado == Paulo)
  	printf("Sao Paulo\n");
  else if (Estado == Brasilia)
  	printf("Brasilia\n");
  else if (Estado == Salvador)
  	printf("Salvador\n");
  else if (Estado == Rio)
  	printf("Rio de Janeiro\n");
  else if (Estado == Juiz)
  	printf("Juiz de Fora\n");
  else if (Estado == Campinas)
  	printf("Campinas\n");
  else if (Estado == Vitoria)
  	printf("Vitoria\n");
  else if (Estado == Horizonte)
  	printf("Belo Horizonte\n");
  else
  	printf("DDD nao cadastrado\n");
 return 0;
}
