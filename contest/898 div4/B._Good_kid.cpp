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
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] < nums[max])
            {
                max = i;
            }
        }
        nums[max] = nums[max] + 1;
        int product = 1;
        for (int i = 0; i < n; i++)
        {
            product = product * nums[i];
        }
        cout << product << endl;
    }
    return 0;
}