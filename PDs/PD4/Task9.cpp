#include<iostream>
using namespace std;
void f(int a, int b);

main()
{
int a, b;
cout << "Enter first number: ";
cin >> a;
cout << "Enter second number: ";
cin >> b;
f(a, b);

}

void f(int a, int b)
{
if( a - b == 0 ) {cout<<"TRUE";}
if( a - b != 0 ) {cout<<"FALSE";}

}