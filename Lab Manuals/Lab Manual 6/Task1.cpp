#include <iostream>
using namespace std;

string compare(int n1, int n2)
{
string out;
if ( n1 > n2 ) {out = "(True)";}
else {out = "(False)";}
return out;
}

main()
{
int n1, n2;
cout << "Enter 1st Digit: ";
cin >> n1;
cout << "Enter 2nd Digit: ";
cin >> n2;
cout << compare(n1, n2);
}