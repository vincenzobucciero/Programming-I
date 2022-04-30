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



int media_righe(int matrice[][100], int n, int m,int b[])
{
    int i,j;
    int somma;

    for(i=0;i<n;i++){
            somma=0;
        for(j=0;j<m;j++){
                somma = somma+matrice[i][j];
            b[i]= somma/n;
        }
    }

}
