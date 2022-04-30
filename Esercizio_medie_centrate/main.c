#include <stdio.h>

#include "header.h"

int main()
{
    float a[100];
    float b[100];
    int i, n;
    printf("Inserisci la dimensione dell'array A:  ");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    media_centrata(a,n,b);

    for(i=0;i<n;i++){
        printf("Il %d valore dell'array B e': %f\n", i, b[i]);
    }

}


