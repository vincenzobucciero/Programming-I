#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    int i, n_a=11, n_b=13, n_c;
    char a[]={'b','z','q','p','f','g','o','a','e','i','u'};
    char b[]={'q','r','u','t','z','i','j','o','b','t','s','a','v'};
    char c[1000];

    intersezione(a,n_a,b,n_b,c,&n_c);

    for(i=0; i<n_c; i++){
        printf("l'elemento %d dell'insieme C e':  %c\n", i, c[i]);
    }

}
