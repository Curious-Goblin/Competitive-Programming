#include <iostream>
using namespace std;
// TIME COMPLEXITY = O(N) SPACE COMPLEXITY = O(1)
int main()
{
    int k, n, w, count = 1;
    cin >> k >> n >> w;
    while (w != 0)
    {
        n = n - (count * k);
        count++;
        w--;
    }
    if (n < 0)
    {
        cout << (-1) * (n);
    }
    else
    {
        cout << 0;
    }
    return 0;
}