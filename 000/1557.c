    /* MatQuad III */
#include <stdio.h>
#define MX 100

long long int raiz (int,int);

int main (void) {
  int mat[MX][MX];
  int n,y,c,l,x,r,
      lin,col,pot;
   scanf("%d", &n);
 while (n) {
   x = y = 1;
   lin = col = n;
   pot = 2 *n -2;
   r = raiz(2,pot);
  for (l = 0; l < lin; l++)
   for (c = 0; c < col; c++)
     mat[l][c] = 0;
  for (l = 0; l < lin; l++) {
   for (c = 0; c < col; c++) {
     if (!l) {
       mat[l][c] = x;
      x *= 2;
     }
     if (!c) {
       mat[l][c] = y;
      y *= 2;
     }
   }
  } int precisionNumber = 0;
  while (r) {
    r /= 10;
   precisionNumber++;
  }
  for (l = 1; l < lin; l++)
   for (c = 1; c < col; c++)
     mat[l][c] = mat[l][c-1] *2;
  for (l = 0; l < lin; l++) {
   for (c = 0; c < col; c++) {
     if (!c)
       printf("%*llu", precisionNumber, mat[l][c]);
     else
       printf(" %*llu", precisionNumber, mat[l][c]);
   } printf("\n");
 } printf("\n");
  scanf("%d", &n);
 }
 return 0;
}

long long int raiz (int n, int x) {
  long long
  int r;
   r = 1;
 while (x--)
  r *= n;
 return r;
}
