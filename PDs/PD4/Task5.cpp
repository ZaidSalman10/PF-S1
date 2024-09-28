#include<iostream>
#include<windows.h>
using namespace std;

void menu();
void gotoxy(int x, int y);
void aggregate1(string name1, int matric1, int inter1, int ecat1);
void compare(string name1, string name2, int ecat1, int ecat2);


main()
{
string name1, name2;
int matric1, matric2, inter1, inter2, ecat1, ecat2;
system("cls");
menu();
cout << "Enter your name: ";
cin >> name1;
cout << "Enter your marks in SSC: ";
cin >> matric1;
cout << "Enter your marks in HSSC Part 1: ";
cin >> inter1;
cout << "Enter your ecat score: ";
cin >> ecat1;

aggregate1( name1, matric1, inter1, ecat1);
cout << "Enter your name: ";
cin >> name2;
cout << "Enter your marks in SSC: ";
cin >> matric2;
cout << "Enter your marks in HSSC Part 1: ";
cin >> inter2;
cout << "Enter your ecat score: ";
cin >> ecat2;
aggregate1( name2, matric1, inter1, ecat2);
compare( name1, name2, ecat1, ecat2);
}

void menu()
{
gotoxy(50, 3);
cout << "                                                                   " <<endl;
gotoxy(50, 4);
cout << "                                                                   " <<endl;
gotoxy(50, 5);
cout << "   88        88      8888      8888        8888     8888888         " <<endl;
gotoxy(50, 6);
cout << "   88        88     88  88     88 88      88 88   88               " <<endl;
gotoxy(50, 7);
cout << "   88        88    88    88    88  88    88  88   88               " <<endl;
gotoxy(50, 8);
cout << "   88        88   88      88   88    88888   88     8888888         " <<endl;
gotoxy(50, 9); 
cout << "   88        88   8888888888   88            88            88 " <<endl;
gotoxy(50, 10);
cout << "   88        88   88      88   88            88            88 " <<endl;
gotoxy(50, 11);
cout << "    8888888888    88      88   88            88     8888888 " <<endl;
gotoxy(50, 12);
cout << "                                                                   " <<endl;
gotoxy(50, 13);
cout << "                                                                   " <<endl;
}

void aggregate1(string name1, int matric1, int inter1, int ecat1)
{

cout << "Your current aggregate is "<< ((matric1 * 0.3 / 1100) + (inter1 * 0.3 / 550) + (ecat1 * 0.4 / 400)) * 100<<endl;
}

void compare(string name1, string name2, int ecat1, int ecat2)
{

if(ecat1 < ecat2) {cout << "Roll No 1: " << name2 <<endl;}
if(ecat1 > ecat2) {cout << "Roll No 1: " << name1 <<endl;}
}

void gotoxy(int x, int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}