    /* Idades */
#include <stdio.h>

int main (void) {
  int c,n,r,s;
  float media;
   scanf("%d", &n);
  c = s = 0;
 while (n > 0) {
   s += n; c++;
  scanf("%d", &n);
 } media = s / (float) c;
 printf("%.2f\n", media);
 return 0;
}
