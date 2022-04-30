
void prelievo(int *a)
{

   int x;
   printf("Inserisci la somma da voler prelevare:  \n");
   scanf("%d", &x);

   if(x<=*a)
    *a = *a-x;
   else{
    printf("Non ci sono abbastanza soldi!\n");
    exit(0);
    }

    printf("IL TUO SALDO RIMANENTE E' %d\n\n", *a);


}

void deposito(int *a)
{
    int x;
    printf("Inserisci la somma da voler depositare:  \n");
    scanf("%d", &x);

    *a = *a+x;

    printf("IL SALDO ATTUALE E' %d\n\n", *a);
}


