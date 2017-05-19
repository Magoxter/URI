    /* Pascal */
#include <stdio.h>
#define MX 100

int main (void) {
  long
  int sum;
  int n,l,c,r,
      pasc[MX][MX];
   scanf("%d", &r);
 while (r--) {
   scanf("%d", &n);
  for (l = 0; l < n; l++)
   for (c = 0; c < n; c++)
     pasc[l][c] = 0;
     pasc[0][0] = 1;
    sum = 1;
   for (l = 1; l < n; l++) {
      pasc[l][0] = 1; sum++;
    for (c = 1; c < n; c++) {
      pasc[l][c] = pasc[l-1][c] +
                   pasc[l-1][c-1];
      sum += pasc[l][c];
    }
   } printf("%lld\n", sum);
 }
 return 0;
}
