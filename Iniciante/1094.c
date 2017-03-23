    /* Cobaias */
#include <stdio.h>

int main (void) {
  float perC,
        perR,
        perS;
  int   n,i,x,t,
        c,r,s;
  char  cob;
    c = r = t = s = 0;
   scanf("%d", &n);
  while (n--) {
    scanf("%d",&x);
    scanf(" %c",&cob);
   if (cob == 'C')
     c += x;
   if (cob == 'R')
     r += x;
   if (cob == 'S')
     s += x;
   t += x;
  } perC = (c*100) / (float) t;
    perR = (r*100) / (float) t;
    perS = (s*100) / (float) t;
  printf("Total: %d cobaias\n", t);
  printf("Total de coelhos: %d\n", c);
  printf("Total de ratos: %d\n", r);
  printf("Total de sapos: %d\n", s);
  printf("Percentual de coelhos: %.2f %\n", perC);
  printf("Percentual de ratos: %.2f %\n", perR);
  printf("Percentual de sapos: %.2f %\n", perS);
 return 0;
}
