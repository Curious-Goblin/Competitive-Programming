#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a = 0, b = 0;
        cin >> n;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a;
            b = b + a;
        }
        long double square = sqrt(b);
        if (floor(square) == square)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}