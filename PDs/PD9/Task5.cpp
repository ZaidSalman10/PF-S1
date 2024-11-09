#include<iostream>
using namespace std;
main()
{
    string array[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> array[i];
    }
    int output = 0;
    for (int i = 0; i < 3; i++)
    {
        if (array[i] == array[i + 1])
        {
            output++;
        }
    }
    if(output == 3) cout << "TRUE";
    else cout << "FALSE";
}