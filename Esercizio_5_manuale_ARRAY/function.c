void legge_da_tast(int v[][100], int n, int m)
{
    int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("Inserisci l'elemento [%d][%d]:  ", i,j);
                scanf(" %d", &v[i][j]);
            }
        }
}


int somma_matrici(int a[][100], int b[][100], int n, int m, int c[][100])
{

    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
