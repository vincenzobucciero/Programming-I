int punteggio_matching(char *a, char *b, int n)
{
    int i,n_caratteri_uguali;
    n_caratteri_uguali=0;

    for(i=0;i<n;i++){
        if(a[i]==b[i]){
            n_caratteri_uguali=n_caratteri_uguali+1;
        }
    }
    return n_caratteri_uguali;
}



int matching_migliore(char *chiave, char *testo)
{
    int i,n,m,punteggio_max, punteggio,indice=-1;

    n = strlen(chiave);
    m = strlen(testo);

    punteggio_max=0;

    for(i=0; i<m-n; i++){
        punteggio = punteggio_matching(chiave,&testo[i],n);
        if(punteggio > punteggio_max){
            punteggio_max = punteggio;
            indice = i;
        }
    }
    return indice;

}
