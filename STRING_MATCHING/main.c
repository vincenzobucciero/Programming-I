#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int i, n_occorrenze;
    char mio_testo[100], mia_chiave[50];

    printf("Inserisci la chiave:\n");
    gets(mia_chiave);

    printf("Inserisci il testo:\n");
    gets(mio_testo);

    n_occorrenze=string_matching(mia_chiave,mio_testo);

    printf("il n di occorrenze e' %d", n_occorrenze);

}
