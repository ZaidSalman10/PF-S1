#include<iostream>
using namespace std;
int common(char array1[], char array2[])
{
    int count = 0;
    for (int i = 0; array1[i] != '\0'; i++)
    {
        for (int j = 0; array2[j] != '\0'; j++)
        {
            if (array1[i] == array2[j])
            {
                count++;
            }
        }
    }
    return count;
}
main()
{
    char array1[100];
    char array2[100];
    cout << "Enter string 1: ";
    cin >> array1;
    cout << "Enter string 2: ";
    cin >> array2;
    cout << "Total Common letter are: ";
    cout <<common( array1,  array2);
}