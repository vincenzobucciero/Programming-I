#include <stdio.h>
#include <stdlib.h>
float somma_quadratica(int n);

int main()
{
    int n;
    float somma;

    printf("Quanti sono i primi n numeri naturale che vuoi sommare:  \n");
    scanf("%d", &n);

    somma = somma_quadratica(n);

    printf("La somma quadratica dei tuoi numeri e':  %f", somma);

    return somma;


}






float somma_quadratica(int n)
{
    int i;
    float somma;
    somma=0;

    for(i=1;i<=n;i++){
        somma = somma + (1/((float)i))*(1/((float)i));
    }

    return somma;
}
