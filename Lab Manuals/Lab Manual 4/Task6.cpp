#include <iostream>
using namespace std;
void f(int r);
main()
{
int r;
cout <<"Enter length of Rubik's cube: ";
cin >> r;
f(r);
}

void f(int r)
{
int stickers;
stickers = (r * r) * 6;
cout << "The Rubik's cube of side length "<< r <<" has "<< stickers << " stickers"<<endl;
}