#include <iostream>
using namespace std;

main() 
{
    int n, p = 1, c = 0, num = 2;
    cout << "Enter a number: ";
    cin >> n;
    while (c < n) {
        int prime = 1;
        for (int x = 2; x < num; x++)
        { if (num % x == 0) 
            {
                prime = 0;
            }
        }
        if(prime) {p *= num, c=c+1;}
        num = num + 1;
    }
    cout << p;
}