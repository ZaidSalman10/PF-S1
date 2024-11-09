#include<iostream>
using namespace std;
main()
{
    string movies[5]= {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price = 500;
    string name;
    cout << "Enter movie name: ";
    cin >> name;
    for (int i = 0; i < 5; i++)
    {
        if (name == movies[i])
        {
            if (i % 2 != 0)
            {
                price = 450;
            }
            else
            {
                price = 475;
            }
        }
    }
    cout << "Bill: PKR" <<price;
} 
