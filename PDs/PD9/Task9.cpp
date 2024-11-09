#include<iostream>
using namespace std;
void dance(char pin[])
{
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (pin[i] <= '9' && pin[i] >= '0')
        {
            count++;
        }
    }
    if(count != 4){cout << "INVALID INPUT";}
    for (int i = 0; i < 4; i++)
    {
        int digit = pin[i] - '0';
        int result = (digit + i) % 10; 
        cout << " " << moves[result] << ",";
    }
}
main()
{
    char pin[4];
    cout << "Enter a 4-digit PIN: ";
    cin >> pin;
    dance(pin);
}