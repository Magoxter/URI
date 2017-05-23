    /* Seq S II */
#include <stdio.h>

int main (void) {
  int dvd,
      dvr;
  float s;
   s = 0.0;
   dvd = dvr = 1;
 while (dvd != 39) {
  s += (float) dvd / dvr;
   dvd += 2;
   dvr *= 2;
 } printf("%.2f\n", s);
 return 0;
}
