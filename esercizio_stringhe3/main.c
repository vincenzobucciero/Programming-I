#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int conta_a_e ( char *testo );

int main(int argc, char *argv[])
{
	char testo[1000];

	printf("Inserisci il testo:  \n");
	gets(testo);

	printf("Le parole che iniziano con 'a' e terminano con 'e' sono: %d", conta_a_e(testo));

}




int conta_a_e(char *testo)
{
	char *token = strtok(testo, " ");
	int i;

		while ( token != '\0'){
			if ( token[0] == 'a' && token [ strlen ( token) -1 ] == 'e'){
			i++;
			printf("La parola e' : %s\n", token );}


			token = strtok ('\0', " ");
		}

			return i;
}
