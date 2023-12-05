#include <iostream>
#include <vector>
#include <string>
#include <string>
using namespace std;
int main()
{
    string s = "abcdefgh";
    string w = "12345678";
    int t;
    cin >> t;
    while (t--)
    {
        string a, c;
        cin >> a;
        char b = a[0];
        char q = a[1];
        for (int i = 0; i < 8; i++)
        {
            if (s[i] != b)
            {
                cout << s[i] << q << endl;
            }
        }
        for (int i = 0; i < 8; i++)
        {
            if (w[i] != q)
            {
                cout << b << w[i] << endl;
            }
        }
    }
    return 0;
}