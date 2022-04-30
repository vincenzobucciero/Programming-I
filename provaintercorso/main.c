#include <stdio.h>
#include <stdlib.h>
void sostituzione(float a[], int n_a, float b[], int n_b);
float media_array(float v[], int n);

int main()
{
   int i, n_a=5, n_b=6;
   float a[]={10,20,30,40,50};
   float b[]={11,12,13,14,15,16};


   sostituzione(a,n_a,b,n_b);

   media_array(a,n_a);

        for(i=0;i<n_a;i++){
        printf(" %f", a[i]);
    }

    printf("\n");

    media_array(b,n_b);

        for(i=0;i<n_b;i++){
        printf(" %f", b[i]);
    }



}








float media_array(float v[], int n)
{
    int i;
    float somma=0;
    for(i=0;i<n;i++){
        somma = somma + v[i];
    }
    return somma/n;
}






void sostituzione(float a[], int n_a, float b[], int n_b)
{


    int i;
    float md_a, md_b;
    md_a = media_array(a,n_a);
    for(i=0;i<n_a;i++){
        if(a[i]>md_a)
            a[i]=md_a;

    }

    md_b=media_array(b,n_b);
    for(i=0;i<n_b;i++){
        if (b[i]>md_b)
            b[i]=md_b;
    }
}
