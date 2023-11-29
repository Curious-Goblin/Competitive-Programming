#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// PRANAV'S SOLUTION
long long int solve(long long int a, long long int b, vector<long long int> vec)
{
    sort(vec.begin(), vec.end());
    long long int totime = b;
    long long int sum = totime - 1;
    unsigned long long int i = 0;
    while (i < vec.size())
    {
        if (totime == 1)
        {
            while (totime < a && i < vec.size())
            {
                int fin = totime + vec[i];
                if (fin > a || i == vec.size())
                {
                    break;
                }
                else
                {
                    totime += vec[i];
                    i++;
                }
            }
            if (totime == 1 && i != vec.size())
            {
                totime = a;
                i++;
            }
            sum += totime - 1;
        }
        else
        {
            totime = 1;
        }
    }
    return sum + 1;
}
// SOURABH'S SOLUTION
long long int solve1(long long a, long long b, vector<long long> tools)
{
    sort(tools.begin(), tools.end());
    long long int seconds = 0;
    int i = 0;
    while (i < tools.size())
    {
        // cout << "i=" << i << endl;
        // cout << "b=" << b << endl;
        if (((b + tools[i]) <= a) && (tools[i] < a))
        {
            b = b + tools[i];
        }
        else if ((b == 1) && (tools[i] >= a))
        {
            b = a;
            seconds += b - 1;
            b = 1;
        }
        else
        {
            seconds += b - 1;
            b = 1;
            i = i - 1;
            // cout << "i=" << i << endl;
        }
        // cout << "b=" << b << endl;
        // cout << "seconds " << seconds << endl
            //  << endl;
        i++;
    }
    seconds += b - 1;
    return seconds + 1;
}

long long int solve2(long long a, long long b, vector<long long> tools)
{
    long long int sum=0;
    for(int i=0;i<tools.size();i++)
    {
        sum+=min(a-1,tools[i]);
    }
    return sum+b;
}

int main()
{
    // while (true)
    // {
    //     long long int a, b, n;
    //     a = rand() % 10 + 5;
    //     b = rand() % 5 + 5;
    //     n = rand() % 10 + 1;
    //     vector<long long int> tools;
    //     for (int i = 0; i < n; i++)
    //     {
    //         tools.push_back(rand() % 10 + 5);
    //     }
    //     cout << a << " " << b << " " << n << " " << endl;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << tools[i] << " ";
    //     }
    //     cout << endl;
    //     int res1 = solve(a, b, tools);
    //     int res2 = solve1(a, b, tools);
    //     cout << "res1: " << res1 << endl;
    //     cout << "res2: " << res2 << endl;
    //     if (res1 == res2)
    //     {
    //         cout << "ok" << endl;
    //     }
    //     else
    //     {
    //         cout << "wrong answer" << endl;
    //         break;
    //     }
    // }

    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, n;
        cin >> a >> b >> n;
        long long int x;
        vector<long long int> tools;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            tools.push_back(x);
        }
        long long int res = solve2(a, b, tools);
        cout << res << endl;
    }
    return 0;
}
