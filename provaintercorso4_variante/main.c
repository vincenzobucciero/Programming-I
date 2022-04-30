#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   char testo[1000];

   printf("Inserisci testo:  \n");
   gets(testo);

   printf("Il numero di consonanti massimo e' %d", conta_cons(testo,n));
}
