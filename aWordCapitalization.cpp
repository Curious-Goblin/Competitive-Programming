#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;
    if (word[0] > 90)
    {
        word[0] = toupper(word[0]);
    }
    cout << word;
    return 0;
}