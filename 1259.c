    /* ParImpare */
#include <stdio.h>
#define MAX 1000

void ordenaP (int,int[]);
void ordenaI (int,int[]);

int main (void) {
  int n,i,k,j,
      v[MAX],
      par[MAX],
      imp[MAX];
    scanf("%d", &n);
   for (i = 0; i < n; i++)
      scanf("%d", &v[i]);
     k = j = 0;
   for (i = 0; i < n; i++) {
    if (v[i] % 2 == 0) {
      par[k] = v[i];
      k++;    }
    else {
      imp[j] = v[i];
      j++;    }
   }
     ordenaP (k,par);
     ordenaI (j,imp);
 return 0;
}

void ordenaP (int n, int v[MAX]) {
  int i,k,
      min;
    for (i = 0; i < n-1; i++) {
        min = i;
      for (k = i+1; k < n; k++) {
         if (v[min] > v[k]) {
            min = k;
           int tmp;
             tmp = v[i];
             v[i] = v[min];
             v[min] = tmp;
         }
      }
    }
  for (i = 0; i < n; i++)
     printf("%d\n", v[i]);
}

void ordenaI (int n, int v[MAX]) {
  int i,k,
      max;
    for (i = 0; i < n-1; i++) {
        max = i;
      for (k = i+1; k < n; k++) {
         if (v[max] < v[k]) {
            max = k;
           int tmp;
             tmp = v[i];
             v[i] = v[max];
             v[max] = tmp;
         }
      }
    }
  for (i = 0; i < n; i++)
     printf("%d\n", v[i]);
}
