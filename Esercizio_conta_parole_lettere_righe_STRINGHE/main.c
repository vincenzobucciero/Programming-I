#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "header.h"

int main()
{
    char testo[100];
    int i=0;
    int numero_par,numero_lett,numero_righe;



    printf("Inserisci testo:\n");
    gets(testo);



    conta_tutto(testo,&numero_par,&numero_lett,&numero_righe);

    printf("numero di parole: %d\n numero di caratteri %d\n numero di righe: %d\n ", numero_par, numero_lett, numero_righe);

}
