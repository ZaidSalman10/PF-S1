#include <iostream>
#include <windows.h>
using namespace std;
 
void gotoxy(int x, int y);
void chara();
void charh();
void chars();
void charn();

main() {
system ("cls");         
charh();
chara(); 
chars();
chars();
chara();
charn();
}

void charh()
{
cout << " 88   88            " <<endl;
cout << " 88   88            " <<endl;
cout << " 8888888               " <<endl;
cout << " 88   88            " <<endl;
cout << " 88   88            " <<endl;
}

void chara() {
cout << "                " <<endl;
cout << "   888            " <<endl;
cout << "  88 88            " <<endl;
cout << " 88   88            " <<endl;
cout << " 8888888               " <<endl;
cout << " 88   88            " <<endl;
cout << "                " <<endl;
}
void chars()
{
cout << "   8888             " <<endl;
cout << "  88              " <<endl;
cout << "   8888             " <<endl;
cout << "      88          " <<endl;
cout << "  88888             " <<endl;
cout << "                " <<endl;
}

void charn() {
cout << "                     "<<endl;
cout << " 888   88              " <<endl;
cout << " 88 8  88             " <<endl;
cout << " 88  8 88            " <<endl;
cout << " 88   888            " <<endl;
cout << " 88    88           " <<endl;
cout << "                " <<endl;
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}