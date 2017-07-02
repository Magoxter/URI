    /* MatQuad II */
#include <stdio.h>
#define MX 100

int main (void) {
  int n,y,l,c,x,
      colunas,
      linhas,
      mat[MX][MX];
   scanf("%d", &n);
 while (n) {
   x = y = 1;
   linhas = colunas = n;
  for (l = 0; l < linhas; l++)
   for (c = 0; c < colunas; c++)
     mat[l][c] = 0;
  for (l = 0; l < linhas; l++) {
   for (c = 0; c < colunas; c++) {
    if (!l) {
      mat[l][c] = x;
     x++;
    }
    if (!c) {
      mat[l][c] = y;
     y++;
    }
   }
  }
  for (l = 1; l < linhas; l++)
   for (c = 1; c < colunas; c++)
     mat[l][c] = mat[l-1][c-1];
  for (l = 0; l < linhas; l++) {
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
