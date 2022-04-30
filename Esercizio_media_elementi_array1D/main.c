#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
   double a[100];
   int n;
   double media;

   printf("Inserisci la dimensione dell'array\n");
   scanf("%d", &n);

   legge_da_tastiera(a,n);

   printf("La media e' %lf", media_array1D(a,n));



}
