#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int no_of_toast = min({k*l / nl, p / np, c * d});
    int result=no_of_toast/n;
    cout<<result;
    return 0;
}