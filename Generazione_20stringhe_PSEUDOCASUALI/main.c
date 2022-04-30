#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*GENERAZIONE DI 20 STRINGHE PSEUDOCASUALI DI 5 CARATTERI DELL'ALFABETO A-M*/

void main()
{
    int i, j, nc, lungh_alf;
    char alfabeto[] = {'a','b','c','d','e','f','g','h','i','l','m'};
    char stringa_5_cas [] = "12345";

        lungh_alf = 11;

        srand(time(NULL));

            for(i=1; i<=20; i++){
                for(j=0; j<5;j++){
                    nc = rand()%lungh_alf;
                    stringa_5_cas[j] = alfabeto[nc];
                }
                    printf(" %d-esima 5stringa = %s \n", i, stringa_5_cas);
            }
}
