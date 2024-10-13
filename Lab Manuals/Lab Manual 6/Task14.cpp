#include <iostream>
using namespace std;

float calculate(string type, int rows, int columns)
{
    float total;
    if(type == "Premier"){total = rows * columns * 12;}
    if(type == "Normal"){total = rows * columns * 7.5;}
    if(type == "Reduced"){total = rows * columns * 5;}
    return total;
}  

main()
{
    string type;
    int rows, columns;
    cout << "Enter the type of screening (Normal, Premier, Reduced): ";
    cin >> type;
    cout << "Enter the no. of rows: ";
    cin >> rows;
    cout << "Enter the no. of columns: ";
    cin >> columns;
    cout << "Total Amount: " <<calculate(type, rows, columns) << " EUR";
}