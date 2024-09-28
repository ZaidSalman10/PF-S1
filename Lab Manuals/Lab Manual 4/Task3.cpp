#include <iostream>
using namespace std;
void add(int n1, int n2);
main(){ 
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    add(a, b);
}
void add(int n1, int n2)
{
int sum;
sum = n1 + n2;
cout << "Sum: " << sum <<endl;
}