#include <iostream>
using namespace std;

float calculate1(float volume, float pipe1, float hours);
float calculate2(float volume, float pipe2, float hours);

main()
{
float volume, pipe1, pipe2, hours, value1, value2, result;
cout << "Enter volume of pool in litres [1-10000]: ";
cin >> volume;
cout << "Enter flow rate of water per hour through pipe 1 [1-5000]: ";
cin >> pipe1;
cout << "Enter flow rate of water per hour through pipe 2 [1-5000]: ";
cin >> pipe2;
cout << "Enter the no. of hours when worker is absent [1-24]: ";
cin >> hours;
value1 = calculate1(volume, pipe1, hours);
value2 = calculate2(volume, pipe2, hours);
result = value1 + value2;
cout << "Pipe1 = " << value1 << "% , Pipe2 = " << value2 << "% , Pool filled = " << result << "%" << endl;
if (result <= 100) {cout << "%age space left in pool for more water is " << 100 - result << "%" <<endl;}
if (result > 100) {cout << "The pool has been overflown by " << result - 100 << "%";}
}

float calculate1(float volume, float pipe1, float hours)
{
float flow1, percent1;
flow1 = pipe1 * hours;
percent1 = (flow1 / volume) * 100;
return percent1;
}

float calculate2(float volume, float pipe2, float hours)
{
float flow2, percent2;
flow2 = pipe2 * hours;
percent2 = (flow2 / volume) * 100;
return percent2;
}