#include <stdlib.h>
#include <stdio.h>
#include "header.h"

void cambia_array2D(char array2D_1[][40], int n, int m)
{
        int i, j;

        costruzione_matrice(array2D_1, n, m);

            for(i=0;i<n;i++){

                for(j=0;j<m;j++){

                if ( array2D_1[i-1][j] == ' X ' && array2D_1[i-1][j-1] == ' X ' && array2D_1[i-1][j+1] == ' 0 ')
                    array2D_1[i][j] = ' X ';


                    else if ( array2D_1[i-1][j-1] == ' X ' && array2D_1[i-1][j+1] == ' X '&& array2D_1[i-1][j] == ' 0 ')
                    array2D_1[i][j] = ' X ';


                    else if ( array2D_1[i-1][j] == ' X ' && array2D_1[i-1][j+1] == ' X ' && array2D_1[i-1][j-1] == ' X ')
                    array2D_1[i][j] = ' X ';

                    else if ( array2D_1[i-1][j] == ' X ' && array2D_1[i-1][j-1] == ' X ' && array2D_1[i-1][j+1] == ' X ')
                    array2D_1[i][j] = ' X ';

                    else if ( array2D_1[i-1][j+1] == ' X ' && array2D_1[i-1][j] == ' 0 ' && array2D_1[i-1][j-1] == ' X ')
                    array2D_1[i][j] = ' X ';
            }

       }

}




void costruzione_matrice(char v[][40], int n, int m)
{
   int i, j;

        for (i=0)
}










