int e_cons(char x)
{
    if(x!='a' && x!='e' && x!='i' && x!='o' && x!='u')
        return 1;

    return 0;
}



int conta_cons(char *testo, int n)
{
    int i;
    char *token = strtok(testo, " ");

    int n_cons, massimo=0;

    while(token != '\0'){
        n_cons=0;
            for(i=0;i<strlen(token);i++){
                if(e_cons(token[i]))
                    n_cons++;
            }
            if(n_cons>massimo)
                massimo = n_cons;
        token = strtok('\0', " ");
    }
    return massimo;

}
