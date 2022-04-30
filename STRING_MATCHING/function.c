int uguali_stringhe(char *a, char *b, int n)
{
    int i=0;
    int uguale=0;

    do{
        if(a[i]!=b[i]){
            uguale=0;
        }
        i++;

    }
    while(!uguale&&i<n);
    return uguale;

}



int string_matching(char *chiave, char *testo)
{
    int i,n,m, conta_chiave;
    conta_chiave=0;

    n = strlen(chiave);
    m = strlen(testo);

    for(i=0;i<=m-n;i++){
        if(strncmp(chiave, &testo[i], n)==0){
            conta_chiave=conta_chiave+1;
        }
    }
    return conta_chiave;
}
