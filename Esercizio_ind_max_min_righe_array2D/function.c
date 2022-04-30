void legge_da_tast(int v[][100],int n ,int m)
{
    int i,j;
    for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                printf("Inserisci l'elemento [%d][%d]:  ",i,j);
                scanf(" %d", &v[i][j]);
            }
            }
}



int roba_ammiscata_righe(int matrice[][100], int n, int m, int b[], int massimo[], int minimo[], int i_max[], int j_max[], int i_min[], int j_min[])
{
    int i,j;

    for(i=0;i<n;i++){
            massimo[i]=matrice[i][0];
            minimo[i]=matrice[i][0];
            i_max[i]=i;
            j_max[i]=0;
            i_min[i]=i;
            j_min[i]=0;
        for(j=0;j<m;j++){
            if(matrice[i][j] > massimo[i]){
                massimo[i] = matrice[i][j];
                i_max[i]=i;
                j_max[i]=j;
                b[i]= massimo[i];
            }
            else if(matrice[i][j] < minimo[i]){
                minimo[i] = matrice [i][j];
                i_min[i]=i;
                j_min[i]=j;
                b[i]= minimo[i];
            }
        }
    }

}
