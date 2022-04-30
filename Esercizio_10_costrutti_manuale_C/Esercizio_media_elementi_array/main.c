#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int a[150];
    int i, num_elementi;
    float somma;

    printf("Inserisci il numero dei valori da considerare(<=150): \n");
    scanf("%d", &num_elementi);

    for(i=0;i<num_elementi;i++){
    somma=media_arrayD(a,num_elementi);
    }

    printf("la media degli elementi e': %f", somma);

    return 0;


}
