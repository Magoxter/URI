    /* Media 3 */
#include <stdio.h>

int main (void) {
  float n1,n2,
        n3,n4,
        media,
        mediaF;
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
     n1 *= 2;
     n2 *= 3;
     n3 *= 4;
     n4 *= 1;
  media = (n1 + n2 + n3 + n4) / 10;
   printf("Media: %.1f\n", media);
    if (media >= 7.0)
      printf("Aluno aprovado.\n");
    else if (media < 5.0)
      printf("Aluno reprovado.\n");
    else if(media >= 5.0 && media < 7.0) {
      printf("Aluno em exame.\n");
      printf("Nota do exame: ");
       scanf("%f", &n1);
      printf("%.1f\n", n1);
       mediaF = (media + n1) / 2;
     if (mediaF >= 5.0) {
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", mediaF);
     } else {
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", mediaF);
     }
    }
 return 0;
}
