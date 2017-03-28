	/* SeqLog */
#include <stdio.h>

int main (void) {
  int n,i;
   i = 1;
  scanf("%d", &n);
 while (n--) {
   printf("%d %d %d\n",i,(i*i),(i*i*i));
   printf("%d %d %d\n",i,(i*i)+1,(i*i*i)+1);
  i++;
 }
 return 0;	
}
