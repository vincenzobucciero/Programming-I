#include <stdio.h>
#include <stdlib.h>

/*Scrivere un programma in cui l置tente deve indovinare, in due fasi, con un massimo di 10
tentativi, un codice segreto. Il codice segreto `e un intero definito dal programmatore con
valore tra 0 e 100. Se l置tente indovina il codice nella prima fase, allora nella seconda fase
l置tente deve indovinare un secondo codice segreto composto da una vocale (controllare
che l置tente non inserisca una consonante).*/

int main()
{
    int i,j,codice, codice_corretto=50, n=10;
    char lettera, vocale='a';

    printf("Inserisci il codice segreto (Suggerimento: e' un numero compreso tra 0 e 100):\n");

    for(i=0;i<n;i++) {

        scanf("%d",&codice);
        if(codice!=codice_corretto)
           printf("Il codice e' sbagliato, ritenta! \n");
        else
        {

            printf("IL CODICE INSERITO E' CORRETTO, BRAVO!!\n");
            printf("ADESSO INSERISCI ANCHE IL CODICE VOCALE\n");


            for(j=0;j<10-i;j++){

            scanf(" %c", &lettera);
            if(lettera==vocale){
                printf("COMPLIMENTI ANCHE IL CODICE VOCALE E' CORRETTO, BRAVO!! CLICCA UN PULSANTE PER USCIRE.\n\n");
                break;
            }
            else if (lettera!=vocale)
                printf("il codice vocale non e' corretto,ritenta!\n");
            }

            break;
        }
    }



    if(codice==codice_corretto && lettera==vocale)
        printf("COMPLIMENTI HAI INDOVINATO ENTRAMBI I CODICI!!\n");
    else if
        (printf("Tentativi terminati\n"));

    return 0;


}




