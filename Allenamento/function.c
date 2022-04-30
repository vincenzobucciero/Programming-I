/*
int quadrato(int a[], int n, int b[])
{
    int i;

    for(i=0;i<n;i++){
        b[i] = a[i]*a[i];
    }
}

void legge_da_tast( int v[], int n)
{
    int i;
        for(i=0;i<n;i++){
            printf("Inserisci l'elemento:  ");
            scanf(" %d", &v[i]);
        }
}

void visualizza(int v[], int n)
{
    int i;
     for(i=0;i<n;i++)
         printf(" %5d", v[i]);
     return;
}

int cubo(int a[], int n, int c[])
{
    int i;

    for(i=0;i<n;i++){
        c[i] = a[i]*a[i]*a[i];
    }

}
*/




/*
int elementi_uguali(int a[], int n)
{


   int uguale = 1;
   int i = 0;

    for(i=1;i<n;i++){
        if(a[i] != a[i-1])
        uguale=0;
    }

    return uguale;


}

void legge_da_tast( int v[], int n)
{
    int i;
        for(i=0;i<n;i++){
            printf("Inserisci l'elemento:  ");
            scanf(" %d", &v[i]);
        }
}
*/




/*
void legge_da_tast(int v[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci l'elemento:  ");
        scanf(" %d", &v[i]);
    }
}


int sequenza_ordinata(int a[], int n)
{
    int i, sequenza=0;

    for(i=1;i<n;i++){
            if(a[i]<=a[i-1])
            sequenza = 1;
    }
    return sequenza;
}

*/




/*void legge_da_tast(int v[], int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("Inserisci l'elemento:  ");
        scanf(" %d", &v[i]);
    }
}

int vettore_compattato(int a[], int n, int b[], int *i_b)
{
    int i=0,j;
    *i_b=0;
    int flag;

    if(a[i]!=0){
        b[*i_b]=a[i];
        (*i_b)++;
        }

        for(i=1;i<n;i++){
            flag=0;
            for(j=0;j<i;j++){
                if(a[i] == a[j] || a[i]==0){
                    flag=1;
                }
            }
            if(flag==0){
                b[*i_b]=a[i];
                (*i_b)++;
            }
        }

}







void visualizza(int v[], int n)
{
    int i;
     for(i=0;i<n;i++)
         printf(" %5d", v[i]);
     return;
}
*/




















