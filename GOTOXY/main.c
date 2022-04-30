#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

void  GotoXY(int x, int  y) {
    COORD CursorPos = {x, y};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsole, CursorPos);
    }

int main()
{
    {
int x,y,muovi ;

x=32;y=15;

GotoXY (x,y) ;
printf("!-||-!");

do {

muovi = getch();

if (muovi == 100 )  {

system("cls") ;
x++;
GotoXY (x,y) ;
printf("!-||-!");

}

else if (muovi == 97 )  {

system("cls") ;
x--;
GotoXY (x,y) ;
printf("!-||-!");

}

} while (muovi!=27) ;

return 0;

}
}
