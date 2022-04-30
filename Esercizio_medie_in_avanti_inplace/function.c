void legge_da_tastiera(float a[], int n)
{
   int i;
    for (i=0;i<n;i++){
        printf("Inserisci il %d-esimo elemento:  ", i);
        printf("\n");
        scanf("%f", &a[i]);
    }
}



float medie_avanti_inplace(float a[], int n)
{
    int i;

    for(i=0;i<n;i++){
        a[i]=(a[i]+a[i+1])/2;
    }
    a[n-1]=(a[n-1]+a[0])/2;
}
