#include <iostream>
#include <vector>
using namespace std;
int solve(int n, int x, vector<int> &coordinates)
{
    int minFuel = 0,diff=0,maxDiff=coordinates[0];
    for(int i=1;i<n;i++)
    {
        diff=coordinates[i]-coordinates[i-1];
        maxDiff=max(maxDiff,diff);
    }
    minFuel=(x-coordinates[n-1])*2;
    maxDiff=max(maxDiff,minFuel);
    return maxDiff;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, a;
        cin>>n>>x;
        vector<int> coordinates;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            coordinates.push_back(a);
        }
        int result = solve(n, x, coordinates);
        cout << result << endl;
    }
    return 0;
}