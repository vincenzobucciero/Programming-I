#include <stdio.h>
#include <stdlib.h>

#include "header.h"

/* Scrivere una funzione che prende in input due array di dimensioni n ed m, rispettivamente,
   e restituisce un array composto dalla concatenazione dei due array in modo tale che nelle
   posizioni dispari sono contenuti i valori del primo array e nelle posizioni pari quelle del
   secondo */

void main()
{
    int i,n_a=4,n_b=4,n_c;
    n_c = n_a+n_b;
    int a[]={4,3,59,99};
    int b[]={91,24,7,57};
    int c[n_c];

    concatenazione(a,n_a,b,n_b,c);

    for(i=0;i<n_c;i++){
        printf("L'elemento %d dell'array C e' %d\n", i, c[i]);
    }

}
