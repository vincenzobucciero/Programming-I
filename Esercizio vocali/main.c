#include <stdio.h>
#include <stdlib.h>
/*Scrivere un programma che, data una sequenza di caratteri, visualizzi quanti corrispondono
a delle vocali.*/

int main()
{
 char c;
 int i,n,vocali=0,consonanti=0;

 printf("inserisci il numero di caratteri da considerare:\n");
 scanf("%d", &n);



    for(i=0;i<n;i++) {
        printf("inserisci un carattere: \n");
        scanf(" %c", &c);


    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        vocali++;
    }
    else {
        consonanti++;
    }}
    printf("il numero delle vocali e' %d\n" , vocali);
    printf("il numero delle consonanti e' %d\n", consonanti);

}

