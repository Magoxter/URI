#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    float delta=0,x1=0,x2=0;
    double a=0,b=0,c=0;
int main () {
    /*Le e Calcula a distancia*/
    scanf ("%lf %lf %lf",&a,&b,&c); 
    /*Calcula o Delta*/
    delta = pow(b,2) - (4*a*c);
    if ((a!=0) && (delta > 0)) {
        delta = sqrt (delta);
        x1 = (-b) + (delta);
        x2 = (-b) - (delta);
        x1 = x1 / (2*a);
        printf ("R1 = %.5f\n",x1);
        x2 = x2 / (2*a);
        printf ("R2 = %.5f\n",x2);
    }
    else {
        printf ("Impossivel calcular\n");
    }
 return 0;
}
