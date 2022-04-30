#include <stdio.h>
#include <stdlib.h>
#include "circon.h"

void main()

{
    float raggio, circonferenza;

    printf("inserisci il raggio: \n");
    scanf("%f", &raggio);

    circonferenza= circon(raggio);

    printf("la circonferenza e' : %f", circonferenza);
}
