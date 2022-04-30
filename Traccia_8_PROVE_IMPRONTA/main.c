#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#include <string.h>

/*Sviluppare una function C che, data come parametro di input una stringa che
  rappresenta un testo in italiano, determina e restituisce come parametro di output il
  numero di parole di tre lettere contenute nel testo. Nel testo le parole sono separate
  da un unico spazio*/


int main()
{
    char testo[100];


    printf("Inserisci testo:  ");
    gets(testo);


    printf("Le parole con 3 lettere sono: %d", conta_a_fess_e_sort(testo));
    return 0;
}
