#include <iostream>
using namespace std;

float studioprice(string month, int days)
{
    float price1;
    if (month == "October" || month == "May")
    {
        if (days <= 7){price1 = 50 * days;}
        if (days > 7 && days < 15)
        {
            price1 = (50 * days) - ((50 * days) * 0.05);
        }
        if (days > 14)
        {
            price1 = (50 * days) - ((50 * days) * 0.3);
        }
    }
    if (month == "September" || month == "June")
    {
        if (days <= 14){price1 = 75.2 * days;}
        
        if (days > 14)
        {
            price1 = (75.2 * days) - ((75.2 * days) * 0.2);
        }
    }
    if (month == "August" || month == "July"){price1 = 76.0 * days;}
    return price1;
}

float apartmentprice(string month, int days)
{
    float price2;
    if (month == "October" || month == "May")
    {
        if (days <= 14){price2 = 65 * days;}
        if (days > 14)
        {
            price2 = (65 * days) - ((65 * days) * 0.1);
        }
    }
    if (month == "September" || month == "June")
    {
        if (days <= 14){price2 = 68.7 * days;}
        
        if (days > 14)
        {
            price2 = (68.7 * days) - ((68.7 * days) * 0.1);
        }
    }
    if (month == "August" || month == "July")
    {
        if (days <= 14){price2 = 77 * days;}
        
        if (days > 14)
        {
            price2 = (77 * days) - ((77 * days) * 0.1);
        }
    }
    return price2;
}

main()
{
    string month;
    int days;
    cout << "Enter the month(May, June, July, August, September or October): ";
    cin >> month;
    cout << "Enter the days of stay: ";
    cin >> days;
    cout << "Studio: " <<studioprice( month,  days)<< "$" <<endl;
    cout << "Apartment: " <<apartmentprice( month,  days)<< "$" <<endl;
}