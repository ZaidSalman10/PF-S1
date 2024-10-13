#include <iostream>
using namespace std;

float price(string fruit, string day, float quantity)
{
    float price;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday"  || day == "Thrusday"  || day == "Friday")
    {
        if(fruit == "Banana"){price = (2.5 * quantity);}
        if(fruit == "Apple"){price = (1.2 * quantity);}
        if(fruit == "Orange"){price = (0.85 * quantity);}
        if(fruit == "Grapefruit"){price =  (1.45 * quantity);}
        if(fruit == "Kiwi"){price = (2.7 * quantity);}
        if(fruit == "Pineapple"){price = (5.5 * quantity);}
        if(fruit == "Grapes"){price = (3.85 * quantity);}
    }
    if (day == "Sunday" || day == "Saturday")
    {
        if(fruit == "Banana"){price = (2.7 * quantity);}
        if(fruit == "Apple"){price = (1.25 * quantity);}
        if(fruit == "Orange"){price = (0.9 * quantity);}
        if(fruit == "Grapefruit"){price = (1.6 * quantity);}
        if(fruit == "Kiwi"){price = (3.00 * quantity);}
        if(fruit == "Pineapple"){price = (5.6 * quantity);}
        if(fruit == "Grapes"){price = (4.2 * quantity);}
    }
    return price;
}

main()
{
    string fruit, day;
    float quantity;
    cout << "Select the fruit from the list: "<<endl;
    cout << "Banana" << endl;
    cout << "Apple" << endl;
    cout << "Orange" << endl;
    cout << "Grapefruit" << endl;
    cout << "Kiwi" << endl;
    cout << "Pineapple" << endl;
    cout << "Grapes" << endl;
    cout << "Enter Fruit: ";
    cin >> fruit;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter day(Monday/....../Sunday): ";
    cin >> day;
    cout << "Price: " << price(fruit, day, quantity);
}