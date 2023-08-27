#include<iostream>
using namespace std;
// TIME COMPLEXITY = O(LOG(N)) SPACE COMPLEXITY = O(1)
int main(){
    unsigned long long int n;
    cin>>n;
    int count=0,r=0;
    while(n!=0)
    {
        r=n%10;
        if(r==4 ||r==7)
        {
            count++;
        }
        n=n/10;
        r=0;
    }
    if(count==4||count==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}