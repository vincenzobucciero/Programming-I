#include <stdio.h>
#include <stdlib.h>
#include <time.h>



/*MISCUGLIO MAZZO FRANCESE*/


typedef enum {picche, fiori, quadri, cuori} Semi_Fr;

struct carta_Fr {
        int valore;
        Semi_Fr seme;
        };
typedef struct carta_Fr Carta_Fr ;

void mischia_mazzo(Carta_Fr *mazzo, int n);
void scambiare_carta(Carta_Fr *carta1, Carta_Fr *carta2);


void main()
{
   int k, i, n;
   n = 52;

   Carta_Fr mazzo [52];
   char *Semi[] = {"Picche", "Fiori", "Quadri", "Cuori"};

        srand (time(NULL));

        for(k=0; k<=3; k++)
        for(i=0; i<13; i++){
            mazzo[k*13+i].valore = i+1;
            mazzo[k*13+i].seme = (Semi_Fr)k;
        }
            mischia_mazzo(mazzo, n);

                for(k=0; k<n; k++)
                    printf(" %d  di  %s\n", mazzo[k].valore, Semi[(int)mazzo[k].seme]);

}


void mischia_mazzo(Carta_Fr *mazzo, int n)
{
    int k, p, q;

        for(k=1; k<8*n/2; k++){
            p = rand()%n;
            q = rand()%n;
            scambiare_carta(&mazzo[p], &mazzo[q]);
        }
}

void scambiare_carta(Carta_Fr *carta1, Carta_Fr *carta2)
{
    int k, p, q;

        Carta_Fr temp;
        temp = *carta1;
        *carta1 = *carta2;
        *carta2 = temp;
}




