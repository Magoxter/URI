	/* KingReturns */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MX 111

int main (void) {
  char 	 num[MX];
  int	 	 k,i,t,f;
  int	 	 sum;
  double med;
   scanf("%s", num);
  t = strlen(num);
  sum = 0; f = t;
 for (i = t-1; i >= 0; i--) {
 	 k = num[i] -48;
 	if (!k) {
 		k = 10;
 		i--; f--;
 	} sum += k;
 } med = (double) sum / f;
 printf("%.2lf\n", med);
 return 0;
}
