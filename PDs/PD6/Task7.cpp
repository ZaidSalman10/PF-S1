#include <iostream>
using namespace std;

string check(int hour1, int min1, int hour2, int min2)
{
    string status;
    if (hour1 > hour2){status = "Early";}
    if (hour1 < hour2){status = "Late";}
    if (hour1 == hour2)
    {
        if (min1 == min2){status = "On Time";}
        if (min1 > min2){status = "Early";}
        if (min1 < min2){status = "Late";}
    }
    return status;
}

float diff(string status, int hour1, int min1, int hour2, int min2)
{
    float diff;
    if (status == "Late")
    {
        diff = ((hour2 -  hour1) * 100 + (min2 - min1)) * -1;
    }
    if (status == "Early")
    {
        diff = (hour1 -  hour2) * 100 + (min1 - min2);
    }
    return diff;
}

main()
{
    string status;
    float result;
    int hour1, min1, hour2, min2;
    cout << "Enter exam starting time (hour): ";
    cin >> hour1;
    cout << "Enter exam starting time (min): ";
    cin >> min1;
    cout << "Enter student arriving time (hour): ";
    cin >> hour2;
    cout << "Enter student arriving time (min): ";
    cin >> min2;
    status = check(hour1, min1, hour2, min2);
    cout << status << endl;
    cout << "(hhmm. Eg : 100 means 1:00 and 2359 means 23:59)"<<endl;
    result = diff(status ,hour1, min1, hour2, min2);
    if (result < 0 && result > (-100)){cout << result * (-1) << " min after the start";}
    if (result > 0 && result < 100){cout << result << " min before the start";}
    if (result <= (-100)){cout << result * (-1) << " hr after the start";}
    if (result >= 100){cout << result  << " hr before the start";}
}
