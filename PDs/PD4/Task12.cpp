#include <iostream>
using namespace std;
void check(int speed)
{
if(speed < 101) {cout<< "You are driving great!"<<endl;}
if(speed > 100) {cout<< "Halt.......YOU WILL BE CHALLENGED!!!" <<endl;}
}
main()
{
system("cls");
int speed;
cout<< "Enter the speed of the vehicle: ";
cin >> speed;
check(speed);
}