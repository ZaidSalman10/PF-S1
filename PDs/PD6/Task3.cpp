#include <iostream>
using namespace std;

string sign(int days, string month)
{
    if(month == "January")
    {
        if(days <= 19){return "Capricon";}
        if(days >= 20 && days <= 31){return "Aquarius";}
    }
    if(month == "February")
    {
        if(days <= 18){return "Aquarius";}
        if(days >= 19 && days <= 29){return "Pisces";}
    }
    if(month == "March")
    {
        if(days <= 20){return "Pisces";}
        if(days >= 21 && days <= 31){return "Aries";}
    }
    if(month == "April")
    {
        if(days <= 19){return "Aries";}
        if(days >= 20 && days <= 30){return "Taurus";}
    }
    if(month == "May")
    {
        if(days <= 20){return "Taurus";}
        if(days >= 21 && days <= 31){return "Gemini";}
    }
    if(month == "June")
    {
        if(days <= 20){return "Gemini";}
        if(days >= 21 && days <= 30){return "Cancer";}
    }
    if(month == "July")
    {
        if(days <= 22){return "Cancer";}
        if(days >= 23 && days <= 31){return "Leo";}
    }
    if(month == "August")
    {
        if(days <= 22){return "Leo";}
        if(days >= 23 && days <= 31){return "Virgo";}
    }
    if(month == "September")
    {
        if(days <= 22){return "Virgo";}
        if(days >= 23 && days <= 30){return "Libra";}
    }
    if(month == "October")
    {
        if(days <= 22){return "Libra";}
        if(days >= 23 && days <= 31){return "Scorpio";}
    }
    if(month == "November")
    {
        if(days <= 21){return "Scorpio";}
        if(days >= 22 && days <= 30){return "Sagittarius";}
    }
    if(month == "December")
    {
        if(days <= 19){return "Sagittarius";}
        if(days >= 20 && days <= 31){return "Capricon";}
    }
    else {return "ERROR*404(Invalid Input)";}
}

main()
{
    int days;
    string month;
    cout << "Enter the date: ";
    cin >> days;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Zodiac Sign: " <<sign( days, month);   
}