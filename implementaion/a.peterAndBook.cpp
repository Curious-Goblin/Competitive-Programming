#include<iostream>
#include<vector>
using namespace std;
//TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
int main(){
    int n;
    int a;
    int day=0;
    vector<int> noOfPages;
    cin>>n;
    for(int i=0;i<7;i++)
    {
        cin>>a;
        noOfPages.push_back(a);
    }int i=0;
    while (n>0)
    {
        day++;
        n=n-noOfPages[i];
        i++;
        if(i==7)
        {
            i=0;
        }
        if(day==8)
        {
            day=1;
        }
    }
    cout<<day<<endl;
    return 0;
}