#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        char a;
        vector<char> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            s.push_back(a);
        }
        vector<int> index;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                index.push_back(i);
            }
        }
        if(index.empty())
        {
            cout<<0<<endl;
            continue;
        }
        auto it1 = index.begin(), it2 = index.begin();
        int ind=0;
        while (it1 != index.end())
        {
            if(it2!=index.end())
            {
                it2++;
            }
            if ((*it2 - *it1 + 1 <= k)&&(it2!=index.begin()))
            {
                ind = *it2 - *it1 + 1;
            }
            else if (ind != 0)
            {
                it1 = it2;
                count++;
                ind=0;
            }
            else if (ind == 0)
            {
                it1++;
                it2 = it1;
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}