#include <iostream>
#include <cmath>
using namespace std;
void result(float a, float b, float c);

main()
{
float a, b ,c;
float disc, root1, root2, root3, root4a, root4b, root5a, root5b;
cout << "Enter coefficient of the quadratic term a: ";
cin >> a;
cout << "Enter coefficient of the quadratic term b: ";
cin >> b;
cout << "Enter constant term c: ";
cin >> c;
result( a,  b,  c );

}

void result(float a, float b, float c)
{
float disc, root1, root2, root3, root4a, root4b, root5a, root5b;
disc = (b*b) - (4*(a*c));
if(disc > 0)
{
root1 = (-b + (sqrt(disc)))/(2*a);
root2 = (-b - (sqrt(disc)))/(2*a);
cout << "Solution: " << root1 << " ,  " << root2 <<  ". (Both roots are real)";
}
if(disc == 0) 
{
root3 = -b/(2*a);
cout << "Solution: " << root3 <<  ". (Both roots are real and equal)";
}
if(disc < 0) {
root4a = -b/(2*a); 
root4b = sqrt(-(disc))/(2*a);
root5a = (-b/(2*a));
root5b = (sqrt((-disc))/(2*a));
cout << "Solution: " << root4a << " + "<<root4b <<"i" <<" ,  " <<root5a << " - " << root5b << "i" <<  ". (Both roots are complex)";
}
}

