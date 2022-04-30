#include <stdio.h>
#include <stdlib.h>

/*Scrivere un programma per simulare l’inserimento di un PIN per il telefonino. Nella
prima fase viene chiesto all’utente di inserire un codice di lunghezza 5. Nella seconda fase
l’utente inserisce il codice e ha al massimo 3 tentativi per indovinarlo.*/


int main()
{
   int i,pin_corretto=12345, pin_da_ins;

   printf("Inserisci il pin a 5 cifre:\n");


   while(pin_da_ins != pin_corretto && i<3){

    scanf(" %d", &pin_da_ins);
    i++;


    if(pin_da_ins==pin_corretto)
        printf("Il codice ktm e' corretto, bravo!\n");
    else
        printf("il codice inserito e' sbagliato!\n");
   }


   if(pin_da_ins==pin_corretto)
    printf("Il codice ktm e' corretto, bravo!\n");
   else if
    (printf("tentativi terminati"));

}
