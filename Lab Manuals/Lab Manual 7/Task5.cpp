#include <iostream>
using namespace std;
int sum()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + 1;
    }
    return sum;
}
main()
{
    cout << sum();
}
