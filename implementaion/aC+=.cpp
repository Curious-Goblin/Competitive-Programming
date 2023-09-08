#include<iostream>
using namespace std;
// TIME COMPLEXITY = O(T*log(N)) SPACE COMPLEXITY= O(N)
int main(){
    long long int t;
    cin>>t;
    long long int a=0,b=0,n=0;
    int count;
    while (t--)
    {
        count=0;
        cin>>a>>b>>n;
        while(!(a>n || b>n))
        {
            if(a<b)
            {
                a=a+b;
                count++;
            }
            else{
                b=b+a;
                count++;
            }
        }
        cout<<count<<endl;
    }
    
    return 0;
}