#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long int solve(int n, int num)
{
    // for (int i = 1; i <= n; i++)
    // {
        long long int a, b, c, d=0;
        a = num;
        b = 0, c = 0;
        while (a != 0)
        {
            b = a % 10;
            a = a / 10;
            c += b*(pow(2,d));
            d++;
        }
    // }
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num;
        cin >> num;
        cout << solve(n, num) << endl;
    }

    return 0;
}