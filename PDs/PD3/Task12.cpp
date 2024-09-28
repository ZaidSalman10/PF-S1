#include <iostream>
using namespace std;
main() {
int n;
int w;
int h;
cout << "No of sq meter I can paint" <<endl;
cin >> n;
cout << "Width of wall" <<endl;
cin >> w;
cout << "Height of wall" <<endl;
cin >> h;
cout << "No of walls we can paint: " << n / (w * h) <<endl;
}