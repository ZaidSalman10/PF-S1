#include <iostream>
using namespace std;

void add(int n1, int n2)
{
int sum;
sum = n1+n2;
cout <<"    " << sum << " is the sum.";
}

main()
{
cout << "Enter 1st Number: ";
int n1;
cin >> n1;
cout << "Enter 2nd Number: ";
int n2;
cin >> n2;
add(n1, n2);
}