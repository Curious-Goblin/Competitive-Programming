#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long int gcd_fast(long long int a, long long int b)
{
    while (b != 0)
    {
        long long int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve(long long int n, vector<long long int> nums)
{
    long long int sum = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            sum += gcd_fast(nums[i], nums[j]) * (n - j - 1);
        }
    }
    cout << sum << endl;
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
}