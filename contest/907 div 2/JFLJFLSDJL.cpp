#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string calc(int n,vector<int> nums)
{
    int i=2;
    bool flag=true;
    if(n%2!=0)
    {
        n=n-1;
    }
    while(i<=n)
    {
        i=i*2;
        if(nums[i-2]<=nums[i-1])
        {
            continue;
        }
        else
        {
            flag=false;
            break;
        }
    }
    if((n%2)==0)
    {
        if(nums[n-2]>nums[n-1])
        {
            return "NO";
        }
        else
        {
            return "YES";
        }
    }
    if(flag==true)
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            nums.push_back(a);
        }
        string res=calc(n,nums);
        cout<<res<<endl;
    }
    return 0;
}