#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "poddar";
    cout << s.size()<<endl;
    for(int i=1;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}