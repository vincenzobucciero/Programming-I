int max_diagonale2D(int matrice[4][4], int n, int m)
{
    int i, max2D;
    max2D = matrice [0][0];

    for(i=0;i<n;i++){
            if(matrice[i][i] > max2D){
                max2D = matrice[i][i];
            }
        }
        return max2D;

}
