#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        if (n < x)
        {
            cout << y << endl;
        }
        else
        {
            int d = n % x;
            if (d == y)
            {
                cout << n << endl;
            }
            else if ((y - d) < 0)
            {
                cout<<(n-d+y)<<endl;
            }
            else
            {
                int d = n / x;
                d = d - 1;
                cout << (x * (d)) + y << endl;
            }
        }
    }

    return 0;
}