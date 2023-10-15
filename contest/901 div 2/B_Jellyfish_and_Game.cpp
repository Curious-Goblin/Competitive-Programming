#include <bits/stdc++.h>
using namespace std;

void solve(long long int k, vector<long long int> jelly, vector<long long int> gelly)
{
    long long int maxj = *max_element(jelly.begin(), jelly.end());
    long long int maxg = *max_element(gelly.begin(), gelly.end());
    long long int minj = *min_element(jelly.begin(), jelly.end());
    long long int ming = *min_element(gelly.begin(), gelly.end());
    long long int sum = accumulate(jelly.begin(), jelly.end(), 0ll);
    if (k % 2 == 0)
    {
        if ((minj > maxg) || ((maxj == minj) && (minj == maxg) && (minj > ming)))
        {
            cout << sum - maxj + ming << endl;
        }
        else if ((minj < ming && maxj > maxg) || (minj == ming && maxj > maxg) || ((maxg == ming) && (ming == minj) && (ming < maxj)))
        {
            cout << sum - maxj + maxg << endl;
        }
        else if (minj > ming && maxj < maxg)
        {
            cout << sum - minj + ming << endl;
        }
        else if (maxj > maxg && minj > ming)
        {
            cout << sum - minj + maxg - maxj + ming << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    else
    {
        if ((minj > maxg) || ((maxj == minj) && (minj == maxg) && (minj > ming)))
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - minj + maxg << endl;
        }
    }
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, k;
        cin >> n >> m >> k;
        vector<long long int> jelly;
        vector<long long int> gelly;
        while (n--)
        {
            long long int x;
            cin >> x;
            jelly.push_back(x);
        }
        while (m--)
        {
            long long int x;
            cin >> x;
            gelly.push_back(x);
        }
        solve(k, jelly, gelly);
    }
}
// ((ming > maxj) || (maxj == maxg && minj == ming) || (maxj < maxg && minj < ming) || (minj == ming && maxj < maxg) || (maxj == maxg && minj < ming) || (maxj == maxg && minj > ming) || ((maxj == minj) && (minj == ming) && (minj < maxg)) || ((maxg == ming) && (ming == maxj) && (ming > minj)))