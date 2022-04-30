float media_array(float a[], int n)
{
    int i;
    float somma;
    somma=0;

    for(i=0;i<n;i++){
        somma=somma+a[i];
    }
    return somma/(float)n;
}


void legge_da_tastiera(float a[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci un elemento:  \n");
        scanf("%f", &a[i]);

    }
}


float varianza_array(float a[], int n)
{
    int i;
    float media, varianza;

    media = media_array(a,n);
    varianza = 0;

    for(i=0;i<n;i++){
        varianza = varianza + ((a[i]-media)*(a[i]-media));
    }
    varianza = varianza/(float)(n);
    return varianza;
}
