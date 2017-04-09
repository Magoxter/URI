    /* Consumo */
#include <stdio.h>

int main (void) {
  int   distancia;
  float combustivel,
        consumo;
    scanf("%d", &distancia);
    scanf("%f", &combustivel);
  consumo = (float)distancia/combustivel;
   printf("%.3f km/l\n", consumo);
 return 0;
}
