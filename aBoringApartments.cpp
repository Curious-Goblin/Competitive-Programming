#include<iostream>
using namespace std;
//TIME COMPLEXITY = O(T(LOG(N))) SPACE COMPLEXITY = O(1)
int main(){
    int t;
    cin>>t;
    while(t--)
    {
    int a,count=0,r=0,b=0,count1=0,count2=0,noOfDigitsPressed=0;
        cin>>a;
        b=a;
        while(b!=0)
        {
            count++;
            b=b/10;
        }
        r=a%10;
        count1=10;
        for(int i=1;i<=count;i++)
        {
            count2=count2+i;
        }
        for(int i=1;i<=r;i++)
        {
            if(i==r)
            {
                noOfDigitsPressed=noOfDigitsPressed+count2;
            }
            else
            {
                noOfDigitsPressed=noOfDigitsPressed+count1;
            }
        }
        cout<<noOfDigitsPressed<<endl;
    }
    return 0;
}