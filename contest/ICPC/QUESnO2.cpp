#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<long long int> solve1(long long int n, long long int k, vector<long long int> &bidings)
{
    sort(bidings.begin(), bidings.end());
    int low = n / k - 1;
    int lows = n / k;
    int count = 0;
    long long int min_bid = 0, max_bid = 0;
    if (k == 1)
    {
        cout << bidings[n - 2] << " " << bidings[n - 2] << endl;
    }
    else
    {
        for (int i = 0; i < n; i = i + low)
        {
            if (count < k)
            {
                min_bid += bidings[i + low - 1];
                count++;
            }
        }
        count = 0;
        if (lows != 2)
        {
            for (int i = n - 1; i >= 0; i = i - low)
            {
                if (count < k)
                {
                    max_bid += bidings[i - low + 1];
                    count++;
                }
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i = i - lows)
            {
                if (count < k)
                {
                    max_bid += bidings[i - lows + 1];
                    count++;
                }
            }
        }
        return {min_bid, max_bid};
    }
}

vector<long long int> solve2(long long int n, long long int k, vector<long long int> &v)
{
    sort(v.begin(), v.end(), greater<int>());
    long long maxi = 0;
    long long j = k;
    while (k > 0)
    {
        maxi = maxi + v[2 * k - 1];
        k--;
    }
    long long mini = v[j];
    sort(v.begin(), v.end());
    for (long long i = 0; i < j - 1; i++)
    {
        mini = mini + v[i];
    }

    return {mini, maxi};
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     long long int n, k, a;
    //     cin >> n >> k;
    //     vector<long long int> bidings;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> a;
    //         bidings.push_back(a);
    //     }
    while (true)
    {
        long long k = rand() % 10 + 2;
        long long n = 2 * k + rand() % 10 + 2;
        vector<long long int> bidings;
        for (int i = 0; i < n; i++)
        {
            bidings.push_back(rand() % 10 + 2);
        }
        vector<long long int> res1 = solve1(n, k, bidings);
        vector<long long int> res2 = solve2(n, k, bidings);
        if (res1 == res2)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << "WRONG" << endl;
            cout << res1[0] << " " << res1[1] << endl;
            cout << res2[0] << " " << res2[1] << endl;
            cout << n << " " << k << endl;
            for (int i = 0; i < n; i++)
            {
                cout << bidings[i] << " ";
            }
            cout << endl;
            break;
        }
    }
    // }
    return 0;
}
