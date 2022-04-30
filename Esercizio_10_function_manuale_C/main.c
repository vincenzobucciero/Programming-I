#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/*Scrivere un programma che simuli un salvadanaio. L’utente puo' inserire e prelevare soldi.
  Visualizzare salvadanaio vuoto se non ci sono soldi. Il numero di operazioni di inserimento
  e prelievo sono decise dall’utente. L’inserimento e il prelievo devono avvenire con la
  chiamata a due procedure differenti.*/


void main()
{
    int i, num_op, saldo_tot;
    char risposta;

    printf("BENVENUTO/A NEL TUO SALVADANAIO!\n\n");
    printf("Inserisci il tuo saldo:  ");
    scanf("%d", &saldo_tot);

    if(saldo_tot==0){
        printf("Il salvadanaio e' vuoto, se vuoi, puoi prima depositare qualcosa\n\n");
        deposito(&saldo_tot);
        printf("Adesso puoi fare qualche operazione!\n\n");
    }
    printf("Inserisci il numero di operazioni che vuoi eseguire:  ");
    scanf("%d", &num_op);

    for(i=0; i<num_op; i++) {

    printf("INSERISCI 'P' PER PRELEVARE: \n\n");
    printf("INSERISCI 'D' PER DEPOSITARE: \n\n");
    printf("INSERISCI 'E' PER USCIRE DAL SALVADANAIO: \n\n");

    scanf("%c", &risposta);
    risposta = getchar();

    switch(risposta){

    case 'P': prelievo(&saldo_tot);
    break;
    case 'D': deposito(&saldo_tot);
    break;
    case 'E': printf("Sei uscito dal salvadanaio, arrivederci!\n");
    break;

    }


}
}
