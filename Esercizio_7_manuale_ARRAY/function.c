int somma_qualcosa(float v[][100], int n, int m, int somma)
{
    int i,j;somma=0.0;


    for(i=1;i<n-1;i++){
        for(j=1;j<m-1;j++){
                somma = somma + v[i][j];

        }
    }
    return somma;
}



void legge_da_tast(float v[][100], int n, int m)
{
    int i, j;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Inserisci l'elemento [%d][%d]:   ", i,j);
            scanf(" %f", &v[i][j]);

        }
    }
}
