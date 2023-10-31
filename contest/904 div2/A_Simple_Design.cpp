#include <iostream>
using namespace std;

long long int solve(int x, int k)
{
    long long int y = x;
    long long int a, b, c;
    a = x;
    b = 0, c = 0;
    while (a != 0)
    {
        b = a % 10;
        a = a / 10;
        c += b;
    }
    y = c;
    while (y % k != 0)
    {
        x++;
        a = x;
        b = 0, c = 0;
        while (a != 0)
        {
            b = a % 10;
            a = a / 10;
            c += b;
        }
        y = c;
    }
    return x;
}

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, k;
        cin >> x >> k;
        cout << solve(x, k) << endl;
    }
    return 0;
}