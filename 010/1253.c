    /* Cesar */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define MX 1000

int main (void) {
  char text[MX];
  int  cod,
       n,i,k;
   scanf("%d", &k);
 while (k--) {
  scanf("%s", text);
  scanf("%d", &cod);
   n = strlen(text);
  for (i = 0; i < n; i++) {
    text[i] = toupper(text[i]);
    text[i] -= cod;
   if (text[i] < 65)
     text[i] += 26;
  } printf("%s\n", text);
 }
 return 0;
}
