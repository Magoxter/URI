	/* Cedulas */
#include <stdio.h>

int main (void) {
  int cedulas,
      cem,dez,
      um,dois,
      cinq,vinte,
      cinco;
    scanf("%d", &cedulas);
  cem = cedulas / 100;
  cinq = (cedulas - (cem*100)) / 50;
  vinte = (cedulas -(cem*100 + cinq*50)) / 20;
  dez = (cedulas -(cem*100+cinq*50+vinte*20)) / 10;
  cinco = (cedulas -(cem*100+cinq*50+vinte*20+dez*10)) / 5;
  dois = (cedulas -(cem*100+cinq*50+vinte*20+dez*10+cinco*5)) / 2;
  um = (cedulas -(cem*100+cinq*50+vinte*20+dez*10+cinco*5+dois*2));
   printf("%d\n", cedulas);
   printf("%d nota(s) de R$ 100,00\n", cem);
   printf("%d nota(s) de R$ 50,00\n", cinq);
   printf("%d nota(s) de R$ 20,00\n", vinte);
   printf("%d nota(s) de R$ 10,00\n", dez);
   printf("%d nota(s) de R$ 5,00\n", cinco);
   printf("%d nota(s) de R$ 2,00\n", dois);
   printf("%d nota(s) de R$ 1,00\n", um);
 return 0;
}
