#include<iostream>
using namespace std;

int main(){
    int n,count=0,a=2;
    cin>>n;
    int noOfCubesInLevel=1;
    while(!(n<=0))
    {
        n=n-noOfCubesInLevel;
        noOfCubesInLevel=noOfCubesInLevel+a;
        a++;
        if(n>=0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}