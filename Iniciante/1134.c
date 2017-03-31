    /* Combustivel */
#include <stdio.h>

int main (void) {
  int n,et,ds,gs;
   scanf("%d",&n);
  et = ds = gs = 0;
 while (n != 4) {
  switch (n) {
    case 1:
      et++;
     break;
    case 2:
      gs++;
     break;
    case 3:
      ds++;
     break;
    default:
     break;
  }
  scanf("%d",&n);
 } printf("MUITO OBRIGADO\n");
   printf("Alcool: %d\n", et);
   printf("Gasolina: %d\n", gs);
   printf("Diesel: %d\n", ds);
 return 0;
}
