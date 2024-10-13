#include <iostream>
using namespace std;

string checkDress(float cost, string brand)
{
    if (cost < 1500)
    {
        if (brand == "MTJ")
        {
        return "Congratulations! You can buy the dress.";
        }
        if (brand != "MTJ")
        {
        return "Sorry, only MTJ brand is allowed.";
        }
    }

    if (cost >= 1500)
    {
    return "Sorry, the dress is too expensive.";
    }

}

int main()
{
    float cost;
    string brand;
    cout << "Enter the dress cost: $";
    cin >> cost;
    cout << "Enter the dress brand: ";
    cin >> brand;
    string result = checkDress(cost, brand);
    cout << result;
}
