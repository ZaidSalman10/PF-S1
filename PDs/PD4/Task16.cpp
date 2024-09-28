#include <iostream>
using namespace std;

f(int holidays)
{
int workingdays, time;
workingdays = 365 - holidays;
time = (workingdays * 63) + (holidays * 127);
cout << "The diiference from current year's norm is " << (30000 - time) << "min" <<endl;
if(time < 30000) {cout << "Tom will sleep well" <<endl;}
if(time > 30000) {cout << "Tom will run away" <<endl;}
}

main()
{
int holidays;
system("cls");
cout << "Enter the no of holidays owner got in a year: ";
cin >> holidays;
f(holidays);
}