#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (unsigned int i = 0; i < s.size(); i++)
    {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u') || (s[i] == 'y') || (s[i] == 'A') || (s[i] == 'E') || (s[i] == 'I') || (s[i] == 'O') || (s[i] == 'U') || (s[i] == 'Y'))
        {
            s[i] = '0';
        }
    }
    s.erase(remove(s.begin(), s.end(), '0'), s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int i=0;
    while(i<s.length())
    {
        s.insert(i,1,'.');
        i=i+2;
    }
    cout << s;
    return 0;
}