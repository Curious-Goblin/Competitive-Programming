#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int day1=0,day2=0,c,d;
    day1=min(a,b);
    c=a-min(a,b);
    d=b-min(a,b);
    day2=(c/2)+(d/2);
    cout<<day1<<" "<<day2;
    return 0;
}