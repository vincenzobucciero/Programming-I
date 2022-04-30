
float media_centrata(float a[], int n, float b[])
{
    int i;
    b[0]=(a[n-1]+a[0]+a[1]);

    for(i=0;i<n;i++){
        b[i]=(a[n-1]+a[i]+a[i+1])/3;
    }
    b[n-1]=(a[n-2]+a[n-1]+a[0])/3;
}



void legge_da_tastiera(float a[], int n)
{
    int i;
    for (i=0;i<n;i++){
        printf("Inserisci il %d-esimo elemento\n", i);
        scanf("%f", &a[i]);
    }
}
