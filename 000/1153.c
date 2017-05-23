    /* Fatorial */
#include <stdio.h>

int main (void) {
  long long
  int fat;
  int n;
   scanf("%d", &n);
  fat = 1; n++;
 while (n--) {
  if (!n)
    break;
   fat *= n;
 } printf("%lld\n", fat);
 return 0;
}
