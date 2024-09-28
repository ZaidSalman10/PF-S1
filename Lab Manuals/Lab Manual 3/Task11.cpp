#include <iostream>
using namespace std;
main() {
int pop;
int birth;
cout << "Current Population" <<endl;
cin >> pop;
cout << "Births/Month" <<endl;
cin >> birth;
cout << "In future, There maybe " << pop + (birth * 360) << " people." <<endl;
}