    /* Primo */
#include <stdio.h>

int main (void) {
  int n,i,m,
      primo;
   scanf("%d", &i);
 while (i--) {
   scanf("%d", &n);
  primo = 1;
  m = 2;
 while (primo && m <= n/2) {
   if (!(n %m))
     primo = 0;
  m++;
 } if (primo)
    printf("%d eh primo\n", n);
 else
   printf("%d nao eh primo\n", n);
} return 0;
}
