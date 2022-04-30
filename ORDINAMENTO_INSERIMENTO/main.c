#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    char a[100];
    int i,n;

    printf("Da quanti elementi e' composto l'array:\n");
    scanf("%d", &n);

    legge_da_tast(a,n);

    printf("L'array che hai inserito e': \n");
    for(i=0;i<n;i++){
        printf(" %c \n", a[i]);
    }


    ord_inser(a,n);

    printf("\n L'array ordinato e' :\n");

    for(i=0;i<n;i++){
        printf(" %c \n", a[i]);
    }


    return 0;
}
