#include <stdio.h>
#include <stdlib.h>


#include "header.h"


int main()
{
    int a[100], b[100];
    int n;

    printf("quant'e' il size degli array:  ");
    scanf(" %d", &n);
    printf("inserisci gli elementi del primo array:  \n");
    leggi_da_tast(a,n);

    printf("Inserisci gli elementi del secondo array:  \n");
    leggi_da_tast(b,n);


    if(uguaglianza_array1d(a,b,n))
        printf("I due array SONO uguali");
    else
        printf("I due array NON SONO uguali");
}
