#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int massimo;
    int minimo;
    double a[100];
    int n;

    printf("Da quanti elementi e' composto l'array?:  \n");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

   max_min_array1D(a,n,&massimo, &minimo);

   printf("Il massimo e il minimo degli elementi sono %d e %d", massimo, minimo);


}
