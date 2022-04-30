#include <stdio.h>
#include <stdlib.h>

#include "header.h"

/*Sviluppare una function C che, dati come parametri di input un array 2D di float, il
numero delle righe, il numero delle colonne, un int p e un int q (con int p minore di int
q), determina e restituisce come parametro di output la somma degli elementi che hanno
gli indici di riga e di colonna compresi tra int p e int q.*/

int main()
{
    float a[100][100];
    float somma;
    int i,j, n, m;

    printf("Da quante righe e' composta la matrice:  ");
    scanf(" %d", &n);
    printf("Da quante colonne e' composta la matrice:  ");
    scanf(" %d", &m);
    legge_da_tast(a,n,m);


    somma=somma_qualcosa(a,n,m,somma);

    printf("La somma e': %f", somma);





}
