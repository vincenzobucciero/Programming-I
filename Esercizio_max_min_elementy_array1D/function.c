

void legge_da_tastiera(double a[], int n)
{
    int i;


    for(i=0; i<n; i++){
            printf("Inserisci il %d-esimo elemento:\n", i);
        scanf("%lf", &a[i]);
    }

}



void max_min_array1D(double a[], int n, int *massimo, int *minimo)
{
    int i;
    *massimo=a[0];
    *minimo=a[0];
    for(i=1;i<n;i++){
        if(a[i] > *massimo){
            *massimo = a[i];
        }
        else if(a[i] < *minimo){
            *minimo = a[i];
        }
    }

}
