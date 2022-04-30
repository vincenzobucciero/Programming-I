#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#include "header.h"

/*
  Scrivere una procedura che dati due valori x e y calcoli i valori delle seguenti funzioni
  matematiche:
  1. (x3 + 3x + 5)/(8x + 1)
  2. (y4)/(1 + y)
  Scrivere successivamente un programma che calcoli e visualizzi il risultato delle funzioni
  precedenti nei punti (0, 0), (1, 1), (3, 3), (5, 5), . . ., (9, 9).
*/

void equazioni(float, float, float *, float *);
void main()
{
   float i=0, eq1, eq2,x,y;

   printf("Inserisci il valore della x per risolvere l'equazione (x3 + 3x + 5)/(8x + 1):  ");
   scanf(" %f", &x);

   printf("Inserisci il valore della y per risolvere l'equazione (y4)/(1 + y):  ");
   scanf(" %f", &y);

   equazioni(x,y,&eq1,&eq2);
   printf("\n");

   printf("il valore dell'equazione (x3 + 3x + 5)/(8x + 1) e' %f\n\n", eq1);

   printf("il valore dell'equazione (y4)/(1 + y) e' %f\n\n", eq2);

   for(i=1; i<10; i=i+2){
    equazioni(i,i,&eq1,&eq2);
    printf("Per i punti %f %f i valori sono %f %f\n", i,i,eq1,eq2);
   }



return 0;

}
