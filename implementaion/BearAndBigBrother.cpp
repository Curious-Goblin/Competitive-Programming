#include<iostream>
using namespace std;
// TIME COMPLEXITY = exponential growth SPACE COMPLEXITY = O(1)
int main(){
    int weigh1,weigh2,count=0;
    cin>>weigh1>>weigh2;
    while (weigh1<=weigh2)
    {
        weigh1=weigh1*3;
        weigh2=weigh2*2;
        count++;
    }
    cout<<count;
    return 0;
}