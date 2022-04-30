#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int n=2,m=3;
    float matrice[2][3]={{12.3,16.5,3},
                            {5.2,2.26,4.15}};

    printf("la media degli elementi e' %f", media_2D(matrice,n,m));

}
