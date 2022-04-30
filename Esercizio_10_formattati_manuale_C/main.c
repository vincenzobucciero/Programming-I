#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Scrivere un programma che calcoli e stampi il risultato della seguente formula
(x2 + 3x)/ (0.5 + x) + (0.1x + 1)/ (x3 + x) + 5
dove il coefficiente x `e inserito dall’utente ed `e il dato di input del programma.*/

int main()
{
    int x;
    float risultato;

    printf("Inserisci il valore della x:\n\n");
    scanf(" %d", &x);
    risultato = ((x*x)+3*x)/(0.5+x)+((0.1*x)+1)/((x*x*x)+x)*5;

    printf("il risultato dell'equazione e': %f", risultato);

    return 0;
}
