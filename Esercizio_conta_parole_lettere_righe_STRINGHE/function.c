void conta_tutto(char *testo, int *num_parole, int *num_lett, int *num_righe)
{
    int i=0;
    int iniziale_parola;
    *num_lett=0; *num_parole=0; *num_righe=0;

    while(testo[i]!='\0'){

        (*num_lett)++;

        if (testo[i]=='\n')
            (*num_righe)++;

        if (testo[i]== ' ' || testo[i]=='\n' || testo[i]=='\t'){
            iniziale_parola=0;
            (*num_lett)--;
        }

        else if(iniziale_parola==0){
            iniziale_parola=1;
            (*num_parole)++;
        }
        i++;
    }
    (*num_righe)++;

}
