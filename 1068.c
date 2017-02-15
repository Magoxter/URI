  /* 1068 */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 10000

typedef char string[MAX];

int main (void) {
  int  tam,i,
       contA,contF;
  char equacao[MAX];
  bool correto;
 while (scanf(" %[^\n]%*c", equacao) != EOF) {
     tam = strlen(equacao);
     contA = contF = 0;
     correto = true;
  for (i = 0; i < tam; i++) {
    if (equacao[i] == '(') {
      if (contA < contF)
        correto = false;
      else
        contA++;
    } else if (equacao[i] == ')') {
          if (contA == 0) {
            correto = false;
            i = tam;
         } else
             contF++;
    }
  }
    if (correto && contA == contF)
       printf("correct\n");
    else
       printf("incorrect\n");
 }
 return 0;
}
