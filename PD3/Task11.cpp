#include <iostream>
using namespace std;
main() {
int age;
int move;
cout << "Person's age in years" <<endl;
cin >> age;
cout << "Times he/she have moved" <<endl;
cin >> move;
cout << "Average Time in one house (in years) is " << age / (move + 1) <<endl;
}