	/* Ret */
#include <stdio.h>
#define MAX 1000

void ordena(int,int[]);
void troca (int*,int*);

int main (void) {
  int n,i,r,k;
	int ret[MAX];
 while (scanf("%d", &n) != EOF) {
    scanf("%d", &r);
   for (i = 0; i < r; i++)
     scanf("%d", &ret[i]);
   if (r == n)
     printf("*\n");
   else {
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
  int k,i;
  int min;
 for (i = 0; i < n-1; i++) {
    min = i;
  for (k = i+1; k < n; k++) {
   if (v[k] < v[min])
    min = k;
  } if (min != i)
      troca(&v[i],&v[min]);
 }
 return;
}

void troca (int *x, int *y) {
  int ax;
   ax = *y;
   *y = *x;
   *x = ax;
 return;
} 
