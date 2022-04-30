#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


int main()
{
    char testo[100];
    int n_lettere,n_vocali,n_cons;


    printf("Inserisci testo: \n");

    gets(testo);

    conta_lettere(testo, &n_lettere, &n_vocali, &n_cons);

    printf("Il numero di lettere e' %d \n le vocali sono %d \n le consonanti sono %d", n_lettere, n_vocali, n_cons);


}
