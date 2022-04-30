#include <stdio.h>
#include <stdlib.h>

#include "header.h"

//Scrivere un programma che legge una sequenza di n interi e li memorizza in una array a, ne calcola il quadrato di ciascuno e lo memorizza in una array b
// ne calcola il cubo, memorizzandolo in una array c, infine visualizza il contenuto di b e di c.

/*int main()
{
    int a[100],c[100], b[100];
    int i;
    int n;

    printf("Da quanti elementi e' composto l'array?:  ");
    scanf(" %d", &n);
    legge_da_tast(a,n);

    printf("L'array che hai inserito e':  ");
    visualizza(a,n);


    printf("\n");

    quadrato(a,n,b);
    printf("\n");
    cubo(a,n,c);

    printf("L'array B quadratico e':  ");
    visualizza(b,n);

    printf("\n\n");

    printf("L'array C cubico e':  ");
    visualizza(c,n);

    printf("\n\n");

}
*/


//Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
//interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall’utente, ma il
//vettore può contenere al massimo 30 numeri. Terminato l’inserimento della sequenza di
//numeri, il programma deve verificare se gli elementi del vettore sono tutti uguali tra loro.


/*
int main()
{
    int i,n;
    int a[100];

    printf("Da quanti elementi e' composto l'array  (<=30) :  ");
    scanf(" %d", &n);
    legge_da_tast(a,n);


    if(elementi_uguali(a,n)){
        printf("gli elementi sono uguali");}
    else
        printf("gli elementi non sono uguali");
}
*/


//Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
//interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall’utente, ma il
//vettore può contenere al massimo 30 numeri. Terminato l’inserimento della sequenza di
//numeri, il programma deve verificare se il vettore contiene una sequenza di numeri ordinata in modo strettamente crescente.

/*
int main()
{
   int a[30];
   int i, n;

   printf("Inserisci il size dell'array (<=30):  ");
   scanf(" %d", &n);
   legge_da_tast(a,n);

   if(sequenza_ordinata(a,n)){
        printf("nell'array NON ci sono elementi ordinati in modo strettamente crescente");}
    else
        printf("nell'array ci sono elementi ordinati in modo strettamente crescente");
}
*/




//Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e li memorizza in un vettore.
//Il numero N viene inserito dall’utente ed e minore di 20. Il programma deve generare un secondo vettore `
//che compatta i numeri contenuti nel primo vettore. In particolare:
//• ogni numero che compare ripetuto nel primo vettore, deve comparire una sola volta nel secondo
//  vettore
//• ogni numero uguale a zero presente nel primo vettore non deve comparire nel secondo vettore.
//Il programma deve visualizzare il contenuto del secondo vettore.
//Ad esempio, si supponga N=8 e si consideri la sequenza di numeri 1 18 3 0 24 3 6 0 inseriti da tastiera.
//Il programma deve visualizzare 1 18 3 24 6 .


/*
int main()
{
   int i,n, i_b;
   int a[100];
    int b[100];

   printf("Inserisci il size dell'array (<=20):  ");
   scanf(" %d", &n);
   legge_da_tast(a,n);

   vettore_compattato(a,n,b,&i_b);

   for(i=0;i<i_b;i++){
    printf("Elemento %d e'   %d\n", i, b[i]);
   }

    return 0;

}
*/



//Calcola media di tutte le righe di una matrice e assegnale in un altra matrice


















