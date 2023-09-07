#include <iostream>
using namespace std;
//TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
int main()
{
    int n, m;
    cin >> n >> m;
    int count = 0;
    if (m % n == 0)
    {
        int a = m / n;
        while (a > 1)
        {
            if (a % 2 == 0)
            {
                a = a / 2;
                count++;
            }
            else if (a % 3 == 0)
            {
                a = a / 3;
                count++;
            }
            else{
                cout<<"-1";
                return 0;
            }
        }
    }
    else
    {
        cout << "-1";
        return 0;
    }
    cout << count;
    return 0;
}