#include <iostream>
using namespace std;
main() {
string name;
int price1;
int price2;
int sold1;
int sold2;
float donation;
cout << "1. Movie name" <<endl;
cin >> name;
cout << "2. Adult ticket pricein $ " <<endl;
cin >> price1;
cout << "3. Child ticket price in $" <<endl;
cin >> price2;
cout << "4. The no of adults tickets sold" <<endl;
cin >> sold1;
cout << "5. The no of child tickets sold" <<endl;
cin >> sold2;
cout << "6. The %age of the amount to be donated in charity" <<endl;
cin >> donation;
cout << "Movie: " << name <<endl;
cout << "Total Profit: $" << (price1 * sold1) + (price2 * sold2) <<endl;
cout << "Donation: $" << ((price1 * sold1) + (price2 * sold2)) * donation / 100  <<endl;
cout << "Remaining amount: $" << ((price1 * sold1) + (price2 * sold2)) - (((price1 * sold1) + (price2 * sold2)) * donation / 100 ) <<endl;


} 