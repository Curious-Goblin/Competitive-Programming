#include <iostream>
#include <string>

using namespace std;

void game(int n)
{
    if((n+1)%3==0 || (n-1)%3==0)
    {
        cout<<"First"<<endl;
    }
    else
    {
        cout<<"Second"<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        game(n);
    }
    return 0;
}