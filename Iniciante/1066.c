	/* ImPar e PosNeg */
#include <stdio.h>

int main (void) {
  int n,i,num,
      imp,par,
      pos,neg;
  	n = 5;
  	pos = neg = 0;
  	par = imp = 0;
  for (i = 0; i < n; i++) {
  	scanf("%d", &num);
   if (num %2 == 0)
     par++;
   if (num %2 != 0)
     imp++;
   if (num > 0)
     pos++;
   if (num < 0)
     neg++;
  }
  printf("%d valor(es) par(es)\n", par);
  printf("%d valor(es) impar(es)\n", imp);
  printf("%d valor(es) positivo(s)\n", pos);
  printf("%d valor(es) negativo(s)\n", neg);
 return 0;
}
