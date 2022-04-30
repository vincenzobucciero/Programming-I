float media_2D(float matrice[2][3],int n, int m)
{
    int i,j;
    float somma;
    somma=0;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            somma=somma+matrice[i][j];
        }
    }
    return somma/((float)n*m);
}
