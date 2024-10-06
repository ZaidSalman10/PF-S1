#include<iostream>
using namespace std;
int timetravel(int hour, int min);
main()
{
int hour, min, hour2, min2, hour3, min3, time, result;
cout << "Enter time in hours (24hour format): ";
cin >> hour;
cout << "Enter time in minutes (1-59): ";
cin >> min;
result = timetravel(hour, min);
cout << result;
}

int timetravel(int hour, int min)
{
int hour2, min2, hour3, min3, time;
min2 = min + 15;
if(min2 > 59) {min3 = min2 % 60;
               hour2=hour+1;
               time = (hour2*100) + min3;}
if(hour2 > 23) {hour3 = hour2 % 24;
                time = (hour3*100) + min3;}
if(min2 < 60) {time = (hour*100) + min2;}
return time;
}
