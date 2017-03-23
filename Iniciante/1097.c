    /* Seq IJ 3 */
#include <stdio.h>

int main (void) {
  int n,i,j;
 for (i = 1; i < 10; i+=2) {
   n = i+6;
  for (j = n; j > n-3; j--)
    printf("I=%d J=%d\n",i,j);
 }
 return 0;
}
