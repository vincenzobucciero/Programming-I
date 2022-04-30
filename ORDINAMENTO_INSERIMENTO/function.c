void ord_inser(char a[], int n)
{
   int i,j;
   char el_da_ins;

    for(i=0;i<n;i++){
        el_da_ins=a[i];
        j=i-1;

        while(j>=0 && el_da_ins<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=el_da_ins;
    }
}

void legge_da_tast(char v[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci l'elemento:  \n");
        scanf(" %c", &v[i]);
    }
}
