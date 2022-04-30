#include <stdio.h>
#include <stdlib.h>

/* scrivi un programma che conti il numero delle occorrenze in un file delle prime tre lettere dell'alfabeto (a,A,b,B,c,C) senza distinguere tra maiuscole e minuscole.*/

int main()

{
    char c;
    int i,n,lett_a=0, lett_b=0, lett_c=0,other=0;
    printf("Dimmi il numero di lettere che vuoi inserire:\n");
    scanf(" %d", &n);


     for (i=1;i<=n;i++) {

        printf("Inserisci la %d-esima lettera: \n", i);
        scanf(" %c", &c);

        if(c=='a'||c=='A')
            ++lett_a;
        else if (c=='b'||c=='B')
            ++lett_b;
        else if (c=='c'||c=='C')
            ++lett_c;

        else
            ++other;
    }

    printf("Le lettere 'a' || 'A' sono: %d\n\n", lett_a);
    printf("Le lettere 'b' || 'B' sono: %d\n\n", lett_b);
    printf("Le lettere 'c' || 'C' sono: %d\n\n", lett_c);
    printf("Le altre lettere sono %d\n\n", other);

    return 0;
}
