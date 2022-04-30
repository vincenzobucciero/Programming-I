#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "header.h"

/*Dato il seguente programma costruire due funzioni: una che restituisca la distanza tra due
punti e l’altra per la traslazione di un punto. Suddividere il programma su pi`u file: file
per il main, il file header ed un file con le funzioni.*/

int main ()

{

  float x1,y1,x2,y2,d,t1,t2,a=2,b=10;

  printf ("Inserire le coordinate del primo punto (float) : ");
  scanf("%f%f",&x1,&y1);

  printf ("Inserire le coordinate del secondo punto (float) : ");
  scanf("%f%f",&x2,&y2);

  d = distanza_2_punti(x1,x2,y1,y2);
  printf ("la distanza dei punti e' :%f\n", d);


  traslazione(x1,a,y1,b);
  return 0;
}

