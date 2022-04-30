#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrice[100][100];
    int b[100];
    int i,j,n,m;

    printf("Da quante righe e' composta la matrice?:  ");
    scanf(" %d", &n);
    printf("Da quante colonne e' composta la matrice?:  ");
    scanf(" %d", &m);
    legge_da_tast(matrice,n,m);

    printf("La matrice e':");
    printf("\n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++)
            printf(" %5d", matrice[i][j]);
    }
    printf("\n");
    media_colonne(matrice,n,m,b);
    for(j=0;j<m;j++){
        printf("La media delle colonna %d e' %d\n", j, b[j]);
    }
}
