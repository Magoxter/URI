    /* Triangulo */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double perimetro (double,double,double);
double area (double,double,double);
bool verificacao (double,double,double);

int main (void) {
  double A,B,C,
  		 per,ar;
  bool   triangulo;

  	scanf("%lf", &A);
  	scanf("%lf", &B);
  	scanf("%lf", &C);

  triangulo = verificacao(A,B,C);

    if (triangulo) {
      per = perimetro(A,B,C);
      printf("Perimetro = %.1lf\n", per);
    }
    else {
      ar = area(A,B,C);
      printf("Area = %.1lf\n", ar);
    }
 return 0;
}

double perimetro (double A, double B, double C) {
 return A + B  + C;
}

double area (double A, double B, double C) {
 return (A+B)*C / 2;
}

bool verificacao (double A, double B, double C) {
  if ((abs(B - C) < A && A < B + C) ||
  	  (abs(A - C) < B && B < A + C) ||
  	  (abs(A - B) < C && C < A + B)  )
  	return true;
  else
  	return false;
}
