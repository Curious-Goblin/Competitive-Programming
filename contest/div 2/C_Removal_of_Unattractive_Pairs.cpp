#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=1,maxCount=1;
        if(n%2!=0)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    count++;
                }
                else 
                {
                    
                    maxCount=max(maxCount,count);
                    count=1;
                }
            }
            if(maxCount<=2)
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<2<<endl;
            }
        }
        
    }
}