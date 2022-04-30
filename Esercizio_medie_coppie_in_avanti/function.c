
float media_avanti(float a[], int n, float b[])
{
    int i;

    for(i=0;i<n-1;i++){
        b[i]=(a[i]+a[i+1])/2;
    }
    b[n-1]=(a[n-1]+a[0])/2;
}


void legge_da_tastiera(float a[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci il %d-esimo elemento:  ", i);
        printf("\n");
        scanf("%f", &a[i]);
    }
}
