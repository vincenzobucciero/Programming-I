int appartiene(char v[], int n, char chiave)
{

    int i=0, confronto=0;

        do{
            if(chiave==v[i])
                confronto=1;
        }
        while(!confronto && i<n);
            return confronto;
}




void intersezione(char a[], int n_a, char b[], int n_b, char c[], int *n_c)
{
    int i;
    int i_c=0;

        for(i=0;i<n_a;i++){
            if(appartiene(b,n_b,a[i]))
                c[i_c]=a[i];
                i_c++;
        }
        *n_c=i_c;
}
