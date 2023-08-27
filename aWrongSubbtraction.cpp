#include<iostream>
using namespace std;
// TIME COMPLEXITY = O(LOG(N)) SPACE COMPLEXITY = O(1)
int main(){
    int n,k,r=0;
    cin>>n>>k;
    while(k!=0)
    {
        r=n%10;
        if(r==0)
        {
            n=n/10;
        }
        else
        {
            n=n-1;
        }
        k--;
    }
    cout<<n;
    return 0;
}