int concatenazione(int a[], int n_a, int b[], int n_b, int c[])
{
    int i_a=0,i_b=0,i_c;

        for(i_c=0;i_c<n_a+n_b;i_c++)
            if(i_a<n_a && i_b<n_b){
                if(i_c % 2 == 0)
                    c[i_c] = b[i_b++];
                else
                    c[i_c] = a[i_a++];
            }
            else if(i_a>=n_a)
                c[i_c] = b[i_b++];
                else
                    c[i_c] = a[i_a++];

}





