#include <stdio.h>
#include <stdlib.h>
float somma_armonica(int n);
int main()
{
   int i, n;
   float somma;

   printf("quanti sono i primi n numeri che vuoi sommare (1/n):  \n");
   scanf("%d", &n);

   somma = somma_armonica(n);

   printf("la somma armonica e' : %f", somma);
   return somma;

}



float somma_armonica(int n)
{
    int i;
    float somma;
    somma=0;

    for(i=1;i<=n;i++){
        somma = somma + 1/((float)i);
    }
    return somma;

}
