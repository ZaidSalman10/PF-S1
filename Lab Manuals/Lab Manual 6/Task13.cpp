#include <iostream>
using namespace std;

string check(float speed)
{
    if(speed < 11){return "Slow";}
    if(speed > 10 && speed < 51){return "Average";}
    if(speed > 50 && speed < 151){return "Fast";}
    if(speed > 150 && speed <1001){return "Ultra-fast";}
    if(speed > 1000){return "You are an Aeroplane (Extremely-Fast)";}
}

main()
{
    float speed;
    cout <<"Enter your current speed: ";
    cin >> speed;
   cout << check(speed);
}