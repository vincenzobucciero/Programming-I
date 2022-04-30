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



int matrice_trasposta(int a[][100], int b[][100], int n, int m)
{
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            b[j][i]=a[i][j];
        }
    }
}
