#include <stdio.h>
#include <stdlib.h>

int main()
{
   int max2D, min2D, i_max, j_max, i_min, j_min;
   int n=2,m=3;
   int matrice[2][3]={{14,27,86},
                        {22,56,57}};

   ind_max_min(matrice,n,m,&max2D,&i_max,&j_max, &min2D, &i_min,&j_min);

   printf("l'elemento massimo e' %d\n", max2D);
   printf("Gli indici dell'elemento massimo sono (%d, %d)\n\n", i_max, j_max);
   printf("l'elemento minimo e' %d\n", min2D);
   printf("Gli indici dell'elemento minimo sono (%d, %d)\n\n", i_min, j_min);
}
