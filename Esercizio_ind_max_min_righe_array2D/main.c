#include <stdio.h>
#include <stdlib.h>

int main()
{
   int b[100];

   int i,j,n,m;
   int matrice[100][100];
   int massimo[100],minimo[100],i_max[100],j_max[100],i_min[100],j_min[100];


    printf("Da quante righe e' composta la matrice?:  ");
    scanf(" %d", &n);
    printf("Da quante colonne e' composta la matrice?:  ");
    scanf(" %d", &m);
    legge_da_tast(matrice,n,m);

    printf("\n");
    printf("La matrice e':  ");
    printf("\n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++)
            printf(" %5d", matrice[i][j]);
    }
    printf("\n");
    roba_ammiscata_righe(matrice,n,m,b,massimo,minimo,i_max,j_max,i_min,j_min);

    for(i=0;i<n;i++){
        printf("Alla riga %d il massimo e' %d (%d,%d) \n", i, massimo[i],i_max[i],j_max[i]);

    }
    for(i=0;i<n;i++){
        printf("Alla riga %d il minimo e' %d (%d,%d) \n", i, minimo[i],i_min[i],j_min[i]);

}
}
