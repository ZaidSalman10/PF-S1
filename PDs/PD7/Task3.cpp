#include<iostream>
using namespace std;

void up(int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int a = rows; a >= x; a--)
        {
            cout << " ";
        }
        for (int b = 0; b <= x; b++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
}

void low(int rows)
{
    for (int x = 0; x < rows; x++)
    {
        for (int a = 0; a <= x; a++)
        {
            cout << " ";
        }
        for (int b = rows; b >= x; b--)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}

int main()
{
    int rows;
    cout << "Enter No. of Rows: ";
    cin >> rows;
    up(rows);
    low(rows);
}