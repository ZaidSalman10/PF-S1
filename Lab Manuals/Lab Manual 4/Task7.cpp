#include <iostream>
using namespace std;
void add(int a, int b);
main()
{
int a;
int b;
char op;
cout << "Enter no 1: ";
cin >> a;
cout << "Enter no 2: ";
cin >>b;
cout <<"Enter operator: ";
cin >> op;
if (op == '+') { add(a, b); }
}

void add(int a, int b)
{
int sum;
sum = a + b;
cout <<"Sum: "<< sum <<endl;
}