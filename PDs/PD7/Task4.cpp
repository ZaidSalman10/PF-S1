#include<iostream>
using namespace std;

void amplify(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if((i%4) == 0){i=i*10;}
        cout << i << ", ";
        if((i%4) == 0) {i = i/10;}
    }
}

main()
{
    int num;
    cout << "Enter a number to amplify: ";
    cin >> num;
    amplify(num);
}
