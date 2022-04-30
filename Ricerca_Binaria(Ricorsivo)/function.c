
int ric_bin_ricTF(int chiave, int elenco[], int n)
{
    int mediano;

        if ( n == 0 )
            return 0;
            mediano = (n-1)/2;
            if ( chiave == elenco[mediano] )
                return 1;
                else if ( chiave < elenco[mediano] )
                    return ric_bin_ricTF(chiave, elenco, mediano);
                    else
                        return ric_bin_ricTF(chiave, elenco+mediano+1, n-mediano-1);

}


void legge_da_tastiera(int v[], int n)
{
    int i;

    for(i=0;i<n;i++){
        printf("Inserisci il %d-esimo elemento dell'array:  ", i);
        printf("\n");
        scanf(" %d", &v[i]);
    }
}
