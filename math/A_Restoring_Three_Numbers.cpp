#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
    long long int q = (a + b + c + d) / 3;
    long long int x = 0, y = 0, z = 0;
    if (a == q)
    {
        a = 0;
    }
    if (b == q)
    {
        b = 0;
    }
    if (c == q)
    {
        c = 0;
    }
    if (d == q)
    {
        d = 0;
    }
    vector<long long int> nums;
    if(a!=0)
    {
        nums.push_back(a);
    }
     if(b!=0)
    {
        nums.push_back(b);
    }
     if(c!=0)
    {
        nums.push_back(c);
    }
     if(d!=0)
    {
        nums.push_back(d);
    }
    x=(nums[0]+nums[2] - q);
    y=(nums[0]+nums[1] - q);
    z=(nums[1]+nums[2] - q);
    // cout<<nums[0]<<" "<<nums[1]<<" "<<nums[2]<<endl;
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}