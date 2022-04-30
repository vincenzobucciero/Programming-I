#include <stdio.h>
#include <stdlib.h>

#include "header.h"

/*Sviluppare una function C che, dati come parametri di input un array 2D di int, il numero
delle righe, il numero delle colonne e un int k, determina e restituisce come parametro di
output la somma degli elementi della k-sima riga.*/


int main()
{
   int  a[100][100];
   int i,j,n,m,k;
   int somma;

   printf("Da quante righe e' composta la matrice?:");
   scanf(" %d", &n);
   printf("Da quante colonne e' composta la matrice?:");
   scanf(" %d", &m);

   legge_da_tast(a,n,m);

   printf("\n La matrice che hai inserito e': \n");
   for(i=0;i<n;i++){
    printf("\n");
    for(j=0;j<m;j++)
        printf(" %4d", a[i][j]);
   }

   printf("\n");
   printf("Inserisci la riga di cui vuoi ottenere la somma:  ");
   scanf(" %d", &k);

   somma = k_somma(a,n,m,&k);

   printf("la somma della riga %d e' %d", k,somma);




}
