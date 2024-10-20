#include <iostream>
using namespace std;

void f(int length)
{
    int num1 = 0;
    int num2 = 1;
    for (int i = 0; i <= length; i++)
    {
        int series = num1 + num2;
        cout << series <<", ";
        num1 = num2;
        num2 = series;
    }
    
}

main()
{
    int length;
    cin >> length;
    f(length);
}