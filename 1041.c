#include <stdio.h>
int main () {
  float x,y,z;
    z = 0.0;
   scanf("%f", &x);
   scanf("%f", &y);
    if (x != z) {
      if (y > z) {
        if (x > z)
           printf("Q1\n");
        else
           printf("Q2\n");  }
      if (y < z) {
        if (x < z)
           printf("Q3\n");
        else
           printf("Q4\n");  }
  }
    if (x == z && y != z)
       printf("Eixo Y\n");
    if (y == z && x != z)
        printf("Eixo X\n");
    if (x == z && y == z)
        printf("Origem\n");
 return 0;
}
