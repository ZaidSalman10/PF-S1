#include <iostream>
using namespace std;
main() {
string name;
float marks1;
float marks2;
float marks3;
cout << "Student Name" <<endl; 
cin >> name;
cout << "Matric Marks" <<endl;
cin >> marks1; 
cout << "Inter Marks" <<endl;
cin >> marks2; 
cout << "ECAT Score" <<endl; 
cin >> marks3;
cout << "Your aggregate is " << (marks1 * 10 / 1100) + (marks2 * 40 / 550) + (marks3 * 50 / 400) <<endl;
}