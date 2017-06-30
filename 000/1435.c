	/* MatQuad I */
#include <stdio.h>
#define MX 100

int main (void) {
  int n,l,c,k,x,t,i,f,
      linhas,colunas,
      mat[MX][MX],ctrl;
   scanf("%d", &n);
 while (n) {
   linhas = colunas = n;
  for (l = 0; l < linhas; l++)
   for (c = 0; c < colunas; c++)
     mat[l][c] = 0;
   x = 1; k = n;
   f = n-1;
   n /= 2;
   i = 0;
  while (n--) {
    for (l = 0; l < linhas; l++) {
     for (c = 0; c < colunas; c++) {
       if (!(mat[l][c]))
         ctrl = 1;
       else
         ctrl = 0;
    if (ctrl) {
     if (l == i || c == i)
       mat[l][c] = x;
     if (l == f || c == f)
       mat[l][c] = x;
    } else
        ctrl = 0;
     }
    } i++; f--;
   x++;
  } if (n%2) { int
      sub = k /2;
   for (l = 0; l < linhas; l++)
    for (c = 0; c < colunas; c++)
       if (!(mat[l][c]))
         mat[l][c] = k - sub;
 } for (l = 0; l < linhas; l++) {
    for (c = 0; c < colunas; c++) {
     if (!c)
       printf("%3d", mat[l][c]);
     else
       printf(" %3d", mat[l][c]);
    } printf("\n");
  } printf("\n");
  scanf("%d", &n);
 }
 return 0;
}
