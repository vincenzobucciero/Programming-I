void legge_da_tast(float v[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("inserisci l'elemento:  ");
        scanf("%f", &v[i]);
        printf("\n");
    }
}


int appartiene(float v[], int n, float chiave)
{
    int i, confronto;
    i=0;
    confronto=0;

    do{
        if(chiave==v[i]){
            confronto=1;
        }
        i++;
    }
    while(!confronto&&i<n);
    return confronto;
}



void sottrazione(float a[], int n_a, float b[], int n_b, float c[], int *n_c)
{
    int i;
    for(i=0;i<n_a;i++){
        if(!appartiene(b,n_b,a[i])){
            c[*n_c]=a[i];
            *n_c=*n_c+1;
        }
    }

}
