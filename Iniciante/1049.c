  /* Animal */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

typedef char string[MAX];

int main (void) {
  char filo[MAX],
  	   ordem[MAX],
  	   classe[MAX];
string vert,herb,
  	   carn,ave,
  	   inv,onv,
  	   ins,mam,
  	   anl,hem;
  strcpy(vert,"vertebrado");
  strcpy(inv,"invertebrado");
  strcpy(ave,"ave");
  strcpy(mam,"mamifero");
  strcpy(ins,"inseto");
  strcpy(anl,"anelideo");
  strcpy(carn,"carnivoro");
  strcpy(onv,"onivoro");
  strcpy(herb,"herbivoro");
  strcpy(hem,"hematofago");
  	scanf("%s", filo);
  	scanf("%s", classe);
  	scanf("%s", ordem);
 if (strcmp(filo,vert) == 0) {
   if (strcmp(classe,ave) == 0) {
 	 if (strcmp(ordem,carn) == 0)
 	 	printf("aguia\n");
 	 else if (strcmp(ordem,onv) == 0)
 	 	printf("pomba\n");
   } else if (strcmp(classe,mam) == 0) {
 	   if (strcmp(ordem,onv) == 0)
 		  printf("homem\n");
 	   else if (strcmp(ordem,herb) == 0)
 		  printf("vaca\n");
 	}
 } else if (strcmp(filo,inv) == 0) {
 	 if (strcmp(classe,ins) == 0) {
 	   if (strcmp(ordem,hem) == 0)
 	   	  printf("pulga\n");
 	   else if (strcmp(ordem,herb) == 0)
 	   	  printf("lagarta\n");
 	 } else if (strcmp(classe,anl) == 0) {
 	 	 if (strcmp(ordem,hem) == 0)
 	 	 	printf("sanguessuga\n");
 	 	 else if (strcmp(ordem,onv) == 0)
 	 	 	printf("minhoca\n");
 	 }
 }
 return 0;
}
