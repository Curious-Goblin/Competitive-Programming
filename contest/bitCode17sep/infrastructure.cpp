#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, a;
    cin >> n >> k;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    int years = 1, count = 0;
    while (count != k)
    {
        for (int i = 0; i < n; i++)
        {
            if (years == nums[i])
            {
                count++;
            }
        }
        years++;
    }
    cout << years - 1;
    return 0;
}