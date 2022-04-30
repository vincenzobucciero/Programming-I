#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, num_min=0, x;


    printf("Quanti numeri vuoi analizzare?:  \n");
    scanf("%d", &n);

    num_min=x;

    for(i=1;i<=n;i++){
        printf("Inserisci il %d-esimo numero\n", i);
        scanf("%d", &x);
        if(x<num_min){
                num_min=x;
            }
        }

    printf("Il minimo tra questi numeri e' %d", num_min);

}
