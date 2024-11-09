#include<iostream>
using namespace std;

bool f(string word, char letter)
{
    bool check = false;
    for (int idx = 0; word[idx] != '\0'; idx++)
    {
        if (word[idx] == letter)
        { check = true;
        break;}
    }
    return check;
}

main()
{
    string word;
    char letter;
    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter a letter you want to find in the word: ";
    cin >> letter;
    if (f(word, letter))
    {
        cout << letter << " is found in " << word;
    }
    else{
        cout << letter << " is not found in " << word;
    }
}