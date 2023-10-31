#include<iostream>
using namespace std;

int main(){
    int k,n;
    cin>>k>>n;
    int i=1;
    int a=k;
    while((a%10!=n)&&(a%10!=0))
    {
        i++;
        a=(k*i);
        // cout<<a<<endl<<i<<endl;
    }
    cout<<i<<endl;
    return 0;
}