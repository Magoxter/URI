    /* Recreio */
#include <stdio.h>
#define MAX 1000

void ordena (int,int[]);

int main () {
  int n,i,k,
      repeat,
      ctrl,y,
      v[MAX],
      x[MAX];
    scanf("%d", &repeat);
   for (k = 0; k < repeat; k++) {
      scanf("%d", &n);
     ctrl = n;
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        x[i] = v[i];
    }
     ordena(n,&v);
    for (i = 0; i < n; i++)
      if (x[i] != v[i])
        ctrl--;
      printf("%d\n", ctrl);
   }
 return 0;
}

void ordena (int tam, int num[]) {
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++)
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] > num[min])
         min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}
