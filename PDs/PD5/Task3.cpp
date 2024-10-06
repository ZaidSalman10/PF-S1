#include <iostream>
using namespace std;
float total(char vehicle, float price);
main()
{
char vehicle;
float price, result;
cout << "Enter the vehicle type (M, E, S, V, T): ";
cin >> vehicle;
cout << "Enter the price of the vehicle: $";
cin >> price;
result = total( vehicle, price);
cout << "Final price of the car is $" << result <<endl;
}

float total(char vehicle, float price)
{
float tax,finalprice;
if (vehicle = 'M') {tax = price * (6/100.0); }
if (vehicle = 'E') {tax = price * (8/100.0);  }
if (vehicle = 'S') {tax = price * (10/100.0);}
if (vehicle = 'V') {tax = price * (12/100.0);}
if (vehicle = 'T') {tax = price * (15/100.0);}
finalprice = tax + price;
return finalprice;
}