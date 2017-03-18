    /* Tabuada */
#include <stdio.h>

int main (void) {
  int n,i,x;
    x = 11;
   scanf("%d", &n);
  for (i = 1; i < x; i++)
    printf("%d x %d = %d\n",i,n,n*i);
 return 0;
}
