#include <stdio.h>
#include <stdlib.h>

//Sviluppare una function C che, data come parametro di input una stringa che
//rappresenta un testo in italiano, determina e restituisce come parametro di output il
//numero di parole che terminano in are contenute nel testo. Nel testo le parole sono
//separate da un unico spazio.

int main()
{

  char testo[1000];



  printf("Inserisci testo:\n");
  gets(testo);

  printf("Le parole che terminano in are sono: %d", conta_are(testo));

}
