#include <iostream>
#include <windows.h>
using namespace std;
 
void gotoxy(int x, int y);
void maze();
void move(int x, int y);

main()
{
int x = 4, y = 2;
system ("cls");
maze();
while(y < 18)
    {
    move (x, y);
    y = y+1;
    if(y == 17) 
{
    while(y>1)
    {
    move (x, y);
    y = y - 1;
    }
}
    }

}

void move(int x, int y)
{
gotoxy(x, y);
cout << "P" <<endl;
Sleep(300);
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