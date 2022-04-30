
int conta_a_fess_e_sort(char *testo)
{
    char *temp = strtok(testo, " ");
    int i=0;

    while (temp!= '\0'){

        if(strlen(temp) == 3)
        i++;
        temp = strtok('\0', " ");
    }

    return i;
}
