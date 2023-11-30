#include <iostream>
#include <vector>

using namespace std;

void solve(int n,vector<vector<int>> nums)
{
    vector<int> vec(n,0);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            
        }
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
        vector<vector<int>> nums;
        for (int i = 0; i < n; i++)
        {
            vector<int> temp;
            for (int j = 0; j < n; j++)
            {
                cin >> a;
                temp.push_back(a);
            }
            nums.push_back(temp);
        }
        solve(n,nums);
    }
}