void legge_da_tastiera(double a[], int n)
{
    int i;
    for(i=0;i<n;i++){
            printf("Inserisci il %d-esimo elemento:  \n", i);
            scanf("%lf", &a[i]);
    }
}





void ind_max_min_array1D(double a[], int n, int *massimo, int *minimo, int *i_max, int *i_min)
{
    int i;

    *massimo=a[0];
    *i_max=0;
    *minimo=a[0];
    *i_min=0;

    for(i=1;i<n;i++){
        if(a[i]>*massimo){
            *massimo=a[i];
            *i_max=i;

        }
        else if(a[i]<*minimo){
            *minimo=a[i];
            *i_min=i;

        }
    }
}




