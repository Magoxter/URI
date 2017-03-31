  /* LEDs */
#include <stdio.h>

int main (void) {
  int  n,i,k;
  char num[100];
  long long led;
    scanf("%d", &n);
 while (n--) {
   scanf("%s", &num);
    i = led = 0;
    k = i+1;
  while (k) {
    if(num[i] == '\0') k = 0;
    if(num[i] == '1') led += 2;
    if(num[i] == '2') led += 5;
    if(num[i] == '3') led += 5;
    if(num[i] == '4') led += 4;
    if(num[i] == '5') led += 5;
    if(num[i] == '6') led += 6;
    if(num[i] == '7') led += 3;
    if(num[i] == '8') led += 7;
    if(num[i] == '9') led += 6;
    if(num[i] == '0') led += 6;
   i++;
  } printf("%lld leds\n", led);
 }
 return 0;
}
