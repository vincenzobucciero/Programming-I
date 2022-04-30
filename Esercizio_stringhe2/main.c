#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
  int i;
  char testo[100];
  char testo2[100] ;

  printf("Inserisci testo:  \n");
   gets(testo);

   sostituire_carattere(testo,testo2);

   printf("Nuovo testo:  \n");


    printf(" %s", testo2[i]);


}
