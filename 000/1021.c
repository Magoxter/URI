	/* Cedulas */
#include <stdio.h>

int main (void) {
  double notas,moedas;
  int    um,cinco,
	 dez,dois,
  	 cinq,cem,
         vinte;
  int    cinqC,pao,
         cincoC,umC,
         vinteC,dezC;
    scanf("%lf", &notas);
  cem = notas / 100;
  cinq = (notas - (cem*100)) / 50;
  vinte = (notas -(cem*100 + cinq*50)) / 20;
  dez = (notas -(cem*100+cinq*50+vinte*20)) / 10;
  cinco = (notas -(cem*100+cinq*50+vinte*20+dez*10)) / 5;
  dois = (notas -(cem*100+cinq*50+vinte*20+dez*10+cinco*5)) / 2;
  um = (notas -(cem*100+cinq*50+vinte*20+dez*10+cinco*5+dois*2));
 moedas = (notas - (int) notas);
 moedas *= 100;
  cinqC = moedas / 50;
  vinteC = (moedas -(cinqC*50)) / 25;
  dezC = (moedas -(cinqC*50+vinteC*25)) / 10;
  cincoC = (moedas -(cinqC*50+vinteC*25+dezC*10)) / 5;
  umC = moedas - (cinqC*50+vinteC*25+dezC*10+cincoC*5);
   printf("NOTAS:\n");
   printf("%d nota(s) de R$ 100.00\n", cem);
   printf("%d nota(s) de R$ 50.00\n", cinq);
   printf("%d nota(s) de R$ 20.00\n", vinte);
   printf("%d nota(s) de R$ 10.00\n", dez);
   printf("%d nota(s) de R$ 5.00\n", cinco);
   printf("%d nota(s) de R$ 2.00\n", dois);
   printf("MOEDAS:\n");
// printf("%.0lf Moedas\n", moedas);
   printf("%d moeda(s) de R$ 1.00\n", um);
   printf("%d moeda(s) de R$ 0.50\n", cinqC);
   printf("%d moeda(s) de R$ 0.25\n", vinteC);
   printf("%d moeda(s) de R$ 0.10\n", dezC);
   printf("%d moeda(s) de R$ 0.05\n", cincoC);
   printf("%d moeda(s) de R$ 0.01\n", umC);
 return 0;
}
