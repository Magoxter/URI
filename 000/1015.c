    /* Distancia */
#include <stdio.h>
#include <math.h>
#define MAX 1000

int main (void) {
  double x1,x2,
         y1,y2,
         raizX,
         raizY,
         aux;
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
  raizX = pow((x2-x1),2);
  raizY = pow((y2-y1),2);
  aux = raizX + raizY;
    printf("%.4lf\n", sqrt(aux));
 return 0;
}
