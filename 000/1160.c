    /* Populacao */
#include <stdio.h>

int main (void) {
  int    cidA,
         cidB;
  int    cont,r;
  double txA,txB;
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &cidA);
   scanf("%d", &cidB);
   scanf("%lf", &txA);
   scanf("%lf", &txB);
    cont = 0;
  while (cidA <= cidB) {
    cidA += cidA * (txA/100);
    cidB += cidB * (txB/100);
   cont++;
    if (cont > 100) {
      cont = 0;
      break;
    }
  } if (!cont)
     printf("Mais de 1 seculo.\n");
  else
    printf("%d anos.\n", cont);
 }
 return 0;
}
