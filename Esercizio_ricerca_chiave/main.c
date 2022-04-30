#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n, esito_ricerca;
    char chiave, lettera;

    printf("Inserisci la chiave da trovare:  \n");
    scanf("%c", &chiave);

    printf("Quante lettere si voglione inserire:  \n\n");
    scanf(" %d", &n);
    esito_ricerca = 0;

    do {
             printf("Inserisci una lettera:  \n");
             scanf(" %c", &lettera);
            i++;
           if(chiave == lettera){
            esito_ricerca = 1;
         }
       }
    while (!esito_ricerca && i<n);

        printf("%d", esito_ricerca);
}
