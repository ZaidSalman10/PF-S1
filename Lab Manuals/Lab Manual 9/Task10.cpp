#include<iostream>
using namespace std;
void next(string word)
{
    for ( idx = x; word[idx] != word[0]; idx--)
    {
        cout << word[idx];
    }         
    cout << word[0]; 
}
main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    next(word);
}