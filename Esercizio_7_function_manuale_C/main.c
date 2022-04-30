#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "header.h"
/*Scrivere una funzione che calcoli la seguente formula
(x3 + 3x + 5)/(8x + 1)
Scrivere successivamente un programma che calcoli i valori della funzione per x = 0, 2, 4,6,...,20.*/


int main()
{

    int x;
    int risultato;

    printf("inserisci un numero: \n");
    scanf("%d", &x);

    if(x%2==0 && x>0 && x<=20)
    risultato = equazione(x);
    else
        printf("il numero inserito deve essere pari e compreso tra 0 e 20\n\n");


    printf("il risultato dell'equazione e': %d", risultato);


    return 0;
}
