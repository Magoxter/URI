    /* Seq IJ 4 */
#include <stdio.h>

int main (void) {
  float i,j;
 for (i = 0; i < 2.1; i+=0.2) {
  for (j = 1; j <= 3; j+=1.0) {
    if (i == 0 || i == 1 ||(int)i == 2)
      printf("I=%.0f J=%.0f\n",i,j+i);
    else
      printf("I=%.1f J=%.1f\n",i,j+i);
  }
 }
 return 0;
}
