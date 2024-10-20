#include<iostream>
using namespace std;

void f(int rows)
{
    for (int x = rows; x > 0; x = x-1)
    {
        for (int y = 1; y <= x; y=y+1)
        {
            cout << "*";
        }
        cout << endl;
    }   
}

main()
{
    int rows;
    cout << "Enter No. of Rows: ";
    cin >> rows;
    f(rows);
}