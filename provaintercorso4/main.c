#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{

    int i, n, max_vocale;
    char testo[1000];

    printf("Inserisci testo:  \n");

    gets(testo);

    printf("Il numero di vocali totali e':  %d", esercizio4(testo, n));
    return 0;
}
