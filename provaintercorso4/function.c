int e_vocale(char x)
{

            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
                return 1;

        return 0;
}



int esercizio4(char *testo, int n)
{
    char *token = strtok(testo, " ");
    int i,n_vocali=0, massimo=0;



    while (token!= '\0'){
        n_vocali=0;
                for(i=0;i<strlen(token);i++){

                    if(e_vocale(token[i]))
                    n_vocali++;

                    }
                if(n_vocali>massimo)
                massimo = n_vocali;

            token = strtok('\0', " ");
    }

        return massimo;
}
