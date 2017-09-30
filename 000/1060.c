	/* Positivos */
#include <stdio.h>

int main (void) {
  float num;
  int	n,i,
  		par;
  	n = 6;
  	par = 0;
  for (i = 0; i < n; i++) {
  	scanf("%f", &num);
   if (num > 0)
   	 par++;
  } printf("%d valores positivos\n", par);
 return 0;
}
