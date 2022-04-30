#include "header.h"

double somma_arrayI(double a[], int n)

{
    int i;
    double somma=0.0;

    for(i=0;i<n;i++){
        somma = somma+a[i];
    }
    return somma;
}


void legge_da_tastiera(double a[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("inserisci il %d-esimo numero\n", i);
        scanf("%lf", &a[i]);
    }
}




