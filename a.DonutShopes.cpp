#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int noOfDonuts=0;
    int cost1=0,cost2=0;
    while(!(cost1>cost2))
    {
        noOfDonuts++;
        cost1=noOfDonuts*a;
        if(noOfDonuts<=b)
        {
            cost2=c;
        }
        else
        {
            cost2=(noOfDonuts/b)*c  + c;
        }
    }
    return 0;
}