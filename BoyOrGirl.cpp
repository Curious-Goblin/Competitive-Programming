#include<iostream>
#include<string>
using namespace std;
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
int main(){
    string name;
    int count=0;
    cin>>name;
    int frequencyArray[26]={0};
    for(unsigned int i=0;i<name.size();i++)
    {
        frequencyArray[name[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(frequencyArray[i]>=1)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}