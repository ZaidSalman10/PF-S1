#include <iostream>
using namespace std;
main() {
float size;
float cost;
float area;
cout << "Enter size of bag in lbs" <<endl;
cin >> size;
cout << "Enter cost of bag in $" <<endl;
cin >> cost;
cout << "Enter area per sq ft that can be fertilize by a single bag" <<endl;
cin >> area;
cout << "The cost of Fertilizer per pound is $" << cost / size <<endl;
cout << "The cost of Fertilizing the area per sq ft is $" << cost / area <<endl;
}