    /* Senha */
#include <stdio.h>

int main (void) {
  int cod,sen;
    sen = 2002;
   scanf("%d", &cod);
 while (cod != sen) {
   printf("Senha Invalida\n");
    scanf("%d", &cod);
 } printf("Acesso Permitido\n");
 return 0;
}
