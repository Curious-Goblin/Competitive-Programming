#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b;
        cin >> a >> b;
        int c = (abs(a - b) % (10) > 0) ? 1 : 0;
        cout << abs(a - b) / 10 + c << endl;
    }
    return 0;
}