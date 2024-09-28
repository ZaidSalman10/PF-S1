#include <iostream>
using namespace std;
void f(float x);
main()
{
float x;
cout << "Enter the distance: ";
cin >> x;
if (x >= 10) {f(x);}
else {cout << "Minimum Fuel needed = 100 or Minimum Distance needed = 10 for initiation";}
}

void f(float x)
{
float fuel;
fuel = x * 10;
cout << "The total fuel used by car is " << fuel <<endl;
}