	/* QuadCubo */
#include <stdio.h>

int main (void) {
  int n,i;
   i = 1;
  scanf("%d", &n);
 while (n--) {
 	printf("%d %d %d\n", i,i*i,i*i*i);
  i++;
 }
 return 0;
}
