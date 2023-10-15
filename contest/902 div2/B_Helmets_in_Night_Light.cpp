#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p;
        cin >> n >> p;
        int a;
        vector<int> x;
        vector<int> y;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            x.push_back(a);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            y.push_back(a);
        }
        multimap<int, int> hash;
        for (int i = 0; i < n; i++)
        {
            hash.insert(make_pair(y[i], x[i]));
        }
        auto it = hash.begin();
        int c = n - 1, value = p;
        if (it->first > p)
        {
            value = p * n;
        }
        else
        {
            while (c != 0)
            {
                if (it->first > p)
                {
                    value = value + (p * c);
                    c = 0;
                }
                else
                {
                    if ((c - it->second) < 0)
                    {
                        value = value + ((it->first) * (it->second));
                        c = 0;
                        it++;
                        continue;
                    }
                    else
                    {
                        value = value + ((it->first) * (it->second));
                        c = c - (it->second);
                        it++;
                    }
                }
            }
        }
        cout << value << endl;
    }
    return 0;
}