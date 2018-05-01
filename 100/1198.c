		/* 1198 */
#include <stdio.h>

long long
int mod (long long int);

int main (void) {
  long long
  int HashArmy;
  long long
  int EnemyArmy;
 while (scanf("%lld", &HashArmy) != EOF) {
 	scanf("%lld", &EnemyArmy);
  printf("%lld\n", mod(HashArmy - EnemyArmy));
 }
 return 0;
}

long long int mod (long long int num) {
 if (num > 0)
   return num;
 else
   return num * -1;
}
