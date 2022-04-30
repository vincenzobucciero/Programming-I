#include <stdio.h>
#include <stdlib.h>

int main()
{
   char stringa[1000];
   int m=100, num_parole;

   printf("Inserisci il testo:\n");

   gets(stringa);

   conta_parole(stringa,m,&num_parole);

   printf("il numero di parole e' %d\n", num_parole);

}
