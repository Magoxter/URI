	/* Sequencia S */
#include <stdio.h>

int main (void) {
  float s;
  int   i;
   i = 1;
   s = 0.0;
 while (i <= 100) {
  if (!i)
    break;
   s += 1.0/i; i++;
 } printf("%.2f\n", s);
 return 0;
}
