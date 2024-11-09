#include<iostream>
using namespace std;
int time(string array[], int size)
{
    int count = size*2;
    for (int i = 0; i < size-1; i++)
    {
        if (array[i] != array[i+1])
        {
            count++;
        }
    }
    return count;
}
main()
{
    int size;
    cout << "Enter the no. of squares in the pattern: ";
    cin >> size;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the color " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Total Time: " << time(array, size);
}