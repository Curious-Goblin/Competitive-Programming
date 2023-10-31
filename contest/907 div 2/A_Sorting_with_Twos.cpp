#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string calc(int n, vector<int> nums)
{
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] <= nums[i + 1])
        {
            continue;
        }
        else if (((i) & (i + 1)) == 0)
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        return "NO";
    }
    else
    {
        return "YES";
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
        string res = calc(n, nums);
        cout << res << endl;
    }
    return 0;
}