#include <iostream>
using namespace std;
main() {
float min;
float fps;
cout << "Enter Minutes" <<endl;
cin >> min;
cout << "Enter FPS" <<endl;
cin >> fps;
cout << "Total No of Frames : " << fps * (min * 60) <<endl;
} 