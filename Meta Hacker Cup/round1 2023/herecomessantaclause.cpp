#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int n, a;
        cin >> n;
        vector<double> x;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            x.push_back(a);
        }
        sort(x.begin(), x.end());
        double p = 0, q = 0, result = 0;
        if (n % 2 == 0)
        {
            p = (x[0] + x[1]) / 2.0;
            q = (x[n - 1] + x[n - 2]) / 2.0;
            result = q - p;
        }
        else
        {
            map<int, double> hash;
            for (int i = 0; i < n - 2; i = i + 2)
            {
                hash[i] = x[i + 2] - ((x[i] + x[i + 2]) / 2.0);
            }
            auto it = hash.begin()->first;
            if (it == 0)
            {
                p = (x[0] + x[2]) / 2.0;
                q = (x[n - 1] + x[n - 2]) / 2.0;
                result = q - p;
            }
            else if (it == n - 3)
            {
                p = (x[0] + x[1]) / 2.0;
                q = (x[n - 1] + x[n - 3]) / 2.0;
                result = q - p;
            }
            else
            {
                p = (x[0] + x[1]) / 2.0;
                q = (x[n - 1] + x[n - 2]) / 2.0;
                result = q - p;
            }
        }
        cout << "Case #" << i << ": " << result << endl;
        i++;
    }
    return 0;
}