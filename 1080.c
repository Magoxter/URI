#include <stdio.h>

int main () {
  int i,idmax,
      maior,
      v[100];
    for (i = 0; i < 100; i++)
       scanf ("%d", &v[i]);
     maior = v[0];
        for (i = 0; i < 100; i++) {
            if (v[i] > maior) {
               maior = v[i];
               idmax = i;       }   }
    printf("%d\n", maior);
    printf("%d\n", idmax+1);
 return 0;
}
