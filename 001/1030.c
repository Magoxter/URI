        /* Josephus */
#include <stdio.h>

int Josephus (int,int);

int main (void) {
  int n,i,r,k;
   scanf("%d", &r);
  i = 0;
 while (r--) { ++i;
   scanf("%d", &n);
   scanf("%d", &k);
  printf("Case %d: %d\n", i, Josephus(n,k));
 }
 return 0;
}

int Josephus (int n, int k) {
 if (n == 1)
   return 1;
 else
   return (((Josephus(n-1,k) + k-1) %n) +1);
}
