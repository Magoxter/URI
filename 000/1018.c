	/* Cedulas */
#include <stdio.h>

int main (void) {
  int ced,x,
      n100,
      n050,
      n020,
      n010,
      n005,
      n002,
      n001;
    scanf("%d", &ced);
  n100 = (ced / 100);
  x = n100 * 100;
  n050 = (ced - x) / 50;
  x += n050 * 50;
  n020 = (ced - x) / 20;
  x += n020 * 20;
  n010 = (ced - x) / 10;
  x += n010 * 10;
  n005 = (ced - x) / 5;
  x += n005 * 5;
  n002 = (ced - x) / 2;
  x += n002 * 2;
  n001 = (ced - x) / 1;
   printf("%d\n", ced);
   printf("%d nota(s) de R$ 100,00\n", n100);
   printf("%d nota(s) de R$ 50,00\n", n050);
   printf("%d nota(s) de R$ 20,00\n", n020);
   printf("%d nota(s) de R$ 10,00\n", n010);
   printf("%d nota(s) de R$ 5,00\n", n005);
   printf("%d nota(s) de R$ 2,00\n", n002);
   printf("%d nota(s) de R$ 1,00\n", n001);
 return 0;
}
