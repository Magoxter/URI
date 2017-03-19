	/* Pares de 5 */
#include <stdio.h>

int main (void) {
  int n,i,
      par,
      num;
  	n = 5;
  	par = 0;
  for (i = 0; i < n; i++) {
  	scanf("%d", &num);
   if (num %2 == 0)
     par++;
  }
  printf("%d valores pares\n", par);
 return 0;
}
