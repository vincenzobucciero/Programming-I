int conta_parole(char testo[], int m, int *num_parole)
{
    char c;
    int i;
    *num_parole=0, *num_lettere=0, *num_righe=0;
    int iniziale_parola=0;

    for(i=0;i<m;i++){
        c = testo[i];
        if(c==' '){
            iniziale_parola=0;

        }
        else if (!iniziale_parola){
            iniziale_parola=1;
            *num_parole = *num_parole+1;

        }
    }
  return *num_parole;

}
