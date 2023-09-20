#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<-1<<endl;
    }
    else 
    {
        vector<int> nums;
        for(int i=0;i<n;i++)
        {
            nums.push_back(i+1);
        }
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                swap(nums[i],nums[i+1]);
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<nums[i]<<" ";
        }
    }
    return 0;
}