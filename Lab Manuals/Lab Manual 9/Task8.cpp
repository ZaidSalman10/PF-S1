#include<iostream>
using namespace std;
void display(string word)
{
    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        cout << word[idx] << " is found at position " << idx << endl;
    }             
}
main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    display(word);
}