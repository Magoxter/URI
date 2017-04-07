	/* Ret */
#include <stdio.h>
#define MAX 10000

void ordena(int,int[]);

int main (void) {
  int n,i,r,k,
      ret[MAX];
 while (scanf("%d", &n) != EOF) {
    scanf("%d", &r);
   for (i = 0; i < r; i++)
     scanf("%d", &ret[i]);
   if (r == n)
     printf("*\n");
   else {
     ordena(r,ret);
     ordena(r,ret);
     k = 1;
    for (i = 0; i < r; i++) {
      if (ret[i] != k) {
        printf("%d ", k);
        i--;
      } k++;
    } if (k <= n)
     for (i = k; i <= n; i++)
       printf("%d ", i);
       printf("\n");
   }
 }
 return 0;
}

void ordena (int n, int v[MAX]) {
  int i,j,
      min,
      tmp;
    for (i = 0; i < n-1; i++) {
        min = i;
       for (j = i+1; j < n; j++) {
          if (v[j] < v[min]) {
             min = j;
              tmp = v[i];
              v[i] = v[min];
              v[min] = tmp;
          }
       }
    }
}
