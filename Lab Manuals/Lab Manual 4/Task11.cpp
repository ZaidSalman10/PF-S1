#include<iostream>
using namespace std;
void even(string z);
void odd(string m);
main()
{
string m;
string z;
int n;
cout << "Enter any integer: ";
cin >>n;

if (n % 2 == 0) {even(z);}
if (n % 2 == 1) {odd(m);}
}

void even(string z)
{
z = "This is even number";
cout << z;
}

void odd(string m)
{
m = "This is odd number";
cout << m;
}
