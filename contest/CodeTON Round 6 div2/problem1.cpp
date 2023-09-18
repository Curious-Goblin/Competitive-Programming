#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x, sum;
        cin >> n >> k >> x;
        if ((k - x) >= 2 || (k > n))
        {
            sum = -1;
        }
        else
        {
            if (x != k)
            {
                sum = (((k - 1) * (k)) / 2) + ((n - k) * x);
            }
            else
            {
                sum = (((k - 1) * (k)) / 2) + ((n - k) * (x - 1));
            }
        }
        cout << sum << endl;
    }

    return 0;
}