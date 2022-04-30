#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parola_max(char *testo);

int main()
{
   char testo[1000];

   printf("Inserisci testo:  \n");

   gets(testo);

   printf("La parola piu' lunga e' costituita da %d lettere", parola_max(testo));
}








int parola_max(char *testo)
{
    char *token = strtok(testo, " ");
    int i, massimo;

    while (token!='\0'){
        if(strlen(token) > massimo){
            massimo = strlen(token);
           printf("Parola : %s\n", token);
        }
        token = strtok('\0', " ");
    }
   return massimo;
}
