#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main()
{
    int i, n;
    float a[100];
    printf("Inserisci da quanti elementi e' composto l'array A:  \n");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    medie_avanti_inplace(a,n);

    for(i=0;i<n;i++){
        printf("%d valore dell'array A e' %f\n", i, a[i]);
    }
}
