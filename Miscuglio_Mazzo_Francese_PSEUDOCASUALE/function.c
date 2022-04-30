
#include "header.h"

void mischia_mazzo(Carta_Fr *mazzo, int n)
{
    int k, p, q;

        for(k=1; k<8*n/2; k++){
            p = rand()%n;
            q = rand()%n;
            scambiare_carta(&mazzo[p], &mazzo[q]);
        }
}

void scambiare_carta(Carta_Fr *carta1, Carta_Fr *carta2)
{
    int k, p, q;

        Carta_Fr temp;
        temp = *carta1;
        *carta1 = *carta2;
        *carta2 = temp;
}
