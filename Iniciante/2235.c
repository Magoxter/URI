    /* Andando no Tempo */
#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int main (void) {
  int  a,b,c,
       n,i,k,
       maior,
       v[MAX];
  bool presente;
// Inicializacao
    presente = false;
    maior = 0;
    n = 3;
// Leitura
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
     a = v[0]; b = v[1]; c = v[2];
// Maior dentre os Numeros
   for (i = 0; i < n; i++)
     if (v[i] > maior)
        maior = v[i];
// Condicoes
   for (i = 0; i < n-1; i++)
    for (k = i+1; k < n; k++)
       if (v[i] == v[k] || v[i]+v[k] == maior)
          presente = true;
// Apresentacao
    if (presente)
      printf("S\n");
    else
      printf("N\n");
 return 0;
}
