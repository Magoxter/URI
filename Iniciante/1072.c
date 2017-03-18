    /* InOut */
#include <stdio.h>

int main (void) {
  int n,i,x,
      in,out;
    in = out = 0;
   scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
   if (x > 9 && x < 21)
     in++;
   else
     out++;
  } printf("%d in\n", in);
    printf("%d out\n", out);
 return 0;
}
