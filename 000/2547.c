    /* Montanha Russa */
#include <stdio.h>

int main (void) {
  int mx,mn,
      alt,n,
      cont;
 while (scanf("%d", &n) != EOF) {
   scanf("%d", &mn);
   scanf("%d", &mx);
    cont = 0;
  while (n--) {
    scanf("%d", &alt);
   if (alt >= mn && alt <= mx)
     cont++;
  } printf("%d\n", cont);
 }
 return 0;
}
