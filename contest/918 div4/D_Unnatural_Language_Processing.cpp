#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> indexes;
        int n;
        cin >> n;
        string s, a;
        cin >> s;
        for (int i = 0; i < s.size() - 1 ; i = indexes[indexes.size() - 1] + 1)
        {
            if (s[i + 3] == 'a' || s[i + 3] == 'e')
            {
                indexes.push_back(i + 1);
                a += s.substr(i, 2);
                a += '.';
            }
            else
            {
                indexes.push_back(i + 2);
                a += s.substr(i, 3);
                a += '.';
            }
        }
        a.erase(a.size()-1,1);
        cout << a << endl;
    }
    return 0;
}