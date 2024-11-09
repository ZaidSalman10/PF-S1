#include <iostream>
using namespace std;
void reverse(string word)
{ 
    int idx = 0;
    int x = 0;
    for ( idx = 0;  word[idx] != '\0' ; idx++)
    {
        x++;
    }
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
    reverse(word);
}