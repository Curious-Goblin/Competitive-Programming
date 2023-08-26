#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int responses[n];
    for(int i=0;i<n;i++)
    {
        cin>>responses[i];
    }
    for(int i=0;i<n;i++)
    {
        if(responses[i]==1)
        {
            count=1;
            cout<<"HARD";
            break;
        }
    }
    if(count==0)
    {
        cout<<"EASY";
    }
    return 0;
}