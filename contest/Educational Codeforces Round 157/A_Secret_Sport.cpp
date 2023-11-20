#include <iostream>
#include <string>
using namespace std;

char calc(int n, string s)
{
    int count_A = 0, count_B = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            count_A++;
        }
        else
        {
            count_B++;
        }
    }
    if (count_A > count_B)
    {
        return 'A';
    }
    else if (count_B > count_A)
    {
        return 'B';
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;
        char result=calc(n,s);
        cout<<result<<endl;
    }
    return 0;
}