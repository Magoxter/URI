    /* Batmain */
#include <stdio.h>
#include <stdlib.h>
#define MX 1000

int main (void) {
  char jok[MX];
  int  r;
   scanf("%d", &r);
 while (r--) {
  scanf(" %[^\n]%*c", jok);
   if (!(strcmp(jok,"Batmain")))
     printf("N\n");
   else
     printf("Y\n");
 }
 return 0;
}
