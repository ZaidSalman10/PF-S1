#include<iostream>
using namespace std;

int f(int n1)
{
int total;
total = n1 * 5;
return total;
}


main(){
int n1, result;
cout << "Enter a number: ";
cin >> n1;
result = f(n1);
cout << "Result: "<< result;
}