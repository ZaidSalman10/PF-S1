#include <iostream>
using namespace std;

void f(float red, float white, float tulip)
{
float price;
price = (red * 2) + (white * 4.1) + (tulip * 2.5);
cout << "----------------------------------------------------------------------------------------------" <<endl;
if(price > 200) { cout << "The Total Bill is $" << price << "| The Discounted Bill is $" << price - (price * 0.2) <<endl;} 
if(price < 201) { cout << "The Total Bill is $" << price << ". No discount applied" <<endl;}
}

main()
{
float red, white, tulip;
cout << "Enter No of Red Roses: ";
cin >> red;
cout << "Enter No of White Roses: ";
cin >> white;
cout << "Enter No of Tulips: ";
cin >> tulip;
f(red, white, tulip);
}
