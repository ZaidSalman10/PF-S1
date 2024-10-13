#include <iostream>
using namespace std;

string status(int marks)
{
	string status;
	if(marks > 50){ status = "Pass!";} 
	else { status = "Fail!";}	 
	return status;
}

main()
{
	int marks;
	cout << "Enter your marks: ";
	cin >> marks;
	cout << "--->" <<status(marks);
}


