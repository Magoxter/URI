    /* SeqNumSom */
#include <stdio.h>

int main (void) {
  int x,y,som,
      min,max;
  int i;
   scanf("%d", &x);
   scanf("%d", &y);
 while (x > 0 && y > 0) {
    som = 0;
    min = x;
    max = x;
  if (y < min)
    min = y;
  if (y > max)
    max = y;
   for (i = min; i <= max; i++) {
      som+=i;
     printf("%d ", i);
   } printf("Sum=%d\n", som);
  scanf("%d", &x);
  scanf("%d", &y);
 }
 return 0;
}
