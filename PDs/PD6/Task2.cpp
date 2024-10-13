#include <iostream>
using namespace std;

float average(float eng, float maths, float chem, float phy, float bio);
string grade(float per);

main()
{
    string name;
    float eng, maths, chem, phy, bio;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your english marks: ";
    cin >> eng;
    cout << "Enter your maths marks: ";
    cin >> maths;
    cout << "Enter your chemistry marks: ";
    cin >> chem;
    cout << "Enter your physics marks: ";
    cin >> phy;
    cout << "Enter your biology marks: ";
    cin >> bio;
    float per = average( eng, maths, chem, phy, bio);
    cout << "Percentage: "<< per << "%" <<endl;
    cout << "Grade: " << grade(per);
}

float average(float eng, float maths, float chem, float phy, float bio)
{
float percentage = (eng + maths + chem + phy + bio) / 5;
return percentage;
}

string grade (float per)
{
    if(per > 89){return "A+";}
    if(per < 40){return "F"; }
    if(per >= 40 && per < 50){return "D"; }
    if(per >= 50 && per < 60){return "C"; }
    if(per >= 60 && per < 70){return "B"; }
    if(per >= 70 && per < 80){return "B+";}
    if(per >= 80 && per < 90){return "A"; }
}
