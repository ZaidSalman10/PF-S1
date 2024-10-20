#include<iostream>
using namespace std;
void counting();
main()
{
    counting();
}
void counting()
{
    cout << "(Counting 1-10)" <<endl;
    for (int i = 1; i < 11; i++)
    {
        cout << i <<endl;
    }   
}