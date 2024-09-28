#include<iostream>
using namespace std;
 
void f();

main()
{
system("cls");
f();
}


void f()
{
string value;
cout << "Enter 'true' or false': ";
cin >> value;
if(value == "true") {cout << "false"<<endl;}
if(value == "false") {cout << "true"<<endl;}
}