#include <iostream>
using namespace std;
main() {
int rupee = 200;
int inputValue;
int convertedValue;
cout << "1$=" << rupee << "rupees" << endl;
cin >> inputValue;
convertedValue= rupee * inputValue;
cout << convertedValue;
}