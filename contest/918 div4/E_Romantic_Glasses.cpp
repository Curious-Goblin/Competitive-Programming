#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, a;
        bool flag = false;
        cin >> n;
        vector<int> nums;
        for (long long int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
        }
        for (long long int i = 0; i < n; i++)
        {
            long long int count = 0, sum1 = 0, sum2 = 0;
            for (long long int j = i; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    sum1 += nums[j];
                }
                else
                {
                    sum2 += nums[j];
                }
                if (sum1 == sum2)
                {
                    count++;
                }
                if (count > 0)
                {
                    cout << "YES" << endl;
                    flag = true;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if (flag == true)
            {
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }
        else
        {
            flag = false;
        }
    }
    return 0;
}