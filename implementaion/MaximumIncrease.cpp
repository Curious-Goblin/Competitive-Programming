#include <iostream>
#include <vector>
using namespace std;
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
int main()
{
    int n, a, count = 1, max_length = 0;
    cin >> n;
    vector<long int> nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    if (n == 1)
    {
        cout << "1";
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] < nums[i + 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }
            max_length = max(max_length, count);
        }
        cout << max_length;
    }

    return 0;
}