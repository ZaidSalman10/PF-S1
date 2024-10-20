#include<iostream>
using namespace std;

int check(int num, int digit)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        int result = 0;
        
        while (num > 0 || num < 0)
        {
          int num1 = num%10;
            if(num1 == digit)
            result = result + 1;
            num = num/10;
        }
        return result;
    }   
}

int main()
{
    int num, digit;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a digit to check its frequency: ";
    cin >> digit;
    cout << check(num, digit);
}