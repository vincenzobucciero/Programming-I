#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int n=4,m=4;
    int matrice[4][4]={{36,21,44,101},
                       {18,49,94,13},
                       {22,25,10,48},
                       {99,35,59,69}};
    printf("La matrice e':\n\n");
    visualizza_a2D(matrice,n,m);
    printf("\n\n");

    printf("L'elemento massimo del triangolo superiore di questa matrice e' %d", max_trisup2D(matrice,n,m));
}
