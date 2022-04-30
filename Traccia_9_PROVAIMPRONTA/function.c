


int conta_are(char *testo)
{
   int i=0;

   char *temp = strtok(testo, " ");

   while(temp != '\0'){
    if(strcmp(&temp[strlen(temp) - 3], "are")==0){
        i++;
        printf("Le parole sono:  %s\n", temp);
    }
    temp = strtok('\0', " ");
   }
   return i;
}
