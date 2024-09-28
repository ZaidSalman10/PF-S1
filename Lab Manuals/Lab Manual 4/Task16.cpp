#include <iostream>
using namespace std;

void p(int total);

void f(int final) 
{
int payment;
cout << "Enter total purchase amount: Rs";
cin >> payment; 
int discount;
discount = payment * 0.05; 
final = payment - discount; 
cout << "Final price of the product: Rs"<< final <<endl;
}


main()
{
while (true)
{
string day;
int total;
int payment;
int price;
cout << "Enter Day: ";
cin >> day;
if ( day == "sunday" ) { p(total); } 
else {f(payment);}
}
}

void p(int total) 
{
int payment;
cout << "Enter total purchase amount: Rs";
cin >> payment;
int discount;
discount = payment * 0.1; 
total = payment - discount; 
cout << "Final price of the product: Rs"<< total <<endl;
}
