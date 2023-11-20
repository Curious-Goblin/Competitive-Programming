#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    long long int n,m,k,a,max1=0,max2=0;
    cin>>n>>m>>k;
    vector<long long int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    sort(nums.begin(),nums.end());
    long long int o=m/(k+1);
    long long int result=0;
    if(m%(k+1)==0)
    {
        
        result=o*(k*nums[n-1] +nums[n-2]);
        
    }
    else
    {
        result=o*(k*nums[n-1] +nums[n-2])+  (m%(k+1))*nums[n-1];
    }
    cout<<result<<endl;
    return 0;
}