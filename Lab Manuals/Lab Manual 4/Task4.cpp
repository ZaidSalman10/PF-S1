#include <iostream>
using namespace std;
void f(float x);
main()
{
float x;
cout << "Enter the distance: ";
cin >> x;
f(x);
}

void f(float x)
{
float fuel;
fuel = x * 10;
cout << "The total fuel used by car is " << fuel <<endl;
}