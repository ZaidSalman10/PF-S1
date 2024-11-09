#include<iostream>
using namespace std;

main()
{
    int nums[5];
    int x = 1;
    int i = 0;
    for ( i = 0; i < 5; i++)
    {
    cout << "Enter the number "<< x << ": ";
    cin >> nums[i];
    x++;
    }
    int sum = 0;
    for ( i = 0; i < 5; i++)
    {
        sum = sum + nums[i];
    }
    cout << "Sum: " << sum <<endl;
    cout << "Average: " << (sum/5);
    
}