#include <iostream>
#include <cmath>
using namespace std;

main()
{
float base, angle, height;
cout << "Enter base (in feet): ";
cin >> base;
cout << "Enter angle (in degree): ";
cin >> angle;

height = (tan((angle/57.2958)))*(base);
cout << "Height of the Tree is:  " << height;
}