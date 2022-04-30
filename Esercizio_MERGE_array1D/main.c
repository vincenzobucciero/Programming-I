#include <stdio.h>
#include <stdlib.h>

#include "header.h"


int main()
{
    int n;
    int i,n_a=6,n_b=6;
    char c[n_a+n_b];
    int n_c=n_a+n_b;
    char a[]={10,20,30,35,24,16};
    char b[]={15,5,14,17,48,54};


    fusione(a,n_a,b,n_b,c);

    for(i=0;i<n_c;i++){
        printf("il %d elemento dell'array C e': %d\n", i, c[i]);
    }








}
