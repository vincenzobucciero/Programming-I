int k_somma(int v[][100], int n,int m, int *k)
{

    int i=0,j;
    int somma=0;


        for(j=0;j<m;j++){
            somma = somma + v[*k][j];
    }
    return somma;
}




void legge_da_tast(int v[][100], int n, int m)
{
    int i,j;

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("Inserisci l' elemento [%d][%d]  ", i,j);
                scanf(" %d", &v[i][j]);
            }
        }
}
