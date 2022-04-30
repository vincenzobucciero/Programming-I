#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int n=3,m=7;


    int matrice[3][7]={{27,26,59,86,84,32,15},
                        {45,47,16,34,94,41,43},
                        {16,24,35,34,29,91,75}};

    printf("L'elemento minimo nella matrice e':  %d", minimo_2D(matrice,n,m));


}
