#include <iostream>
#include <vector>
using namespace std;

void solve(int n, vector<int> ribbon)
{
    int sum = 0, count = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        sum += ribbon[i];
    }
    while (sum > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (ribbon[i] == 0)
            {
                // cout<<"sh"<<endl;
                if (ribbon[i - 1] != ribbon[i])
                {
                    flag = true;
                }
                if (flag == true)
                {
                    count++;
                    flag = false;
                }
                continue;
            }
            else
            {
                ribbon[i]--;
                sum--;
            }
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
        int n, a;
        cin >> n;
        vector<int> ribbon;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            ribbon.push_back(a);
        }
        solve(n, ribbon);
    }
}