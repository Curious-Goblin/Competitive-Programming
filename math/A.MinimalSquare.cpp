#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int c=min(a,b);
        int d=max(a,b);
        c=c*2;
        int e=max(c,d);
        cout<<pow(e,2)<<endl;
    }
    
    return 0;
}