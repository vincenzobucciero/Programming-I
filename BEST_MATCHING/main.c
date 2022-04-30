#include <stdio.h>
#include <stdlib.h>

int main()
{
    int indice_bm, i;
    char mio_testo[100], mia_chiave[50];

    printf("Inserisci la chiave:\n");
    gets(mia_chiave);

    printf("Inserisci il testo:\n");
    gets(mio_testo);

    indice_bm = matching_migliore(mia_chiave, mio_testo);

    puts("Risultato del Best Matching:\n");
    printf("Inizio sottostringa: %d\n sottostringa di best matchng: \n", indice_bm );

    for(i=0;i<strlen(mia_chiave); i++)
        putchar(mio_testo[indice_bm+i]);
}
