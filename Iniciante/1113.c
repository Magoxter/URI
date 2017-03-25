    /* DeCresc */
#include <stdio.h>

int main (void) {
  int x,y;
   scanf("%d", &x);
   scanf("%d", &y);
 while (x != y) {
  if (y > x)
    printf("Crescente\n");
  else
    printf("Decrescente\n");
  scanf("%d", &x);
  scanf("%d", &y);
 }
 return 0;
}
