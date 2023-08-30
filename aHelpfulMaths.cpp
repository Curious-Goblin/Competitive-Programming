#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// T.C = O(N^2) S.C = O(N)

int main(){
    int a,k=0;
    string sum,s;
    cin>>sum;
    vector<int> nums;
    for(unsigned int i=0;i<sum.length();i++)
    {
        if(isdigit(sum[i]))
        {
            a=stoi(sum.substr(i));
            nums.push_back(a);
        }
    }
    sort(nums.begin(),nums.end());
    for(unsigned int j=0;j<nums.size();j++)
    {
        s=to_string(nums[j]);
        sum.replace(k,1,s);
        k=k+2;
    }
    cout<<sum<<endl;
    return 0;
}