#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;
int building_an_Aquarium(vector<int> &corals, int n, int x)
{
    int counting = 0, height = 0;
    counting = count(corals.begin(), corals.end(), corals[0]);
    if (counting == n)
    {
        height = (x / n) + corals[0];
    }
    else
    {
        sort(corals.begin(), corals.end());
        int sum = INT_MAX;
        int j = 1, s = 0;
        while (!(sum <= x))
        {
            sum = 0;
            for (int i = 0; i < n - j; i++)
            {
                sum = sum + corals[n - j] - corals[i];
                if (sum > x)
                {
                    s = n - j;
                    break;
                }
            }
            if ((sum <= x) && (sum != 0))
            {
                height = corals[n - j];
                s = n - j + 1;
                break;
            }
            j++;
        }
        if (height == 0)
        {
            height = corals[0] + x / s;
        }
        else
        {
            if ((x - sum) % s == 0)
            {
                height = height + ((x - sum) / s);
            }
            else if ((x - sum) / s >= 1)
            {
                height = height + ((x - sum) / s);
            }
        }
    }
    return height;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a;
        int counting = 0, height = 0;
        cin >> n >> x;
        vector<int> corals;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            corals.push_back(a);
        }
        height = building_an_Aquarium(corals, n, x);
        cout << height << endl;
    }
    return 0;
}