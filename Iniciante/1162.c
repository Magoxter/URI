    /* Vagoes */
#include <stdio.h>
#define MAX 1000

void ordena (int,int[],int*);

int main (void) {
  int n,i,k, j,
      ctrl,x,
      repeat,
      v[MAX];
     ctrl = 0;
    scanf("%d", &repeat);
   for (k = 0; k < repeat; k++) {
      scanf("%d", &n);
     for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
     
        while(n--){
   for (j = 0; j < n; j++) {  
      if (v[j] > v[j+1]) {
          int tmp;
            tmp = v[j];
            v[j] = v[j+1];
            v[j+1] = tmp;
          ctrl++;
        }
      }
     }
  




      printf("Optimal train swapping takes %d swaps.\n", ctrl);
    ctrl = 0;
   }
 return 0;
}

void ordena (int n, int v[MAX],int*ctrl) {
  int i,j;
  }

