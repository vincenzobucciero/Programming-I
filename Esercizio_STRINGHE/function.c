void conta_lettere(char testo[], int *conta_l, int *conta_v, int *conta_c)
{
    int i=0;
    *conta_l=0;
    *conta_v=0;
    *conta_c=0;

    while(testo[i]!= '\0'&& testo[i]!= '\n'){
        (*conta_l)++;
        (*conta_c)++;

        if ((testo[i]=='a') || (testo[i]=='e') || (testo[i]=='i') || (testo[i]=='o') || (testo[i]=='u')){
            (*conta_v)++;
            (*conta_c)--;

        }
        if(testo[i]== ' '){
            (*conta_l)--;
            (*conta_c)--;
        }

        i++;

        }



}





