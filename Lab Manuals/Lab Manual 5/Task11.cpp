#include<iostream>
using namespace std;

int f(int x);

main()
{
int x, a, b, c, result;
cout << "Enter any three digit integer: ";
cin >> x;
result = f(x);
if (result == 1) {cout << "Symetrical";}
if (result == 0) {cout << "Not Symetrical";}
}

int f(int x)
{
int a, b, c;
a = x / 100;
b = (x%10)%10;
c = (x%10);
if ( a == c ) {return 1;}
if ( a != c ) {return 0;}
}