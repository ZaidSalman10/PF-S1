#include<iostream>
using namespace std;
main()
{
    int size, num;
    cout << "Enter the size of the array:";
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number " << i + 1 << ": ";
        cin >> array[i];
    }
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        num = array[i];
        if (num == 7){found = true; break;}
        while (num > 9) {
            if (num % 10 == 7) 
            { 
                found = true;
                break;
            }
            num /= 10;
        }
        if (found){break;} 
    }
    if(found){cout << "BOOM!";}
    else{cout << "7 is Not Found";}
}