void legge_da_tastiera(double a[], int n)
{
    int i;

    for(i=0; i<n; i++){
        printf("Inserisci il %d-esimo elemento:  \n", i);
        scanf("%lf", &a[i]);
    }

}



double min_array1D(double a[], int n)
{
    int i;
    double minimo;
    minimo = a[0];

    for(i=0;i<n;i++){
        if(a[i]<minimo){
            minimo = a[i];
        }
    }
    return minimo;
}
