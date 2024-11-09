#include<iostream>
using namespace std;
main()
{
    string fruit[4];
    int price[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the Fruit " << i + 1 << ": ";
        cin >> fruit[i];
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the price/kg for " << fruit[i] << ": ";
        cin >> price[i];
    }
    cout << "Enter Fruit Name:";
    string name;
    cin >> name;
    cout << "Enter Quantity in kgs: ";
    int quantity;
    cin >> quantity;
    for (int i = 0; i < 4; i++)
    {
        if (name == fruit[i])
        {
            cout << "Bill: " << price[i]*quantity <<endl;
        }
    }
}