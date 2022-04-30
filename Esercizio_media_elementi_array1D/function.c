void legge_da_tastiera(double a[], int n)
{
    int i;

    for(i=1;i<=n;i++) {
        printf("Inserisci il %d-esimo numero:  \n", i);
        scanf("%lf", &a[i]);
    }

}


double media_array1D(double a[], int n)
{
    int i;
    double risultato=0;

    for(i=1;i<=n;i++){

        risultato = risultato + a[i];
    }

    return risultato/n;
}


