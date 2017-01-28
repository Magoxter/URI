    /* Area */
#include <stdio.h>
#include <math.h>

double circulo (double);
double quadrado (double);
double trapezio (double,double,double);
double retangulo (double,double);
double triangulo (double,double);

int main (void) {
  double A,B,C,
         circ,
         quad,
         trap,
         retang,
         triang;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
  triang = triangulo(A,C);
  circ = circulo(C);
  trap = trapezio(A,B,C);
  quad = quadrado(B);
  retang = retangulo(A,B);
   printf("TRIANGULO: %.3lf\n", triangulo(A,C));
   printf("CIRCULO: %.3lf\n", circulo(C));
   printf("TRAPEZIO: %.3lf\n", trapezio(A,B,C));
   printf("QUADRADO: %.3lf\n", quadrado(B));
   printf("RETANGULO: %.3lf\n", retangulo(A,B));
 return 0;
}

double triangulo (double b,double h) {
  double area;
    area = (b * h) / 2.0;
 return area;
}

double circulo (double r) {
  double area;
  double pi = 3.14159;
    area = pi * (r*r);
 return area;
}

double trapezio (double b1,double b2,double h) {
  double area;
    area = ((b1+b2)*h)/2.0;
 return area;
}

double quadrado (double l) {
  double area;
    area = l*l;
 return area;
}

double retangulo (double b,double h) {
  double area;
    area = b*h;
 return area;
}
