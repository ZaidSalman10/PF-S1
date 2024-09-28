#include<iostream>
using namespace std;

f(int x, int y)
{
if(y-x <= 6) {cout << "TRUE" <<endl;}
if(y-x > 6) {cout << "FALSE" <<endl;}
}

main()
{
int x, y;
cout << "Enter your place: ";
cin >> x;
cout << "Enter your friend's place: ";
cin >> y;
f(x, y);
}