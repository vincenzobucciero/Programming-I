#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=4, m=4;
    int matrice[4][4]={{36,21,44,11},
                       {18,49,27,13},
                       {22,25,10,16},
                       {52,35,59,22}};


    printf("l'elemento massimo della diagonale principale e': %d", max_diagonale2D(matrice,n,m));



}
