#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
    char a[]={'a','e','t','r','f'};
    int i, n=5;



    printf("array non ordinato\n");
    for(i=0;i<n;i++){
        printf(" %c", a[i]);
    }

    ord_sel_min(a,n);


    printf("\n array ordinato:\n");
    for(i=0;i<n;i++){
        printf(" %c", a[i]);
    }

    return 0;
}
