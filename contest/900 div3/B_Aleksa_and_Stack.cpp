#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums;
        nums.push_back(2);
        nums.push_back(3);
        for (int i = 2; i < n; i++)
        {
            if ((3 * (nums[i - 1] + 1)) % (nums[i - 1] + nums[i - 2]) == 0)
            {
                nums.push_back(nums[i - 1] + 2);
            }
            else
            {
                nums.push_back(nums[i - 1] + 1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}