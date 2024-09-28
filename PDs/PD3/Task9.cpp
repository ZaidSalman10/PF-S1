#include <iostream>
using namespace std;
main() {
int num;
cout << "Enter a 4-digit Interger" <<endl;
cin >> num;
cout << "Sum of all Digits of given integer: " << num % 10 + (num / 10) % 10 + ((num / 10) / 10) % 10 + (((num / 10) / 10) / 10) % 10  <<endl;
}