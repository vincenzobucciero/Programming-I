int minimo_2D(int matrice[3][7], int n, int m)
{
    int min2D;
    int i,j;

    min2D = matrice[0][0];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(matrice[i][j] < min2D){
                min2D = matrice[i][j];
            }
        }
    }
    return min2D;
}
