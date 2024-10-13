#include<iostream>
using namespace std;

string action(string temp, string humi)
{
    if(temp == "Warm" && humi == "Humid"){return "Recommended Activity: Swimming";}
    if(temp == "Warm" && humi == "Dry"){return "Recommended Activity: Tennis";} 
    if(temp == "Cold" && humi == "Humid"){return "Recommended Activity: Watch TV";} 
    if(temp == "Cold" && humi == "Dry"){return "Recommended Activity: BasketBall";} 
}

main()
{
    string temp, humi;
    cout << "Select Temperature (Warm/Cold): ";
    cin >> temp;
    cout << "Select Humidity Condition (Humid/Dry): ";
    cin >> humi;
    cout << action( temp,  humi) ;
}