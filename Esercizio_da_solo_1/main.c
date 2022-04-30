#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"



int main()
{
    int n, f_int;

    float f_float;

    printf("valore di n            fattorialeI        fattorialeF \n");

    for(n=1;n<=14;n++)
    {

        f_int= fattorialeI(n);
        f_float= fattorialeF(n);

        printf("%7d   %15d    %15.0f\n", n, f_int, f_float);

    }
}
