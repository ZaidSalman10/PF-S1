#include <iostream>
using namespace std;

float bill(string day, string month, int price)
{
float bill = price;
if(day == "sunday" && ( month=="october" || month == "march"  || month == "august"))
{
    bill = price - (price * 0.1);
}
return bill;
}

main()
{
string day, month;
int price;
cout << "Enter day: ";
cin >> day;
cout << "Enter month: ";
cin >> month;
cout << "Enter total purchase amount: ";
cin >> price;
cout << "Payable Amount: " << bill(day, month, price);
}