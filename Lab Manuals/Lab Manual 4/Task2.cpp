#include <iostream>
using namespace std;
void add();
main() {
    add();
    add();
}
void add()
{
    int n1, n2, sum1;
    cout << "Enter an Interger" <<endl;
    cin >> n1;
    cout << "Enter an Interger" <<endl;
    cin >> n2;
    sum1 = n1 + n2;
    cout << "The sum of given two integers is: " << sum1 <<endl;
}