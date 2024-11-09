#include<iostream>
using namespace std;

main()
{
    int nums[5];
    int x = 1;
    for (int i = 0; i < 5; i++)
    {
    cout << "Enter the number "<< x << ": ";
    cin >> nums[i];
    x++;
    }
    
    cout << "The 1st element in location nums{0} is: " << nums[0] << endl;
    cout << "The 2nd element in location nums{1} is: " << nums[1] << endl;
    cout << "The 3rd element in location nums{2} is: " << nums[2] << endl;
    cout << "The 4th element in location nums{3} is: " << nums[3] << endl;
    cout << "The 5th element in location nums{4} is: " << nums[4] << endl;
}