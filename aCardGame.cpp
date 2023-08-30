#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string cardOnTable,card;
    cin>>cardOnTable;
    vector<string> cardOnHand;
    for(int i=0;i<5;i++)
    {
        cin>>card;
        cardOnHand.push_back(card);
    }
    for(auto &value:cardOnHand)
    {
        if(value[1]==cardOnTable[1] || value[0]==cardOnTable[0])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}