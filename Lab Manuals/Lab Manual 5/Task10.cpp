#include <iostream>
using namespace std;
string cap(string z);
string small(string z);
main()
{
string tiny,big,z;
cout << "Enter alphabet (A or a):  ";
cin >> z;
big = cap(z);
tiny = small(z);
cout << big << tiny; 
}

string cap(string z)
{
string cap; 
if (z == "A") {cap = "This is capital alphabet (A)";}
return cap;
}

string small(string z) 
{
string small;
if (z == "a") {small = "This is small alphabet(a)";}
return small;
}