#include <stdio.h>
#include <stdlib.h>




int main()
{
  int i, n, num_max=0, x;

  printf("Quanti numeri vuoi analizzare?:  \n");
  scanf("%d", &n);


  for(i=1;i<=n;i++){
        printf("Inserisci il %d-esimo numero:  \n", i);
        scanf("%d", &x);
    if(x>num_max){
        num_max = x;
    }
  }
  printf("Il massimo tra questi numeri e' %d", num_max);
}
