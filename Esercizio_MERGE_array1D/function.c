void fusione(char a[], int n_a, char b[], int n_b, char c[])
{
    int i_a,i_b,i_c;
    i_a=0;
    i_b=0;


    for(i_c=0; i_c < n_a + n_b;i_c++)
        if(i_a < n_a && i_b < n_b)
    {
            if(a[i_a] < b[i_b])
                c[i_c]=a[i_a++];
                else
                    c[i_c]=b[i_b++];
    }

                else if (i_a >= n_a)
                    c[i_c]=b[i_b++];
                    else
                        c[i_c]=a[i_a++];


}


