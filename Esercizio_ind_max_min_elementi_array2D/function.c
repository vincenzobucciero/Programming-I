int ind_max_min(int matrice[2][3], int n, int m, int *max2D, int *i_max, int *j_max, int *min2D, int *i_min, int *j_min)
{
    int i,j;

    *max2D = matrice[0][0];
    *min2D = matrice[0][0];
    *i_max = 0;
    *j_max = 0;
    *i_min = 0;
    *j_min = 0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(matrice[i][j] > *max2D){
                *max2D = matrice[i][j];
                *i_max = i;
                *j_max = j;
            }
            else if(matrice[i][j] < *min2D){
                *min2D = matrice[i][j];
                *i_min = i;
                *j_min = j;
            }

        }
    }
    return max2D, i_max, j_max, min2D, i_min, j_min;


}
