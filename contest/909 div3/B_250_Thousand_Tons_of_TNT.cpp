#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void solve(int n, vector<int>& weights)
{
    
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n;
        vector<int> weights;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            weights.push_back(a);
        }
        solve(n, weights);
    }
    return 0;
}