#include<iostream>
using namespace std;

f(int hrs, int mins)
{
int t1, t2;
t1 = hrs * 60 ; 
t2 = mins;
if (t1 > t2) {cout << hrs <<endl;};
if (t2 > t1) {cout << mins <<endl;};
}

main()
{
int hrs, mins;
cout << "Enter Hours: ";
cin >> hrs;
cout << "Enter Minutes: ";
cin >> mins;
f(hrs, mins);
}