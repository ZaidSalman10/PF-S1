#include <iostream>
using namespace std;

void f(int roll, int people)
{
int tp;
int days;
tp = roll * 500;
days = tp / (people * 57);
if(days < 15) {cout << "Tissue papers remained for " << days << " days only. You need to buy more tissue papers" <<endl;}
if(days > 15) {cout << " Tissue papers remained are enough for" << days << " days." <<endl;}
}

main()
{
int roll;
int people;
cout << "No of People: ";
cin >> people;
cout << "No of roll: ";
cin >> roll;
f(roll, people);
}


