#include<iostream>
using namespace std;

float vol(float h, float l, float w, string unit);

main()
{
float h, l, w, volume, result;
string unit;
cout << "Enter Height: ";
cin >> h;
cout << "Enter length: ";
cin >> l;
cout << "Enter width: ";
cin >> w;
cout << "Enter unit (mm/cm/m/km): ";
cin >> unit;
result = vol(h, l, w, unit);
cout << "The volume of the pyramid is " << result;
}

float vol(float h, float l, float w, string unit)
{
float volume, result;
volume = (h * l * w) / 3;
if (unit == "mm" ) {result  = volume * 1000000000;}
if (unit == "cm" ) {result  = volume * 1000000;}
if (unit == "m" ) {result  = volume * 1;}
if (unit == "km" ) {result  = volume / 1000000;}
return result;
}


