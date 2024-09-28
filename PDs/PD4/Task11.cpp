#include <iostream>
using namespace std;
void discount(string name, int price);
main()
{
string name;
int price;
cout << "Enter the country name (Pakistan, India, Ireland, England, Canada)" <<endl;
cin >> name;
cout << "Enter the price of ticket in $" <<endl;
cin >> price;
discount(name, price);
}

void discount(string name, int price)
{
if(name == "Pakistan") {cout<<"Final Price of ticket is: $" << price - (price * 0.05) <<endl;}
if(name == "Ireland") {cout<<"Final Price of ticket is: $" << price - (price * 0.1) <<endl;}
if(name == "India") {cout<<"Final Price of ticket is: $" << price - (price * 0.2) <<endl;}
if(name == "England") {cout<<"Final Price of ticket is: $" << price - (price * 0.30) <<endl;}
if(name == "Canada") {cout<<"Final Price of ticket is: $" << price - (price * 0.45) <<endl;}
}