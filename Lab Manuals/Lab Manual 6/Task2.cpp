#include <iostream> 
using namespace std;

string check(int num)
{
string result;
int sum = (num%10) + ((num/10)%10) + (((num/10)/10)%10);
if (sum%2 == num%2) {result = "True";}
else {result = "False";}
return result; 
}

main()
{
int num;
cout << "Enter a 3-digit number: ";
cin >> num;
cout << check(num);
}