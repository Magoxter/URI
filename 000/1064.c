	/* Positivos Media */
#include <stdio.h>

int main (void) {
  float num,
        som,
        med;
  int	n,i,
  		par;
  	n = 6;
  	par = 0;
  	som = 0.0;
  for (i = 0; i < n; i++) {
  	scanf("%f", &num);
   if (num > 0) {
   	 par++;
   	 som += num;
   }
  } med = som / par;
  printf("%d valores positivos\n", par);
  printf("%.1f\n", med);
 return 0;
}
