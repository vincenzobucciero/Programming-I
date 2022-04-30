int ricerca_chiave(float v[], int n, float chiave)
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


void unione(float a[], int n_a, float b[], int n_b, float c[], int *n_c)
{
    int i, i_c;

    for(i=0; i<n_a; i++){
        c[i]=a[i];
        i_c = n_a - 1;
    }
    for(i=0; i<n_b; i++){
        if(!ricerca_chiave(a,n,b[i])){
            i_c++;
            c[i_c] = b[i];
        }
    }
    *n_c=i_c+1;
}



