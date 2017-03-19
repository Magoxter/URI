    /* Marmore */
#include <stdio.h>
#define MAX 10000

int busca_B (int,int[],int);
void ordena (int,int[]);

int main (void) {
  int n,i,q,k,
      busca,x,
      m[MAX];
   k = 1;
    scanf("%d", &n);
    scanf("%d", &q);
  while (n != 0 || q != 0) {
     for (i = 0; i < n; i++)
       scanf("%d", &m[i]);
      ordena(n,&m);
      printf("CASE# %d:\n", k);
     for (i = 0; i < q; i++) {
       scanf("%d", &x);
     busca = busca_B(n,m,x);
       if (m[busca] == x)
         printf("%d found at %d\n",x,busca+1);
       else
         printf("%d not found\n", x);
     }

      k++;
    scanf("%d", &n);
    scanf("%d", &q);
  }
 return 0;
}

void ordena (int n, int v[]){
    int aux;
    int j, i;

    for(i =1; i < n; i++){
        aux = v[i];
        for(j = i-1; j >= 0 && v[j] > aux; j--)
            v[j+1] = v[j];

        v[j+1] = aux;
    }
    return;

}

int busca_B (int n,int v[MAX],int x) {
  int meio,i,
      esq,dir;
    esq = -1;
    dir = n;
   while (esq < dir-1) {
      meio = (esq + dir) / 2;
     if (v[meio] < x)
        esq = meio;
     else
        dir = meio;   }
 return dir;
}
