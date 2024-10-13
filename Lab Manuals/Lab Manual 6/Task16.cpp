#include <iostream>
using namespace std;

float calculate(int budget, string category, int people)
{
    float total, amount;
    
    if (people > 0 && people < 4){ total = budget - (0.75 * budget);}
    if (people > 4 && people < 10){ total = budget - (0.60 * budget);}
    if (people > 9 && people < 25){ total = budget - (0.50 * budget);}
    if (people > 24 && people < 50){ total = budget - (0.40 * budget);}
    if (people > 49){ total = budget - (0.25 * budget);}
    if (category == "VIP"){ amount = total - (people * 499.99);}
    if (category == "Normal"){ amount = total - (people * 249.99);}

    return amount;
}

main()
{
    int budget, people;
    string category;
    float result;
    cout << "Enter your budget: ";
    cin >> budget;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    cout << "Enter the no. of people: ";
    cin >> people;
    result = calculate( budget, category,  people);
    if (result < 0){cout << "Not Enough!!! You need " << result * (-1)<< " QR more.";}
    if (result >= 0){cout << "Yes, it's enough. Left amount in QR is " << result;}
}