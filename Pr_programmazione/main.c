#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void  GotoXY(int x, int  y)
{
    COORD CursorPos = {x, y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, CursorPos);
}

#define MAX_RIGHE 40
#define MAX_COLONNE 40

int main()
{
    char array2D_1[MAX_RIGHE][MAX_COLONNE];

    int i=0,x,y, aggiorna;

    x=0;
    y=0;

    GotoXY(x,y);
    printf("La matrice e':  \n\n");
    printf("-PREMI s PER AGGIORNARE:");
    printf("\n\n\n");
    costruzione_matrice(array2D_1,MAX_RIGHE,MAX_COLONNE);

    do {
        aggiorna = getch();

        if( aggiorna == 115 ){
           system("cls");

           GotoXY(x,y);

           cambia_array2D(array2D_1,MAX_RIGHE, MAX_COLONNE);

        }
    }
    while (aggiorna!=27);
    return 0;
}

