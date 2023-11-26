#include <iostream>
#include <vector>
using namespace std;

int gcd_fast(int a, int b)
{

    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd_fast(b, a % b);
    }
}

void solve(long long int n, vector<long long int> nums)
{
    long long int a, b, c,sum=0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (nums[i] >= nums[j])
                {
                    if (nums[i] >= nums[k])
                    {
                        c = nums[i];
                        if (nums[j] >= nums[k])
                        {
                            b = nums[j];
                            a = nums[k];
                        }
                        else
                        {
                            a = nums[j];
                            b = nums[k];
                        }
                    }
                    else
                    {
                        c = nums[k];
                        b = nums[i];
                        a = nums[j];
                    }
                }
                else
                {
                    if (nums[j] >= nums[k])
                    {
                        c = nums[j];
                        if (nums[i] >= nums[k])
                        {
                            b = nums[i];
                            a = nums[k];
                        }
                        else
                        {
                            a = nums[i];
                            b = nums[k];
                        }
                    }
                    else
                    {
                        c = nums[k];
                        a = nums[i];
                        b = nums[j];
                    }
                }
                sum=sum+gcd_fast(a,b);
            }
        }
    }
    cout<<sum<<endl;
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