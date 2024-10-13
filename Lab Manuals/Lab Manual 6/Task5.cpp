#include <iostream>
using namespace std;

int compare(int n1, int n2, int n3)
{
if(n1 > n2 && n1 > n3){ return n1;}
if(n2 > n1 && n2 > n3){ return n2;}
if(n3 > n1 && n3 > n2){ return n3;}
}

main()
{
int n1, n2, n3;
cout << "Enter 1st Number: ";
cin >> n1;
cout << "Enter 2nd Number: ";
cin >> n2;
cout << "Enter 3rd Number: ";
cin >> n3;
cout << "Greatest Number: " <<compare(n1, n2, n3);
}

