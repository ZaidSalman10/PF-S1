#include<iostream>
using namespace std;
char array[100];
string length(char array[]);
main()
{
    cout << "Enter a string: ";
    cin >> array;
    cout << length(array);
}
string length(char array[])
{
    int i = 0;
    while (array[i] != '\0'){i++;}
    if (i % 2 == 0){return "True";}
    else{return "False";}
}