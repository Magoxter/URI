    /* Resto */
#include <stdio.h>

int main (void) {
  int x,y,
      max,
      min;
   scanf("%d", &x);
   scanf("%d", &y);
    max = x;
    min = x;
  if (y > max)
    max = y;
  if (y < min)
    min = y;
   min++;
 while (min < max) {
  if (min %5 == 2)
    printf("%d\n", min);
  if (min %5 == 3)
    printf("%d\n", min);
  min++;
 }
 return 0;
}
