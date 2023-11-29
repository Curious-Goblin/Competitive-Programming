#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve(int n,vector<int> skill)
{
    sort(skill.begin(),skill.end());
    cout<<skill[n]-skill[n-1]<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        vector<int> skill;
        cin>>n;
        for(int i=0;i<(2*n);i++)
        {
            cin>>a;
            skill.push_back(a);
        }
        solve(n,skill);
    } 
    return 0;
}