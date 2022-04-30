void ord_sel_min(char a[], int n)
{
     int i, indice_min;
     char min_array;

            for(i=0;i<n;i++){
                min_val_ind(&a[i], n-i, &min_array, &indice_min);
                scambiare_c(&a[i], &a[indice_min+i]);
            }
}


void min_val_ind(char v[], int n, char *min_array, int *i_min)
{
    int i;
    *min_array=v[0];
    *i_min=0;

        for(i=1;i<n;i++){
            if(v[i]< *min_array){
                *min_array=v[i];
                *i_min=i;
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
