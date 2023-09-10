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
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
        }
        cout << 2 << endl
             << 1 << " " << n << endl
             << 1 << " " << n << endl;
    }
    return 0;
}