#include <iostream>
using namespace std;

int f(int hours, int days, int workers);

main()
{
int hours, days, workers, result;
cout << "Enter the no of hours needed: ";
cin >> hours;
cout << "Enter the no of days firm has: ";
cin >> days;
cout << "Enter the no of all workers: ";
cin >> workers;
result = f(hours, days, workers);
if(result >= 0) {cout << "Work will be done in time. " << result << "hrs will be left.";}
if(result < 0) {cout << "Work will not be done in time. " << result * (-1) << "hrs more required.";}
}

int f(int hours, int days, int workers)
{ float workingdays;
int time, workinghours;
workingdays = days - (0.1 * days);
workinghours = workingdays * (10 * workers);
time = workinghours - hours;
return time;
}