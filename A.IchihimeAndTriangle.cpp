#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        start:
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        for(int i=a;i<=b;i++)
        {
            int x=i;
            for(int j=b;j<=c;j++)
            {
                int y=j;
                for(int k=c;k<=d;k++)
                {
                    int z=k;
                    if(((x+y)>z)&&((y+z)>x)&&((x+z)>y))
                    {
                        cout<<x<<" "<<y<<" "<<z<<endl;
                        goto start;
                    }
                }
            }
        }
    }
    
    return 0;
}