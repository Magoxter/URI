	/* Criptografia */
#include <stdio.h>
#include <string.h>
#define MAX 1000

int main (void) {
  char txt[MAX];
  int  n,i,r,k,
       tmp,f,m,
       ctrl,t;
   scanf("%d", &r);
 for (k = 0; k < r; k++) {
    scanf(" %[^\n]%*c", txt);
   n = strlen(txt);
   ctrl = 0;
  for (i = 0; i < n; i++) {
    if (txt[i] > 64 && txt[i] < 91)
      ctrl++;
    else if (txt[i] > 96 && txt[i] < 123)
      ctrl++;
    if (ctrl)
      txt[i]+=3;
      ctrl = 0;     }
    f = n-1;
    m = f/2;
    i = 0;
  while (i <= m) {
   tmp = txt[i];
   txt[i] = txt[f];
   txt[f] = tmp;
   f--; i++;  }
   f = n-1;
   m = f/2;
   t = 0;
  if (n %2 == 0)
    t = 1;
  for (i = m+t; i < n; i++)
    txt[i]--;
   printf("%s\n", txt);
 }
 return 0;
}
