#include <iostream>
using namespace std;
void f(float i);
main()
{
float i;
cout << "Enter measurement in inches: ";
cin >> i;
f(i);
}

void f(float i)
{
float ft;
ft = i / 12;
cout << "Measurement in fts: " << ft <<endl;
}