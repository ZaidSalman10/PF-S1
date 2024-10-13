#include <iostream>
using namespace std;

float circle(char letter, float value);
float square(char letter, float value);
float triangle(char letter, float value);
float hexagon(char letter, float value);

main()
{
char letter;
float value, peri;
cout << "Enter the shape (s for square, c for circle, t for triangle, h for hegagon): ";
cin >> letter;
cout << "Enter the value: ";
cin >> value;
if (letter == 's'){
peri = square(letter, value);}
if (letter == 'c'){
peri = circle(letter, value);}
if (letter == 't') {
peri = triangle(letter, value);}
if (letter == 'h') {
peri = hexagon(letter, value);}
cout << peri;
}

float square(char letter, float value)
{

return 4 * value;
}

float circle(char letter, float value)
{
return 6.28 * value;
}

float triangle(char letter, float value)
{
return 3 * value;
}

float hexagon(char letter, float value)
{
return 6 * value;
}


