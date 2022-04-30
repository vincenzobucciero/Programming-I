#include <stdio.h>
#include <stdlib.h>

#include "header.h"


int main()
{
    int n=2,m=3;
    int matrice[2][3]={{95,86,14},
                        {56,98,48}};

    printf("L'elemento massimo della matrice e': %d", massimo_2D(matrice,n,m));

}
