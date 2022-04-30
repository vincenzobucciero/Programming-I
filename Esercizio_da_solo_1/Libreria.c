
#include "libreria.h"

int fattorialeI(int n)
{
    int fatt, i;
    fatt=i;
    if(n>1){
        for(i=2;i<=n;i++)
            fatt=fatt*i;
    }
    return fatt;
}

float fattorialeF(int n)
{
    int i;
    float fatt=1.0F;
    if(n>1.0F) {
        for(i=2.0F;i<=n;i++)
            fatt=fatt*(float)i;
    }
    return fatt;
}
