#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*GENERAZIONE DI 6 POSIZIONI PSEUDOCASUALI SU UNA SCACCHIERA DI 5X5 CASELLE*/

void main()
{
    int i, j, nx, ny;

    char scacchiera [][5] = {{'-','-','-','-','-'},
                            {'-','-','-','-','-'},
                            {'-','-','-','-','-'},
                            {'-','-','-','-','-'},
                            {'-','-','-','-','-'}};
        srand(time(NULL));

            for(i=1; i<=6 ;i++){
                nx = rand()%5;
                ny = rand()%5;
                scacchiera[nx][ny] = 'x';
            }
                for(i=0; i<5; i++){
                    for(j=0; j<5; j++)
                        printf(" %c", scacchiera[i][j]);
                        printf("\n");
                }
}
