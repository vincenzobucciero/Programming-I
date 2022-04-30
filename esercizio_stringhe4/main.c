#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_parole(char *testo);

int main()
{
    char testo[1000];

    printf("Inserisci testo:  \n");
    gets(testo);

    printf("Le parole che contengono 5 vocali sono: %d", conta_parole(testo));
}






int conta_parole(char *testo)
{

    char *token = strtok(testo, " ");
    int i, j=0,vocali;

    while (token!='\0'){
            vocali=0;
                for(i=0;i<strlen(token);i++){
                    if(token[i]=='a' ||token[i]=='e' ||token[i]=='i' ||token[i]=='o' ||token[i]=='u'){
                        vocali++;
                    }
                }
                if(vocali>=5){
                    j++;
                    printf(" %s\n", token);
                }

                token = strtok('\0', " ");

        }
        return j;


}

