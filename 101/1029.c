    /* Fibonacci */
// Sequencia Fibonacci por Recursao

#include<stdio.h>

int Cham(int,int*);
int Fib (int);

int main (void) {
  int n,call,k,i,
      fibonacci;

   scanf("%d", &k);
    for (i = 0; i < k; i++) {
     call = 0;
   scanf ("%d", &n);
     fibonacci = Cham(n,&call);
   printf("fib(%d) = %d calls = %d\n",n,call-1,fibonacci);
    }
    call = 0;
  return 0;
}

int Cham (int n, int*call) {
    *call+=1;
  if (n == 0 || n == 1) {
    return n;  }
  else
    return Cham(n-1,call) + Cham(n-2,call);
}

int Fib (int n) {
  if (n == 0 || n == 1)
    return n;
  else
    return Fib(n-1) + Fib(n-2);
}
