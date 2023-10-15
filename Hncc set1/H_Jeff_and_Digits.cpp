#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
    int n, a, count0 = 0, count5 = 0;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
        if (a == 0)
        {
            count0 = count0 + 1;
        }
        else
        {
            count5 = count5 + 1;
        }
    }
    // cout<<count0<<endl<<count5<<endl;
    sort(nums.begin(), nums.end());
    if (count0 == 0)
    {
        cout << -1;
    }
    // else if ((5*count5) % 9 == 0)
    // {
    //     for (int i = 0 + count0; i < n; i++)
    //     {
    //         cout << nums[i];
    //     }
    //     for (int i = 0; i < count0; i++)
    //     {
    //         cout << nums[i];
    //     }
    // }
    // else if (((5 * count5) % 9) % 5 == 0)
    // {
    //     int count = ((5 * count5) % 9) / 5;
    //     for (int i = 0 + count0; i < n - count; i++)
    //     {
    //         cout << nums[i];
    //     }
    //     for (int i = 0; i < count0; i++)
    //     {
    //         cout << nums[i];
    //     }
    // }
    // else
    // {
    //     cout << 0;
    // }
    else
    {
        int counter = count5, count = 0;
        while ((5 * counter) % 9 != 0)
        {
            counter = counter - 1;
            count++;
        }
        if (count != count5)
        {
            for (int i = 0 + count0; i < n - count; i++)
            {
                cout << nums[i];
            }
            for (int i = 0; i < count0; i++)
            {
                cout << nums[i];
            }
        }
        else
        {
            cout << 0;
        }
    }
    return 0;
}