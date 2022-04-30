
float media_centrata(float a[], int n)
{
    int i,p,e;
    p=a[0];
    a[0]=(a[0]+a[i])/2;

    for(i=0;i<n;i++){
        e=a[i];
        a[i]=(p+e+a[i+1])/3;}

    p=e;
}                                                                   DA RIFARE DA RIFARE DA RIFARE




void legge_da_tastiera(float a[], int n)
{
    int i;
    for (i=0;i<n;i++){
        printf("Inserisci il %d-esimo elemento\n", i);
        scanf("%f", &a[i]);
    }
}
