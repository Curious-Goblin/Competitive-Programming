#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<c<<endl;
        }
        if(c==b)
        {
            cout<<a<<endl;
        }
        if(a==c)
        {
            cout<<b<<endl;
        }
    }
    return 0;
}