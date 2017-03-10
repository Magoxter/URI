	/* Tempo de Jogo */
#include <stdio.h>

void troca (int*,int*);

int main (void) {
  int hora1,
  	  horaF,
  	  tempo;

  	scanf("%d", &hora1);
  	scanf("%d", &horaF);

  if (hora1 > horaF)
  	tempo = (24 - hora1) + horaF;
  if (hora1 == horaF)
  	tempo = 24;
  if (hora1 < horaF)
  	tempo = horaF - hora1;

  printf("O JOGO DUROU %d HORA(S)\n", tempo);

 return 0;
}

void troca (int *x, int *y) {
  int tmp;
  	tmp = *x;
  	*x = *y;
  	*y = tmp;
 return;
}
