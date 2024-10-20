#include<iostream>
using namespace std;

int digits(int num)
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
            num = num/10;
            result = result + 1;
        }
        return result;
        
    }
    
}

main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << digits(num);
}
