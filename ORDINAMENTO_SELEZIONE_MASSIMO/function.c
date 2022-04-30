void ord_sel_max(char a[], int n)
{
    int i, indice_max;
    char max_array;
        for(i=n-1; i>0; i--){
            max_val_ind(&a[0], i+1, &max_array, &indice_max);
            scambiare_c(&a[i], &a[indice_max]);
        }
}





void max_val_ind(char a[], int n, char *max_array, int *i_max)
{
    int i;
    *max_array=a[0];
    *i_max=0;
        for(i=1;i<n;i++){
            if(a[i]>*max_array){
                *max_array=a[i];
                *i_max=i;
            }
        }
}



void scambiare_c(char *a, char *b)
{
    char temp;

        temp = *a;

        *a = *b;

        *b = temp;
}





void legge_da_tast(char v[], int n)
{
    int i;

    for(i=0;i<n;i++){
        printf("Inserisci l'elemento:  ");
        scanf(" %c", &v[i]);
    }
}
