#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[100];
    int n, massimo, minimo, i_max, i_min;

    printf("Da quanti elementi e' composto l'array?:  \n");
    scanf("%d", &n);


    legge_da_tastiera(a,n);

    ind_max_min_array1D(a,n,&massimo,&minimo,&i_max,&i_min);

    printf("Il massimo e il minimo tra questi elementi con i rispettivi indici sono: %d (indice %d) e %d (indice %d)", massimo, i_max, minimo, i_min);



}
