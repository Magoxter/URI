    /* Stranger Things */
#include <stdio.h>
#define MX 30

int main (void) {
  int  n,i,k;
  char alf[MX];
 while (scanf("%s", alf) != EOF) {
   scanf("%d", &n);
  for (i = 0; i < n; i++) {
  	 scanf("%d", &k);
  	printf("%c", alf[k-1]);
  } printf("\n");
 }
 return 0;
}
3
