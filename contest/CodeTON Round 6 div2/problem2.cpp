#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            b.push_back(x);
        }
        if (n % 2 != 0)
        {
            int max = 0, min = 0;
            for (int i = 0; i < n; i++)
            {
                min = min ^ a[i];
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    a[j] = a[j] | b[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                max = max ^ a[i];
            }
            cout << min << " " << max << endl;
        }
        else
        {
            int max = 0, min = 0;
            for (int i = 0; i < n; i++)
            {
                max = max ^ a[i];
            }
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    a[j] = a[j] | b[i];
                }
            }
            for (int i = 0; i < n; i++)
            {
                min = min ^ a[i];
            }
            cout << min << " " << max << endl;
        }
    }
    return 0;
}