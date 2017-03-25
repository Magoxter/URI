    /* X por Y */
#include <stdio.h>

int main (void) {
  int n,y,x;
  float div;
   scanf("%d", &n);
 while (n--) {
   scanf("%d", &x);
   scanf("%d", &y);
  if (y == 0)
    printf("divisao impossivel\n");
  else {
    div = (float) x/y;
   if (div == -0.0)
     printf("0.0\n");
   else
     printf("%.1f\n", (float)x/y);
  }
 }
 return 0;
}
