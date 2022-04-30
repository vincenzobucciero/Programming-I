#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*SIMULAZIONE DARE 3 CARTE A CASA DA UN MAZZETTO DI CARTE NAPOLETANE*/

typedef enum {coppe, bastoni, spade, denari} Semi_Nap;

struct carta_nap {
        int valore;
        Semi_Nap seme;
        };
typedef struct carta_nap Carta_Nap;

void main()
{
   int i, nc, lungh_mazzetto;
    srand(time(NULL));
    Carta_Nap mazzetto[] = {{1, coppe}, {1, bastoni}, {1, spade}, {1, denari}, {2, coppe}, {2, bastoni}, {2, spade}, {2, denari}};
    lungh_mazzetto = 8;

        for(i=0; i<=3; i++){
            nc = rand()%lungh_mazzetto;
                printf("carta num. %d = %d di %d\n", i, mazzetto[nc].valore, mazzetto[nc].seme);
        }
}
