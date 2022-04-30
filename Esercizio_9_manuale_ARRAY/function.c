int k_somma(int v[][100], int n, int m, int *k)
{
    int i,j;
    j=0;
    int somma=0;

    for(i=0;i<n;i++){
        somma = somma + v[i][*k];

    }
    return somma;
}



void legge_da_tast(int v[][100], int n, int m)
{
    int i,j;

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("Inserisci l'elemento [%d][%d]  ", i,j);
            scanf(" %d", &v[i][j]);
        }
        }
}
