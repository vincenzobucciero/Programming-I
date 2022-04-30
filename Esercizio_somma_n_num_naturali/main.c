#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float somma=0;

    printf("Quanti primi numeri naturali vuoi sommare?\n");
    scanf("%d", &n);

    for(i=0;i<=n;i++){
        somma = somma + i;
    }
    printf("la somma e' %f", somma);
    return somma;
}
