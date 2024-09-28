#include <iostream>
#include <windows.h>
using namespace std;
 
void gotoxy(int x, int y);
void name();

main()
{

system("cls");      
name();

}

void name()
{

gotoxy(28, 20);
cout << "  ############     ###     ############ ########                  " <<endl;
gotoxy(28, 21);
cout << "  ##       ##     ## ##         ##      ##     ###                " <<endl;
gotoxy(28, 22);
cout << "          ##     ##   ##        ##      ##        ##              " <<endl;
gotoxy(28, 23);
cout << "         ##     ##     ##       ##      ##          ##            " <<endl;
gotoxy(28, 24);
cout << "        ##     ###########      ##      ##          ##            " <<endl;
gotoxy(28, 25);
cout << "       ##      ###########      ##      ##          ##            " <<endl;
gotoxy(28, 26);
cout << "      ##       ##       ##      ##      ##          ##            " <<endl;
gotoxy(28, 27);
cout << "     ##        ##       ##      ##      ##        ##              " <<endl;
gotoxy(28, 28);
cout << "    ##      ## ##       ##      ##      ##     ###                " <<endl;
gotoxy(28, 29);
cout << "   ########### ##       ## ############ ########                  " <<endl;
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}