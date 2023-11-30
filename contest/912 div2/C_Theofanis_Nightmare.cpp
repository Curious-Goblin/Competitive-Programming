#include <iostream>
#include <vector>
using namespace std;

void solve(int n, vector<int> nums)
{
    int sum = 0, last = 0, index = 0, sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum += (i + 1) * nums[i];
    }
    if (nums[n - 1] < 0)
    {
        last = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            if (last < 0)
            {
                last += nums[i];
                index = i;
                // cout << "hihhi" << endl;
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (i != index)
            {
                sum1 += (i + 1) * nums[i];
            }
            else
            {
                sum1 += (index + 1) * last;
                break;
            }
        }
        cout << sum1 << endl;
    }
    else
    {
        cout << sum << endl;
    }
}

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
        solve(n, nums);
    }
    return 0;
}