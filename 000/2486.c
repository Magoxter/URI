	/* Vitamina C */
#include <stdio.h>
#define MX 1000

int main (void) {
  int n,w,c,k;
  char a[MX];
   scanf("%d", &w);
  c = 0;
 while (w) { c = 0;
  while (w--) {
  	scanf("%d", &n);
  	scanf(" %[^\n]%*c", a);
   if (!(strcmp(a,"suco de laranja")))
   	 c += n * 120;
   else if (!(strcmp(a,"morango fresco")))
   	 c += n * 85;
   else if (!(strcmp(a,"mamao")))
   	 c += n * 85;
   else if (!(strcmp(a,"goiaba vermelha")))
   	 c += n * 70;
   else if (!(strcmp(a,"manga")))
   	 c += n * 56;
   else if (!(strcmp(a,"laranja")))
   	 c += n * 50;
   else if (!(strcmp(a,"brocolis")))
   	 c += n * 34;
  } k = 110;
  if (c < k)
    printf("Mais %d mg\n", k-c);
  else if (c > 130)
      printf("Menos %d mg\n", c-130);
  else
   printf("%d mg\n", c);
  scanf("%d", &w);
 }
 return 0;
}
