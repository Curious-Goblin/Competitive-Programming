#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count1 = 0, count2 = 0;
    cin >> n;
    string s, s1, s2;
    vector<string> name;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        name.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        if (s2=="0")
        {
            s1 = name[i];
        }
        else if (name[i] != s1)
        {
            s2 = name[i];
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (name[i] == s1)
        {
            count1++;
        }
        else if (name[i] == s2)
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << s1;
    }
    else
    {
        cout << s2;
    }
    return 0;
}