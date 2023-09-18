#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int d=n%x;
        while (d!=y)
        {
            n=n-1;
            d=n%x;
        }
        cout<<n<<endl;
    }
    
    return 0;
}