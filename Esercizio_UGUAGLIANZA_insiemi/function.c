void legge_da_tast(float v[], int n)
{
    int i;

    for(i=0;i<n;i++){
    printf("inserisci l'elemento:  ");
    scanf("%d", &v[i]);
    printf("\n");
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



int uguaglianza_insiemi(float a[], float b[], int n)
{
    int i, uguale;
    i=0;


    do{
        uguale = appartiene(a,n,b[i]);
        i++;
    }
    while(uguale&&i<n);
    return uguale;


}
