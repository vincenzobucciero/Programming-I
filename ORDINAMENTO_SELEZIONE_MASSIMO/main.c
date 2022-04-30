#include <stdio.h>
#include <stdlib.h>

#include "header.h"

int main()
{
  int i,n;
  char a[100];

  printf("da quanti elementi e' composto il primo array?\n");
  scanf(" %d", &n);
  legge_da_tast(a,n);

  printf("Array non ordinato\n");
  for(i=0;i<n;i++)
    printf(" %c", a[i]);

    printf("\n");

  ord_sel_max(a,n);

  printf("Array ordinato:\n");
  for(i=0;i<n;i++)
    printf(" %c", a[i]);


}
