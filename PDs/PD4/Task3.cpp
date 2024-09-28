#include <iostream>
#include <windows.h>
using namespace std;
 
void gotoxy(int x, int y);
void maze();
void move(int x, int y);

main()
{
int x = 10, y = 10;
system ("cls");
maze();
move (x, y);

}

void move(int x, int y)
{
gotoxy(x, y);
cout << "P" <<endl;
Sleep(1000);
gotoxy(x, y);
cout << " " <<endl;
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void maze()
{
cout << "###########################################################" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "#                                                         #" <<endl;
cout << "###########################################################" <<endl;
}

