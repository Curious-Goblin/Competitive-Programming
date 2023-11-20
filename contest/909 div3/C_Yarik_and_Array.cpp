#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void solve(int n, vector<int> &nums)
{
    int current_sum = nums[0], max_sum = nums[0];

    for (unsigned int i = 1; i < nums.size(); ++i)
    {
        if ((((nums[i - 1] % 2 == 0) && (nums[i] % 2 == 0)) && ((abs(abs(nums[i]) - abs(nums[i - 1]))) == 2)) || (nums[i] == nums[i - 1]))
        {
            current_sum = nums[i];
        }
        else
        {
            current_sum = max(nums[i], current_sum + nums[i]);
        }
        max_sum = max(max_sum, current_sum);
    }
    cout << max_sum << endl;
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