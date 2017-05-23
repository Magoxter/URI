  /* Tipos Triangulos */
#include <stdio.h>
#define MAX 1000

int main (void) {
  float A,B,C;
  int   tmp;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

  if (A < B) {
    tmp = A;
    A = B;
    B = tmp; }

  if (A < C) {
    tmp = A;
    A = C;
    C = tmp; }

  if (B < C) {
    tmp = B;
    B = C;
    C = tmp; }

  if (A >= B + C)
     printf("NAO FORMA TRIANGULO\n");
  else {
    if ((A*A) == (B*B) + (C*C))
      printf("TRIANGULO RETANGULO\n");
    if ((A*A) > (B*B) + (C*C))
      printf("TRIANGULO OBTUSANGULO\n");
    if ((A*A) < (B*B) + (C*C))
      printf("TRIANGULO ACUTANGULO\n");

    if ((A == B) && (B == C) && (A == C))
      printf("TRIANGULO EQUILATERO\n");
    else if (A == B ||
             A == C ||
             B == C  )
       printf("TRIANGULO ISOSCELES\n");
  }
 return 0;
}
