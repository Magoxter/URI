    /* Mult 13 */
#include <stdio.h>

void troca (int*,int*);

int main (void) {
  int i,x,y,
      soma;
   scanf("%d", &x);
   scanf("%d", &y);
  if (x > y)
    troca(&x,&y);
  soma = 0;
 for (i = x; i <= y; i++)
   if (i %13 != 0)
    soma += i;
  printf("%d\n", soma);
 return 0;
}

void troca (int *x, int *y) {
  int ax;
    ax = *x;
    *x = *y;
    *y = ax;
 return;
}

