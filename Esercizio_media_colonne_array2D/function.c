void legge_da_tast(int matrice[][100], int n, int m)
{
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                printf("Inserisci l'elemento [%d][%d]:  ",i,j);
                scanf(" %d", &matrice[i][j]);

    }
}
}


int media_colonne(int matrice[][100], int n, int m, int b[])
{
    int i,j;
    int somma;

    for(j=0;j<m;j++){
        somma=0;
        for(i=0;i<n;i++){
            somma = somma + matrice[i][j];
            b[j]= somma/m;
        }
    }
}
