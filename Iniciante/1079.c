    /* Media Pond */
#include <stdio.h>

int main (void) {
  float not1,
        not2,
        not3,
        med;
  int   n;
   scanf("%d", &n);
 while (n--) {
   med = 0;
    scanf("%f", &not1);
   med += 2*not1;
    scanf("%f", &not2);
   med += 3*not2;
    scanf("%f", &not3);
   med += 5*not3;
  printf("%.1f\n", med/10.0);
 }
 return 0;
}

