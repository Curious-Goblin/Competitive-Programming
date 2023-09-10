#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if ((n - 2) % x == 0 && (n - 2) > 0)
        {
            cout << ((n - 2) / x) + 1 << endl;
        }
        else if ((n - 2) > 0)
        {
            cout << ((n - 2) / x) + 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}