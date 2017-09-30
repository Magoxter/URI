    /* Quadra */
#include <stdio.h>

int main (void) {
  int x,y;
   scanf("%d", &x);
   scanf("%d", &y);
 while (x && y) {
  if (x > 0) {
    if (y > 0)
      printf("primeiro\n");
    else
      printf("quarto\n");  }
  else {
    if (y > 0)
      printf("segundo\n");
    else
      printf("terceiro\n");  }
  scanf("%d", &x);
  scanf("%d", &y);
 }
 return 0;
}
