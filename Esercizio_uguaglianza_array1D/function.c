int uguaglianza_array1d(int a[], int b[],int n)
{
   int uguale = 1;
   int i = 0;

    for(i=0;i<n;i++)
        if(a[i] != b[i])
        uguale=0;


    return uguale;
}



void leggi_da_tast(int v[], int n)
{
    int i;

    for(i=0;i<n;i++){
        printf("Inserisci l'elemento:  ");
        scanf(" %d", &v[i]);
    }
}


