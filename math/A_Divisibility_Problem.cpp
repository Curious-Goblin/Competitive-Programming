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
        long long int c = a - (a % b) + b;
        if (a % b != 0)
        {
            cout << c - a << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}