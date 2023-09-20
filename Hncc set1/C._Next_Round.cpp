#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k,a;
    cin>>n>>k;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    int comp=nums[k-1];
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>=comp && nums[i]>0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}