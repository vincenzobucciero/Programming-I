

#include "header.h"

int media_arrayD(int a[], int n)
{
    int i;
    float somma=0;

    for(i=0;i<n;i++) {
        somma=somma+i;

    }
    return somma/n;
}
