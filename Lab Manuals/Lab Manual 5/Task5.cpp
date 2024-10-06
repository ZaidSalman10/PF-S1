#include <iostream>
#include <cmath>
using namespace std;

main()
{
int n1, n2;
cout << "Enter the base number: ";
cin >> n1;
cout << "Enter the exponent: ";
cin >> n2;
cout << n1 << "^"<<n2 << " = " << pow(n1, n2);
}