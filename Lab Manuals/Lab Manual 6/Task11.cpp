#include <iostream>
using namespace std;

string check(char gender, int age)
{
    string x;
    if(gender == 'm')
    {
        if(age < 16){x = "Master";}
        if(age > 15){x = "Mr";}
    }
    if(gender == 'f')
    {
        if(age < 16){x = "Miss";}
        if(age > 15){x = "Ms";}
    }
    return x;
}

main()
{
    char gender;
    int age;
    cout << "Enter your gender (m for male, f for female): ";
    cin >> gender;
    cout << "Enter your age in years: ";
    cin >> age;
    cout << "Your name should start with " << check(gender, age);
}