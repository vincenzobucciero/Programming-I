#include <stdio.h>
#include <stdlib.h>

float media_array(float v[], int n);
void fusione(float a[], int n_a, float b[], int n_b, float c[]);
float media_fusione(float a[], int n_a, float b[], int n_b, float c[], int *md_c);

int main()
{
    int n_a=5, n_b=6;
    int md_c;
    float a[]={10,20,30,40,50};
    float b[]={11,12,13,14,15,16};
    int n_c=n_a+n_b;
    float c[n_c];
    fusione(a,n_a,b,n_b,c);

    media_fusione(a,n_a,b,n_b,c,&md_c);
    media_array(c,n_c);
}




void fusione(float a[], int n_a, float b[], int n_b, float c[])
{
    int i, i_a, i_b,i_c;
    i_a=0;
    i_b=0;

    for(i_c=0;i_c<n_a+n_b;i_c++){
        if(i_a<n_a && i_b<n_b){
            if(a[i]<b[i])
                c[i_c]=a[i_a++];
            else
                c[i_c]=b[i_b++];
        }
        else if(i_b>=n_b)
            c[i_c]=a[i_a++];
            else
                c[i_c]=b[i_b++];

}


float media_fusione(float a[], int n_a, float b[], int n_b, float c[], int *md_c)
{


    fusione(a,n_a,b,n_a,c);

    *md_c=media_array(c,(n_a+n_b));


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
}
