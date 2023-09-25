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
        if (nums[0] == 1)
        {
            nums[0] = 2;
            for (int i = 1; i < n; i++)
            {
                if (nums[i] == nums[i - 1] + 1)
                {
                    nums[i] = nums[i] + 1;
                }
                else
                {
                    nums[i] = nums[i - 1] + 1;
                }
            }
        }
        else
        {
            nums[0] = 1;
            for (int i = 1; i < n; i++)
            {
                if (nums[i] == nums[i - 1] + 1)
                {
                    nums[i] = nums[i] + 1;
                }
                else
                {
                    nums[i] = nums[i - 1] + 1;
                }
            }
        }
        cout << nums[nums.size() - 1] << endl;
    }
    return 0;
}