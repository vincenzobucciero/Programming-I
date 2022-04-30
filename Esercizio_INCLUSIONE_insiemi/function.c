void legge_da_tast(float v[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("inserisci l'elemento:  ");
        printf("\n");
        scanf(" %f", &v[i]);
    }
}


int appartiene(float v[], int n, float chiave)
{
    int i, confronto;
    i=0;
    confronto=0;

    do{
        if(chiave==v[i]){
            confronto=1;
        }
        i++;
    }
    while(!confronto&&i<n);
    return confronto;
}


int inclusione(float a[], int n_a, float b[], int n_b)
{
    int i, incluso;
    i=0;

    do{
        i++;
        incluso = appartiene(b, n_b, a[i]);
    }
    while(!incluso&&i<n_a);
    return incluso;
}
