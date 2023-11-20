#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k;
        cin>>x>>y>>k;
        int time=0;
        if(x>=y)
        {
            time=x;
            cout<<time<<endl;
            continue;
        }
        else
        {
            if(y<=(x+k))
            {
                time=y;
                cout<<time<<endl;
                continue;
            }
            else
            {
                time = x+k;
                time = time + 2*(y-(x+k));
                cout<<time<<endl;
            }
        }
    }
    return 0;
}