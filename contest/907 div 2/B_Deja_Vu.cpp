#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void calc(int n, int q, vector<int> &nums, vector<int> &noms)
{
    for (int i = 0; i < q; i++)
    {
        int a = pow(2, noms[i]);
        int b = pow(2, noms[i] - 1);
        for (int j = 0; j < n; j++)
        {
            if (nums[j] % a == 0)
            {
                nums[j] = nums[j] + b;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, q;
        cin >> n >> q;
        vector<int> nums;
        vector<int> noms;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
        }
        for (int i = 0; i < q; i++)
        {
            cin >> a;
            noms.push_back(a);
        }
        calc(n, q, nums, noms);
        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    return 0;
}