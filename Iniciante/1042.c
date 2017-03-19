    /* Sort */
#include <stdio.h>
#define MAX 3000

void ordena (int,int[]);

int main (void) {
  int n,i,k,
      v[MAX],
      x[MAX];
    n = 3;
   for (i = 0; i < n; i++) {
      scanf("%d", &v[i]);
      x[i] = v[i];   }
    ordena(n,v);
   for (i = 0; i < n; i++)
      printf("%d\n", v[i]);
      printf("\n");
   for (i = 0; i < n; i++)
      printf("%d\n", x[i]);
 return 0;
}

void ordena (int n, int v[MAX]) {
  int i,k,
      min,
      tmp;
    for (i = 0; i < n; i++) {
       min = i;
      for (k = i+1; k < n; k++)
         if (v[k] < v[min])
            min = k;
        tmp = v[min];
        v[min] = v[i];
        v[i] = tmp;
    }
 return;
}
