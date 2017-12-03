		/* Josephus Encadeado */
#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
	  int num;
 struct celula *prox;
} cel;

int  josephus (cel *,int);
cel *makeJose (cel *,int);
void print    (cel *);

int main (void) {
  cel *h;
  int n,i,r,k;
    i = 1;
   scanf("%d", &r);
 while (r--) {
    h = (cel *)malloc(sizeof(cel));
    h->prox = NULL;
 	 scanf("%d", &n);
 	 scanf("%d", &k);
 	printf("Case %d: %d\n",i,josephus(makeJose(h,n),k));
  ++i;
 }
 return 0;
}

cel *makeJose (cel *h,int n) {
  cel *q;
  cel *p;
   p = h;
 while (n--) {
 	 q = (cel *)malloc(sizeof(cel));
 	 q->num = n +1;
 	 q->prox = h->prox;
   h->prox = q;
 } p = h;
 while (p->prox != NULL)
   p = p->prox;
  p->prox = h->prox;
 return p;
}

int josephus (cel *p,int k) {
	cel *q;
	int  x;
 while (p->prox != p) {
   x = k;
   q = p;
  while (x--)
    q = q->prox;
  while (p->prox != q)
    p = p->prox;
   p->prox = q->prox;
  free(q);
 }
 return p->num;
}

void print (cel *p) {
  int  i;
 for (i = 0; i < 2; ++i) {
 	while (p->num < p->prox->num)
 	 printf("%d ", p->num);
 	printf("\n");
 }
 return;
}
