#include <iostream>
using namespace std;
void correct(string a);
void wrong(string b);
main()
{
int x;
cout << "Enter your age: ";
cin >> x;
string a;
string b;
if (x > 17) { correct(a); }
if (x < 18) { wrong(b); }
}

void correct(string a) 
{
a = "You are eligible to cast vote";
cout << a <<endl;
}

void wrong(string b) 
{
b = "You are not eligible to cast vote";
cout << b <<endl;
}


