
void legge_da_tastiera(char a[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci il %d-esimo elemento\n", i);
        scanf(" %c", &a[i]);
    }
}



int appartiene_array1D(char chiave, char a[], int n)
{
    int i, esito_confronto;
    esito_confronto=0;
    i=0;
    do{
        i=i+1;
        if(chiave==a[i]){
            esito_confronto=1;
        }

    }

    while(!esito_confronto&&i<n);
    return esito_confronto;
}
