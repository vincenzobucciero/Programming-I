#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    float a[100];
    int n;
    printf("Da quanti elementi e' composto l'array:  \n");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    printf("La varianza dell'array e': %f", varianza_array(a,n));
}
