#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        vector<int> nums;
        int n_odd = 0, n_even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
            if (a % 2 == 0)
            {
                n_even++;
            }
            else
            {
                n_odd++;
            }
        }
        if (n % 2 == 0)
        {
            if (n_even >= 1 && n_even < n)
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
        }
        else
        {
            if (n_odd >= 1 )
            {
                cout << "YES"<<endl;
            }
            else
            {
                cout << "NO"<<endl;
            }
        }
    }
    return 0;
}