#include <iostream>
using namespace std;
main() {
float vprice;
float fprice;
int nov;
int nof;
cout << "Price of Veg per kg in coins" <<endl;
cin >> vprice;
cout << "Price of Fruit per kg in coins" <<endl;
cin >> fprice;
cout << "Amount of Vegs in kgs" <<endl;
cin >> nov;
cout << "Amount of Fruits in kgs" <<endl;
cin >> nof;
cout << "Total Earning in Rupees is " << (vprice * 0.5154 * nov) + (fprice * 0.5154 * nov) <<endl;
}