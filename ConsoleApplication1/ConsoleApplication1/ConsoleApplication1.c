// ConsoleApplication1.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <stdio.h>

void legge_da_tastiera(int array[], int n);

int main()
{
    int array[100];
    int i, n;

    printf("Inserisci la dimensione dell'array:  \n");
    scanf_s(" %d", &n);

    legge_da_tastiera(array, n);

    for (i = 0; i < n; i++) {

        printf("elemento %d :    %d\n", i, array[i]);
    }


}



void legge_da_tastiera(int array[], int n)
{
    int i;

    for (i = 0; i < n; i++) {
        printf("Inserisci un elemento dell'array:  \n");
        scanf_s(" %d", &array[i]);
    }
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
