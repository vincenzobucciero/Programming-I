#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    double a[100];
    int n;

    printf("Inserisci la dimensione dell'array:  \n");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    printf("Il minimo tra gli elementi e': %lf  \n", min_array1D(a,n));


}
