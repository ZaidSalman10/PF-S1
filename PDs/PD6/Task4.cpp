#include <iostream>
using namespace std;

float amount(char type, char time, int min)
{ 
    float amount;   
    if(type == 'R' || type == 'r')
    {
        if(min <= 50){amount = 10;}
        if(min > 50){amount = 10 + (0.20 * (min - 50));}
    }
    if(type == 'p' || type == 'p')
    {
        if(time == 'D' || time == 'd' )
        {
            if(min <= 75){amount = 25;}
        if(min > 75){amount = 25 + (0.10 * (min - 75));}  
        }
        if(time == 'N' || time == 'n' )
        {
            if(min <= 100){amount = 25;}
        if(min > 100){amount = 25 + (0.05 * (min - 100));}  
        }
    }
    return amount;
}
main()
{
    char type, time;
    int min;
    cout << "Enter the type of service (R/r for regular, P/p for premium): ";
    cin >> type;
    cout << "Enter the time of the call (D/d for day, N/n for night): ";
    cin >> time;
    cout << "Enter the number of minutes used: ";
    cin >> min;
    cout << "Total minutes used: "<< min << " minutes" <<endl;
    cout << "Service type: " << type <<endl;
    cout << "Amount Due: " <<amount(type, time, min)<< "$";
}