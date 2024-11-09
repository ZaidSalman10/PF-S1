#include<iostream>
using namespace std;

main()
{
    int nums[5];
    cout << "Enter the 1st number: ";
    cin >> nums[0];
    cout << "Enter the 2nd number: ";
    cin >> nums[1];
    cout << "Enter the 3rd number: ";
    cin >> nums[2];
    cout << "Enter the 4th number: ";
    cin >> nums[3];
    cout << "Enter the 5th number: ";
    cin >> nums[4];
    cout << endl;
    cout << "The 1st element in location nums{0} is: " << nums[0] << endl;
    cout << "The last element in location nums{4} is: " << nums[4] << endl;
}