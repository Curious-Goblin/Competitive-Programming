#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a;
        cin >> n >> k;
        bool val = false;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
            if (a == k && val == false)
            {
                cout << "YES" << endl;
                val = true;
            }
        }
        if (val == false)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}