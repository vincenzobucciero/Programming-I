
void sostituire_carattere(char testo[], char testo2[])
{
    int i;

    while(testo[i] != '\0'){
        for (i=0;i<strlen(testo); i++){
            if(testo[i]==' ')
                testo2[i]== '\n';
            else
                testo2[i]==testo[i];
        }
    }

}
