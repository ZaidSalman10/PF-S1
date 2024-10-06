#include<iostream>
using namespace std;

int f(int n1);

main()
{
int z, n1;
cout << "Enter any interger: ";
cin >> n1;
z = f(n1);
if (z == 0) {cout << "The given number is even";}
if (z == 1) {cout << "The given number is odd";}

}

int f(int n1)
{
int n2;
n2 = n1 % 2;
if ( n2 == 1 ) {return 1;}
if ( n2 == 0 ) {return 0;}
}