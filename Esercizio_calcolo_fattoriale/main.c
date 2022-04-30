#include <stdio.h>
#include <stdlib.h>


/*      per definizione il fattoriale di un numero intero si calcola:     n! = 1*2*3*4*...*n   */

int Fattoriale(int n);
int main()
{
   int n, risultato;

   printf("Di quale numero intero vuoi calcolare il fattoriale?\n");
   scanf("%d", &n);
   risultato = Fattoriale(n);

   printf("Il risultato e' %d", risultato);

   return risultato;


}





int Fattoriale(int n)
{
    int i;
    int fatt;
    fatt=1;

    if (n>1){
        for(i=2;i<=n;i++){
            fatt = fatt*i;
        }
    }
    return fatt;
}
