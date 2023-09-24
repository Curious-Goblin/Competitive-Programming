#include <iostream>
#include <vector>
using namespace std;

int func(vector<int> &prefixXOR, int a, int b)
{
    if (a == 0)
    {
        return prefixXOR[b];
    }
    else
    {
        return prefixXOR[b] ^ prefixXOR[a - 1];
    }
}

int main()
{
    int n, a, sum = 0;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    vector<int> prefixXOR;
    a = 0;
    for (int i = 0; i < n; i++)
    {
        a = a ^ nums[i];
        prefixXOR.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = (sum + 1LL * func(prefixXOR, i, j) * (j - i + 1)) % 998244353;
        }
    }
    cout << sum;
    return 0;
}
