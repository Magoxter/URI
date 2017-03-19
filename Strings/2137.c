    /* Biblioteca */
#include <stdio.h>
#define MAX 1000

void troca (int*,int*);
void ordena (int,int[]);

int main () {
  int n,i,x,
      v[MAX];
 while (scanf("%d", &n) != EOF) {
   for (i = 0; i < n; i++)
      scanf("%d", &v[i]);
   ordena(n,&v);
    for (i = 0; i < n; i++)
        printf("%.4d\n", v[i]);
  }
 return 0;
}

void ordena (int n, int v[]) {
  int i,j,
      min;
    for (i = 0; i < n-1; i++) {
         min = i;
        for (j = i+1; j < n; j++)
            if (v[j] < v[min])
                min = j;
        troca(&v[i],&v[min]);
    }
}

void troca (int*x, int*y) {
  int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
 return;
}
