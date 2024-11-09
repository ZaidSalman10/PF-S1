#include<iostream>
using namespace std;
void change(int array[], int times)
{
    int result = 0;
    for (int i = 0; i < 3; i++)
    {
        if (array[i] % 2 == 0) result = array[i] - (2*times);
        else result = array[i] + (2*times);
        cout << result << ", ";
    }
}
main()
{
    int array[3];
    int times;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the number " << i + 1 << ": ";
        cin >> array[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> times;
    change(array, times);
}