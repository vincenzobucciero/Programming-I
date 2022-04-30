#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int n_a=6, n_b=4, n_c;
    float a[]={1,2,3,4,5,6};
    float b[]={89,3,4,8};
    float c[n_a+n_b];
    int i;





    unione(a,n_a,b,n_b,c,&n_c);

    for(i=0; i<n_c; i++){
        printf("l'elemento %d dell'insieme c e': %f\n", i, c[i]);
    }


}
