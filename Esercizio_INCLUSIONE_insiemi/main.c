#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
   float a[100];
   float b[100];
   int n_a,n_b,n_c;
   int i;
   n_c = n_a+n_b;
   float c[n_c];

   printf("da quanti elementi e' formato il primo insieme:\n");
   scanf("%d", &n_a);
   legge_da_tast(a,n_a);

   printf("da quanti elementi e' composto il secondo insieme:\n");
   scanf("%d", &n_b);
   legge_da_tast(b,n_b);

   printf("A incluso in B:  %d", inclusione(a,n_a,b,n_b));
}
