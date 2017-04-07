/* Turma do Chaves */
#include <stdio.h>
#include <string.h>
#define MAX 1000

typedef char string[MAX];

int main (void) {
  int 	 n,k,par,
         par,imp,
         tam1,result;
  string jog1,jog2,
         nome1,nome2;
   scanf("%d", &n);
  for (k = 0 ; k < n; k++) {
    scanf("%s", nome1);
    scanf("%s", jog1);
    scanf("%s", nome2);
    scanf("%s", jog2);
    scanf("%d", &par);
    scanf("%d", &imp);
   result = par + imp;
    tam1 = strlen(jog1);
     if (result % 2 == 0) {
      if (tam1 == 3)
      	printf("%s\n", nome1);
      else
       	printf("%s\n", nome2); 	 }
     else {
      if (tam1 == 5)
    	 printf("%s\n", nome1);
      else
         printf("%s\n", nome2);	  }
  }
 return 0;
}
