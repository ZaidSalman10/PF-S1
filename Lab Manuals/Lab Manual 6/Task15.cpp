#include <iostream>
using namespace std;

float cheapest(int distance, string period)
{
    float price;
    if(distance < 20)
    {
        if(period == "Day"){ price = (0.79 * distance) + 0.7;}
        if(period == "Night"){ price = (0.90 * distance) + 0.7;}
    }
    if(distance > 19 && distance < 100){ price = (0.09 * distance);}
    if(distance > 99){ price = (0.06 * distance);}
    return price;
}

main()
{
    int distance;
    string period;
    cout << "Enter the distance in km: ";
    cin >> distance;
    cout << "Enter the period of the day (Day/Night): ";
    cin >> period;
    cout << "EUR " <<cheapest(distance, period);
}