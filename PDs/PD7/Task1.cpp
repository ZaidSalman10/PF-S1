#include<iostream>
using namespace std;

string f(int rows)
{
    for (int x = 1; x <= rows; x++)
    {
        for (int y = 1; y <= x; y++)
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