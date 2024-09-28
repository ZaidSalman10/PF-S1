#include <iostream>
using namespace std;
main() {
float vi;
float a;
float t;
cout << "Enter Initial Velocity in m/s" <<endl;
cin >> vi;
cout << "Enter Acceleration in m/s.s" <<endl;
cin >> a;
cout << "Enter Time in sec" <<endl;
cin >> t;
cout << "Final velocity of the car is " << (a * t) + vi << "m/s" <<endl;
} 