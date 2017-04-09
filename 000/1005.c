	/* Media 1 */
#include <stdio.h>

int main (void) {
  float nota1,
  	nota2,
  	notaA,
  	notaB,
  	media;
    scanf("%f", &nota1);
    scanf("%f", &nota2);
  notaA = nota1 * 3.5;
  notaB = nota2 * 7.5;
  media = (notaA + notaB) / 11.0;
   printf ("MEDIA = %.5f\n", media);
 return 0;
}
