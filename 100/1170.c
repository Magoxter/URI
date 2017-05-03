	/* Blob */
#include <stdio.h>

int main (void) {
  float sup;
  int 	r,d;
    scanf("%d", &r);
 while (r--) {
   scanf("%f", &sup);
   d = 0;
  while(sup > 1.0) {
    sup /= 2.0;
   d++;
  } printf("%d dias\n", d);
 }
 return 0;
}
