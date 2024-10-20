#include<iostream>
using namespace std;

void table()
{
    int num;
    cout << "Enter an integer to get its table: ";
    cin >> num;
    for (int i = 1; i < 11; i++)
    {
        
        cout << num << " x " << i << " = " << num * i << endl;
    }
    
}

main()
{
    table();
}