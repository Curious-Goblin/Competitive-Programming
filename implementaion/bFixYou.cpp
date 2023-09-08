#include <iostream>
#include <vector>
using namespace std;
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, count = 0;
        cin >> n >> m;
        string s;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            v.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i][m - 1] == 'R')
            {
                count++;
            }
        }
        for (int j = 0; j < m; j++)
        {
            if (v[n - 1][j] == 'D')
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}