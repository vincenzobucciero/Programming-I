#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    float a[100];

    int i, n;
    printf("Inserisci la dimensione dell'array A:  ");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    media_centrata(a,n);

    for(i=0;i<n;i++){
        printf("Il %d valore dell'array A e': %f\n", i, a[i]);
    }

}



