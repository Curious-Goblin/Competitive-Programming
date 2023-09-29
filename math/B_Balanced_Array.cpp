#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n / 2) % 2 == 0)
        {
            vector<int> nums(n, 0);
            int num = 40;
            for (int i = 0; i < n / 2; i++)
            {
                nums[i] = num;
                if ((i + (n / 2)) % 2 == 0)
                {
                    nums[i + (n / 2)] = num + 3;
                }
                else
                {
                    nums[i + (n / 2)] = num - 3;
                }
                num = num + 2;
            }
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << nums[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}