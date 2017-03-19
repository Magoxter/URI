    /* Fuso Horario */
#include <stdio.h>

int main (void) {
  int saida,
      tempo,
      fuso,
      horario;
    scanf("%d", &saida);
    scanf("%d", &tempo);
    scanf("%d", &fuso);
   horario = saida + tempo + fuso;
     if (horario >= 24)
       horario -= 24;
   horario = horario;
     if (horario < 0)
       horario += 24;
    printf("%d\n", horario);
 return 0;
}
