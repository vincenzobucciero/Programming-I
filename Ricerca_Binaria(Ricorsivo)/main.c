#include <stdio.h>
#include <stdlib.h>

int main()
{
   int chiave, elenco[100];
   int i, n;
   int risultato;

   printf("Inserisci il size dell'array ORDINATO:  ");
   scanf(" %d", &n);

   legge_da_tastiera(elenco,n);

   printf("L'array ORDINATO e' composto dagli elementi:  \n");
   for(i=0;i<n;i++){
    printf(" %d", elenco[i]);
   }
    printf("\n");

   printf("Inserisci la chiave da ricercare:  ");
   scanf(" %d", &chiave);

   risultato = ric_bin_ricTF(chiave, elenco, n);
   printf("\n");

   if ( risultato )
    printf("La chiave e' presente nell'array : %d", risultato);
    else
        printf("La chiave non e' presente nell' array : %d", risultato);

    printf("\n");
    printf("\n");
}
