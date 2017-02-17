    /* Diamantes */
#include <stdio.h>
#include <string.h>
#define MAX 1000

int main (void) {
  int  n,i,r,k,
       diamantes,
       abre,fecha;
  char diam[MAX];
   scanf("%d", &r);
 for (k = 0; k < r; k++) {
    scanf(" %[^\n]%*c", diam);
   n = strlen(diam);
   abre = fecha = 0;
   diamantes = 0;
  for (i = 0; i < n; i++) {
    if (diam[i] == '<')
      abre++;
    else if (diam[i] == '>') {
      if (abre != 0) {
        diamantes++;
        abre--;      }
    }
  } /*
   if (abre > fecha)
     diamantes = fecha;
   else
     diamantes = abre; */
    printf("%d\n", diamantes);
      diamantes = 0;
 }
 return 0;
}
