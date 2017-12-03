		/* Cartas */
#include "stdio.h"
#include "stdlib.h"

typedef struct celula {
	  int num;
 struct celula *prox;
} cel;

void insert (cel *,int);
int  cards  (cel *,int);
void print  (cel *);

int main (void) {
  int n,i;
  cel *h;
  cel *p;
   scanf("%d", &n);
 while (n) {
    i = 1;
    h = (cel *)malloc(sizeof(cel));
    h->prox = NULL;
  while (n--) {
    insert(h,i);
   ++i;
  } p = h;
  while (p->prox != NULL)
    p = p->prox;
   p->prox = h->prox;
  printf("Discarded cards:");
   n = cards(p,i-1);
  printf("Remaining card: ");
  printf("%d\n", n);
  scanf("%d", &n);
 }
 return 0;
}

void insert (cel *p,int x) {
  cel *q;
   q = (cel *)malloc(sizeof(cel));
   q->num = x;
   q->prox = p->prox;
   p->prox = q;
 return;
}

int cards (cel *p,int n) {
  cel *q;
   q = p;
 while (q->prox != p)
   q = q->prox;
 while (q->prox != q) {
   q->prox = p->prox;
  printf(" %d", p->num);
  free(p);
   p = q;
  while (p->prox != q)
    p = p->prox;
  while (q->prox != p)
    q = q->prox;
  if (q->prox != q)
   printf(",");
 } printf("\n");
 return q->num;
}

void print (cel *p) {
  int x;
   x = p->num;
   p = p->prox;
 while (p->num != x) {
   printf("%d ", p->num);
    p = p->prox;
 } printf("%d\n", x);
 return;
}
