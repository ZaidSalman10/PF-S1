#include <iostream>
using namespace std;
main() {
float players;
float imposters;
cout << "No of Players" <<endl;
cin >> players;
cout << "No if Imposters" <<endl;
cin >> imposters;
cout << "Chances of imposter to be exposed : " << ( imposters / players ) * 100 << "%" <<endl;
} 