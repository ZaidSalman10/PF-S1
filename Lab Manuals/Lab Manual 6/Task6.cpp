#include <iostream>
using namespace std;

char grade(int marks)
{
if (marks < 50){return 'F';}
if (marks > 49 && marks < 61){return 'E';}
if (marks > 60 && marks < 71){return 'D';}
if (marks > 70 && marks < 81){return 'C';}
if (marks > 80 && marks < 86){return 'B';}
if (marks > 85){return 'A';}
}

main()
{
int marks;
cout << "Enter your marks: ";
cin >> marks;
cout << "Your grade is " << grade(marks);
}