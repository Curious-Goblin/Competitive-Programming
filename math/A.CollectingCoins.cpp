#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        vector<int> nums;
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);
        sort(nums.begin(), nums.end());
        int d = (nums[2] - nums[1]) + (nums[2] - nums[0]);
        if (n - d < 0)
        {
            cout << "NO"<<endl;
        }
        else
        {
            n = n - d;
            if (n % 3 != 0)
            {
                cout << "NO"<<endl;
            }
            else
            {
                cout << "YES"<<endl;
            }
        }
    }
    return 0;
}