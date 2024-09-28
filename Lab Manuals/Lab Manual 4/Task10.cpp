#include <iostream>
using namespace std;
void correct(string a);
void wrong(string b);
main()
{
int x;
cout << "Enter your Marks: ";
cin >> x;
string a;
string b;
if (x > 50) { correct(a); }
if (x < 51 ) { wrong(b); }
}

void correct(string a) 
{
a = "Passed! Congratulations.....!!!";
cout << a <<endl;
}

void wrong(string b) 
{
b = "Failed! Better luck next time.";
cout << b <<endl;
}


