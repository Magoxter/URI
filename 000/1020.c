    /* Idade */
#include <stdio.h>
#define ano 365
#define mes 30

int main (void) {
  int idade,
      anos,
      meses,
      dias;
    scanf("%d", &idade);
   anos = idade / ano;
   meses = (idade - (ano*anos)) / mes;
   dias = idade - (anos*ano) - (meses*mes);
  printf("%d ano(s)\n", anos);
  printf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", dias);
 return 0;
}
