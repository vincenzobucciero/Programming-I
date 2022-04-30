#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
    float b[100];
    float a[100];
    int i, n;


    printf("Da quanti elementi e' composto l'array A?:  \n");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    media_avanti(a,n,b);

    for(i=0;i<n;i++){

    printf("%d valore dell'array B, e' %f\n", i, b[i]);
    }

}
