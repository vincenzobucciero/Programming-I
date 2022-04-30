#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int elenco[5] = { 2, 3, 45, 55, 99};
    int i, n = 5;
    int chiave;
    int risultato = 0;

    printf("L'array e':\n");
    for (i=0;i<n;i++){
        printf(" %d", elenco[i]);
    }
    printf("\n");

    printf("Inserisci la chiave da ricercare:  ");
    scanf(" %d", &chiave);

   risultato = ric_bin(chiave,elenco,n);

   if (risultato != -1)
    printf("La chiave ricercata e' presente all' indice %d", risultato);
    else
        printf( " La chiave ricercata non e' presente nell'array");


}
