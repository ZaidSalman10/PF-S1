#include <iostream>
using namespace std;
void add(float a, float b);
void min(float a, float b);
void mul(float a, float b);
void divi(float a, float b);
main()
{
float a;
float b;
char op;
cout << "Enter no 1: ";
cin >> a;
cout << "Enter no 2: ";
cin >>b;
cout <<"Enter operator (+,-,*,/): ";
cin >> op;
if (op == '+') { add(a, b); }
if (op == '-') { min(a, b); }
if (op == '*') { mul(a, b); }
if (op == '/') { divi(a, b); }
}

void add(float a, float b)
{
float sum;
sum = a + b;
cout <<"Sum: "<< sum <<endl;
}

void min(float a, float b) 
{
float sub;
sub = a - b;
cout << "Diff: " << sub <<endl;
}

void mul(float a, float b)
{
float product;
product = a * b;
cout << "Product: " << product <<endl;
}

void divi(float a, float b)
{
float divison;
divison = a / b;
cout << "Result: " << divison <<endl;
}