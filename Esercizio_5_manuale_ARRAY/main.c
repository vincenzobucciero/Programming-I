#include <stdio.h>
#include <stdlib.h>

#include "header.h"

/*Scrivere una funzione che prende in input due matrici e restituisce come output una matrice
che corrisponde alla somma delle due matrici. Usare la notazione a puntatori.*/

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int i,j,n,m, n2, m2;
    printf("Quante sono le righe della prima matrice:  ");
    scanf(" %d", &n);
    printf("Quante sono le colonne della prima matrice:  ");
    scanf(" %d", &m);
    legge_da_tast(a,n,m);

    printf("Quante sono le righe della seconda matrice:  ");
    scanf(" %d", &n2);
    printf("Quante sono le colonne della seconda matrice:  ");
    scanf(" %d", &m2);
    legge_da_tast(b,n2,m2);

    somma_matrici(&a,&b,n,m,&c);

    printf("\n Matrice 1: \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++)
        printf(" %4d", a[i][j]);
    }

    printf("\n Matrice 2: \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++)
        printf(" %4d", b[i][j]);
    }

    printf("\n Matrice Somma: \n");
    for(i=0;i<n;i++){
        printf("\n");
        for(j=0;j<m;j++)
        printf(" %4d", c[i][j]);
    }



}
