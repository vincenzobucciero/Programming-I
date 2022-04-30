#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, nc, seed;

        printf("RAND_MAX = %d \n", RAND_MAX);
        printf("Inserisci un seed:  ");
        scanf(" %d", &seed);
        srand(seed);

            for(i=0;i<=30;i++){
                nc = rand();
                printf(" %d-esimo numero casuale = %d \n", i, nc);
            }
}
