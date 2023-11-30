#include <iostream>
#include <vector>
using namespace std;

void solve(int n, int k, vector<int> nums)
{
    int check = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            check = 0;
        }
    }
    if (k >= 2)
    {
        cout << "YES" << endl;
    }
    else if (check == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, a;
        cin >> n >> k;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
        }
        solve(n, k, nums);
    }
    return 0;
}