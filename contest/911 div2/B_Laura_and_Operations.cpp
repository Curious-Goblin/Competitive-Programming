#include <iostream>
#include <vector>
using namespace std;
void solve(int n1, int n2, int n3)
{
    int res1 = 0, res2 = 0, res3 = 0;
    if (abs(n1 - n2) % 2 == 0)
    {
        res3 = 1;
    }
    if (abs(n1 - n3) % 2 == 0)
    {
        res2 = 1;
    }
    if (abs(n2 - n3) % 2 == 0)
    {
        res1 = 1;
    }
    cout<<res1<<" "<<res2<<" "<<res3<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        solve(n1, n2, n3);
    }
}