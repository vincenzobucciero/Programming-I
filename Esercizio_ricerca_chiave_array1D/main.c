#include <stdio.h>
#include <stdlib.h>

#include "header.h"
int main()
{
    char a[100];
    int i,n, esito_confronto;
    char chiave;
    esito_confronto=0;

    printf("Da quanti elementi e' costituito l'array? (<=100):\n");
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    printf("Qual e' la chiave vuoi trovare nell'array?\n");
    scanf(" %c", &chiave);

    esito_confronto=appartiene_array1D(chiave,a,n);

    if(esito_confronto)
        printf("LA CHIAVE APPARTIENE ALL'ARRAY");
    else
        printf("LA CHIAVE NON APPARTIENE ALL'ARRAY");
}
