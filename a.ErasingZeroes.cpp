#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(unsigned int i=0;i<s.size();i++)
        {
            if(((i!=0)||(i!=s.size()-1))&&(s[i]=='0'))
            {
                replace(s.begin(), s.end(), '0', '2');
            }
        }
        
        s.erase(remove(s.begin(),s.end(),'2'),s.end());
        cout<<s<<endl;
    }
    return 0;
}