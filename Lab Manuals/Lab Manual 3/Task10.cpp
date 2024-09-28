#include <iostream>
using namespace std;
main() {
int W = 3;
int D = 1;
int L = 0; 
int wins;
int draws;
int losses;
cout << "No of Wins" <<endl;
cin >> wins;
cout << "No of Draws" <<endl;
cin >> draws;
cout << "No of Losses" <<endl;
cin >> losses;
cout << "Cricket Team's current score is " << (wins * W) + (D * draws) + (L * losses) << " points" <<endl;


}