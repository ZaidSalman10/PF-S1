#include<iostream>
using namespace std;


void f(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        
    }
    cout << "Dots in the triangle: " <<sum; 
}

main()
{
    int num;
    cout << "Enter the number of triangle: ";
    cin >> num;
    f(num);
}
