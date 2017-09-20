		/* MatQuad IV */
#include <stdio.h>
#define MX 111

int main (void) {
  int n,c,l,k;
  int mat[MX][MX];
 while (scanf("%d", &n) != EOF) {
 	for (l = 0; l < n; l++)
 	 for (c = 0; c < n; c++)
 	 	 mat[l][c] = 0;
 	for (l = 0; l < n; l++) {
 	 for (c = 0; c < n; c++) {
 	 	  mat[l][c] = 0;
 	 	  k = 0;
 	 	if (l-c == k)
 	 	 	mat[l][c] = 2;
 	 	  k = n-1;
 	  if (l+c == k)
 	 		mat[l][c] = 3;
 	 	  k = n/3;
 	  if (l >= k)
 	  if (c >= k)
 	  if (l < n-k)
 	  if (c < n-k)
 	  	mat[l][c] = 1;
 	    k = n/2;
 	  if (l == k)
 	  if (c == k)
 	    mat[l][c] = 4;
 	 }
 } for (l = 0; l < n; l++) {
 	 for (c = 0; c < n; c++) {
 	 	 printf("%d", mat[l][c]);
 	 } printf("\n");
 	 } printf("\n");
 }
 return 0;
}
