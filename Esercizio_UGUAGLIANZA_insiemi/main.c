#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    float a[100];
    float b[100];

    int i,n,uguale;


    printf("Inserisci il size degli array:  \n");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("inserisci un elemento del PRIMO array:\n");
        scanf(" %f", &a[i]);
        }


    for(i=0;i<n;i++){
        printf("inserisci un elemento del SECONDO array:\n");
        scanf("%f", &b[i]);
    }

    uguale = uguaglianza_insiemi(a,b,n);

    printf("%d", uguale);

}
