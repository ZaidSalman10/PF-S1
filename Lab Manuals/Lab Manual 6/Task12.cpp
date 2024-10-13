#include <iostream>
using namespace std;

string compare(int a, int b, int c)
{
    if(a == b && b == c) {return "Yes";}   
    else {return "No";}
}
main()
{
    int a, b, c;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "Enter 3rd number: ";
    cin >> c;
    cout << compare(a, b, c);
}