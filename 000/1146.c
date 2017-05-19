    /* SeqCresc */
#include <stdio.h>

int main (void) {
  int n,k;
   scanf("%d", &n);
 while (n) {
   k = 1; n--;
  while (n--)
    printf("%d ", k++);
    printf("%d\n", k++);
   n = 0;
  scanf("%d", &n);
 }
 return 0;
}
