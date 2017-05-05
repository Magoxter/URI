   /* Tabuleiro */
#include <stdio.h>

int main (void) {
  double grao;
  long long
  int 	 kg;
  int    quad,r;
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &quad);
   grao = 1.0;
  while (quad--) {
   grao *= 2.0;
  } grao /= 12.0;
   grao /= 1000.0;
   kg = grao;
  printf("%lld kg\n", kg);
 }
 return 0;
}
