void legge_da_tastiera(double a[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci il %d-esimo numero:  \n", i);
        scanf("%lf", &a[i]);
    }
}



double max_array1D(double a[], int n)
{
    int i;
    double massimo;

    massimo = a[0];

    for(i=1;i<n;i++){
        if(a[i] > massimo){
            massimo = a[i];
        }

    }
    return massimo;
}
