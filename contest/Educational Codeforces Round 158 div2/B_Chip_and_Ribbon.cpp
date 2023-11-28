#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void chappeHain(long long int n, vector<long long int> ribbon)
{
    long long int sum = 0,diff=0;
    sum += ribbon[0] - 1;
    for (int i = 1; i < n; i++)
    {
        diff=ribbon[i]-ribbon[i-1];
        sum += max(0ll, diff);
    }
    cout << sum << endl;
}

// T.C = O(N^2)
void solve(long long int n, vector<long long int> ribbon)
{
    long long int left = 0, right = n - 1, count = 0, i = 0;
    while (ribbon[left] == 0)
    {
        left++;
    }
    while (ribbon[right] == 0)
    {
        right--;
    }
    bool flag = false;
    while (left <= right)
    {
        for (i = left; i <= right; i++)
        {
            if (ribbon[i] == 0)
            {
                flag = true;
                continue;
            }
            else
            {
                ribbon[i]--;
            }
            if (flag == true)
            {
                flag = false;
                count++;
            }
        }
        while (ribbon[left] == 0)
        {
            left++;
        }
        while (ribbon[right] == 0)
        {
            right--;
        }
        if (left <= right)
        {
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a;
        cin >> n;
        vector<long long int> ribbon;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            ribbon.push_back(a);
        }
        chappeHain(n, ribbon);
    }
}