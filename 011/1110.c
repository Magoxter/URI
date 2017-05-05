    /* Cartas */
#include <stdio.h>
#define MAX 1000

void troca (int*, int*);

int main (void) {
  int n,i,c,k,x,
      card[MAX],
      disc[MAX],
      cartas;
    scanf("%d", &cartas);
 while (cartas != 0) {
  x = cartas;
  n = cartas;
  k = n;
 for (i = 0; i < n; i++) {
   card[i] = k;
   k--;
 } c = 0;
  while (cartas > 1) {
     disc[c] = card[n-1];
     card[n-1] = 0;
     n--; c++;
  if (n > 1)
  for (i = n-1; i > 0; i--)
     troca(&card[i],&card[i-1]);
    cartas--;
   }
   for (i = 0; i < x; i++)
      if (card[i] != 0)
        x = i;
     printf("Discarded cards: ");
   for (i = 0; i < c; i++) {
      printf("%d", disc[i]);
    if (i != c - 1)
      printf(", ");
   }  printf("\n");
      printf("Remaining card: ");
      printf("%d\n", card[x]);
    x = 0;
  scanf("%d", &cartas);
 }
 return 0;
}

void troca (int *x, int *y) {
  int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
 return;
}
