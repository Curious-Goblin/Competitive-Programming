#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, count = 0, count1 = 0, count2 = 0;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            nums.push_back(a);
            if (i % 2 == 0 && a % 2 != 0)
            {
                count++;
                count1++;
            }
            else if (i % 2 != 0 && a % 2 == 0)
            {
                count++;
                count2++;
            }
        }
        if(count1==count2)
        {
            if (count % 2 == 0)
            {
                cout << count / 2 << endl;
            }
            else
            {
                cout << (count + 1) / 2 << endl;
            }
        }
        else 
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}