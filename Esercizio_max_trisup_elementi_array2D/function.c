void visualizza_a2D (int matrice[4][4], int n, int m)
{
    int i, j;
    for (i=0; i<n; i++)
    {
        for (j=0; j<m; j++)
            printf ("%4d", matrice[i][j]);
        printf ("\n");
    }
}


int max_trisup2D(int matrice[4][4], int n, int m)
{
    int i,j;
    int max_trisup;
    max_trisup = matrice[0][0];

    for(i=0;i<n;i++){
        for(j=i;j<m;j++){
            if(matrice[i][j] > max_trisup){
                max_trisup = matrice [i][j];
            }
        }
    }
    return max_trisup;
}
