#include <iostream>
#include<string>
#include<vector>
using namespace std;
//TIME COMPLEXITY = O(N) TO O(log(N)) SPACE COMPLEXITY = O(1)
int main()
{
    int n,i=0,a=1;
    cin>>n;
    string s;
    cin>>s;
    while(i<n)
    {
        cout<<s[i];
        i=i+a;
        a++;
    }
    return 0;
}