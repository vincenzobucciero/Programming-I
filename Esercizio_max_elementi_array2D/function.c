int massimo_2D(int matrice[2][3], int n, int m)
{
    int i,j;
    int max2D;

    max2D = matrice[0][0];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(matrice[i][j] > max2D){
                max2D = matrice[i][j];
            }
        }
    }
    return max2D;
}
