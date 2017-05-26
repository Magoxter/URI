	/* Jogo w Minutes*/
#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int hor,min,
      h1,h2,m1,m2;
    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);
  if (m2 < m1) {
    h2--;
    m2 += 60;
  } min = m2 - m1;
    hor = h2 - h1;
  if (h1 == h2 && m1 == m2)
    hor = 24;
  if (hor < 0)
    hor += 24;
  if (min < 0)
    min += 60;
 printf("O JOGO DUROU %d HORA(S) ", hor);
 printf("E %d MINUTO(S)\n", min);
 return 0;
}
