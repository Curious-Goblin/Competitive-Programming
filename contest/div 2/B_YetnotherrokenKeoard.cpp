// #include <iostream>
// #include <string>
// #include <vector>
// #include <cctype>
// #include <map>
// #include <unordered_map>

// void solve(string s)
// {

// }

// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         vector<int> p, q;
//         auto it = s.begin();
//         auto it2 = s.begin();
//         bool flag1 = false, flag2 = false;
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (s[i] != 'B' && s[i] != 'b')
//             {
//                 if (isupper(s[i]))
//                 {
//                     if (flag1 == false)
//                     {
//                         flag1 = true;
//                         it = s.begin() + i;
//                         p.push_back(i);
//                     }
//                     else
//                     {
//                         it = s.begin() + i;
//                         p.push_back(i);
//                     }
//                 }
//                 else if (islower(s[i]))
//                 {
//                     if (flag2 == false)
//                     {
//                         flag2 = true;
//                         it2 = s.begin() + i;
//                         q.push_back(i);
//                     }
//                     else
//                     {
//                         it2 = s.begin() + i;
//                         q.push_back(i);
//                     }
//                 }
//             }
//             else
//             {
//                 if (s[i] == 'B')
//                 {
//                     p.pop_back();
//                     *it = '#';
//                     it=s.begin()+p[p.size()-1];
//                 }
//                 else if (s[i] == 'b')
//                 {
//                     q.pop_back();
//                     *it2 = '#';
//                     it2=s.begin()+q[q.size()-1];
//                 }
//             }
//         }
//         cout<<s<<endl;
//     }
// }

#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

void solve(string s)
{
    vector<int> p, q;
    auto it = s.begin();
    auto it2 = s.begin();
    bool flag1 = false, flag2 = false;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'B' && s[i] != 'b')
        {
            if (isupper(s[i]))
            {
                if (flag1 == false)
                {
                    flag1 = true;
                    it = s.begin() + i;
                    p.push_back(i);
                }
                else
                {
                    it = s.begin() + i;
                    p.push_back(i);
                }
            }
            else if (islower(s[i]))
            {
                if (flag2 == false)
                {
                    flag2 = true;
                    it2 = s.begin() + i;
                    q.push_back(i);
                }
                else
                {
                    it2 = s.begin() + i;
                    q.push_back(i);
                }
            }
        }
        else
        {
            if (!p.empty() && s[i] == 'B')
            {
                p.pop_back();
                *it = '#';
                s[i] = '#';
                if (!p.empty())
                {
                    it = s.begin() + p.back();
                }
            }
            else if (!q.empty() && s[i] == 'b')
            {
                q.pop_back();
                *it2 = '#';
                s[i] = '#';
                if (!q.empty())
                {
                    it2 = s.begin() + q.back();
                }
            }
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='#')
        {
            if(s[i]!='B'&& s[i]!='b')
            {
                cout<<s[i];
            }
        }
    }
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
    }

    return 0;
}
