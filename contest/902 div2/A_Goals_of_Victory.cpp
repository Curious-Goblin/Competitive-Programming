#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, a, sum=0;
        cin>>n;
        for(int i=0;i<n-1;i++)
        {
            cin>>a;
            sum += a;
        }
        cout << -sum << endl;
    }
    return 0;
}
