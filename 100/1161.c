    /* SomaFat */
#include <stdio.h>

int main (void) {
  long long
  int fat[21];
  int n,i,num1,num2;
    fat[0] = 1;
 while (scanf("%d", &num1) != EOF) {
        scanf("%d", &num2);
  for (i = 1; i < 21; i++)
    fat[i] = fat[i-1] * i;
  printf("%lld\n", fat[num1] + fat[num2]);
 }
 return 0;
}
