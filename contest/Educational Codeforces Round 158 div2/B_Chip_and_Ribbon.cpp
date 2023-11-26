#include <iostream>
#include <vector>
using namespace std;
void solve(long long int n, vector<long long int> &nums)
{
    long long int sum = 0, n_tele = 0, left = 0, right = n - 1, i = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    cout << sum << endl;
    while (i <= 100)
    {
        i++;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                n_tele++;
                continue;
            }
            else
            {
                nums[i]--;
                sum--;
            }
        }
        // cout<<sum<<endl;
    }
    cout << "n_tele " << n_tele << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a;
        cin >> n;
        vector<long long int> nums;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
        }
        solve(n, nums);
    }
    return 0;
}