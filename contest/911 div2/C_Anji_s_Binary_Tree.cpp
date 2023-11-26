#include<iostream>
#include<vector>
using namespace std;

void solve(int n,vector<char> letters,vector<pair<int,int>> childs)
{
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<char> letters;
        char a;
        vector<pair<int,int>> childs;
        pair<int,int> temp;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            letters.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            cin>>temp.first>>temp.second;
            childs.push_back(temp);
        }
        solve(n,letters,childs);
    }
    
}