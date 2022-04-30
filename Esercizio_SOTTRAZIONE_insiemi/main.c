#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[100];
    float b[100];
    int n_a,n_b,n_c;
    float c[100];
    int i;

    printf("da quanti elementi e' composto il primo insieme:  ");
    scanf("%d", &n_a);
    legge_da_tast(a,n_a);

    printf("da quanti elementi e' composto il secondo insieme:  ");
    scanf("%d", &n_b);
    legge_da_tast(b,n_b);

    sottrazione(a,n_a,b,n_b,c,&n_c);

    for(i=0;i<n_c;i++){
        printf("il %d elemento del terzo insieme e': %f\n", i, c[i]);
    }
}
