#include <stdio.h>
#include <stdlib.h>
#include "header.h"



int main()
{

    double a[100];
    int n;

    printf("Inserisci il numero di elementi presenti nell'array (<=100): \n");
    scanf("%d", &n);


    legge_da_tastiera(a,n);

    printf("la somma degli elementi presenti nell'array e': %lf\n", somma_arrayI(a,n));

    return 0;



}

