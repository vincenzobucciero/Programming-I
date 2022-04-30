#include <stdio.h>
#include <stdlib.h>

/*Scrivere una funzione che prende in input una matrice e restituisca in output la matrice
trasposta (ovvero la matrice in cui la j-esima colonna `e la j-esima riga della matrice data,
per j = 1, 2, . . . , n).*/



int main()
{
    int a[100][100], n, m;
    int b[100][100];
    int i, j;

    printf("Da quante righe e' formata la matrice:  ");
    scanf(" %d", &n);
    printf("Da quante colonne e' formata la matrice:  ");
    scanf(" %d", &m);

    legge_da_tast(a, n ,m);

    matrice_trasposta(a,b,n,m);

    printf("\n Matrice normale: \n");

        for (i=0;i<n;i++) {
                printf("\n");
            for(j=0;j<m;j++)
            printf(" %d ", a[i][j]);
    }

    printf(" \n Matrice trasposta \n");
        for (j=0;j<m;j++) {
                printf("\n");
            for (i=0;i<n;i++)
            printf(" %d ", b[j][i]);
    }

}
